#include "global.h"
#include "blit.h"
#include "window.h"
#include "menu.h"
#include "palette.h"
#include "event_data.h"
#include "constants/mugshots.h"

#define MUGSHOT_PALETTE_NUM 13

struct Mugshot{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u32* image;
    const u16* palette;
};

void DrawMugshot(void); //VAR_0x8000 = mugshot id
void DrawMugshotAtPos(void); //VAR_0x8000 = mugshot id, VAR_0x8001 = x, VAR_0x8002 = y
void ClearMugshot(void);

static const u16 sMugshotPal_QR[] = INCBIN_U16("graphics/mugshots/palettes/qr_code.gbapal");
static const u32 sMugshotImg_Battle1[] = INCBIN_U32("graphics/mugshots/pics/battle_1.4bpp.smol");
static const u32 sMugshotImg_Battle2[] = INCBIN_U32("graphics/mugshots/pics/battle_2.4bpp.smol");
static const u32 sMugshotImg_Battle3[] = INCBIN_U32("graphics/mugshots/pics/battle_3.4bpp.smol");
static const u32 sMugshotImg_BattleWild[] = INCBIN_U32("graphics/mugshots/pics/battle_wild.4bpp.smol");
static const u32 sMugshotImg_Ice1[] = INCBIN_U32("graphics/mugshots/pics/ice_1.4bpp.smol");
static const u32 sMugshotImg_Ice2[] = INCBIN_U32("graphics/mugshots/pics/ice_2.4bpp.smol");
static const u32 sMugshotImg_Battle4[] = INCBIN_U32("graphics/mugshots/pics/battle_4.4bpp.smol");
static const u32 sMugshotImg_Battle5[] = INCBIN_U32("graphics/mugshots/pics/battle_5.4bpp.smol");
static const u32 sMugshotImg_Battle6[] = INCBIN_U32("graphics/mugshots/pics/battle_6.4bpp.smol");
static const u32 sMugshotImg_Battle7[] = INCBIN_U32("graphics/mugshots/pics/battle_7.4bpp.smol");
static const u32 sMugshotImg_Battle7Part2[] = INCBIN_U32("graphics/mugshots/pics/battle_7_part_2.4bpp.smol");
//static const u32 sMugshotImg_VsBigBlue[] = INCBIN_U32("graphics/mugshots/pics/vs_big_blue.4bpp.smol");
//static const u32 sMugshotImg_AbilityOverload[] = INCBIN_U32("graphics/mugshots/pics/ability_overload.4bpp.smol");
//static const u32 sMugshotImg_LastStand[] = INCBIN_U32("graphics/mugshots/pics/last_stand.4bpp.smol");
//static const u32 sMugshotImg_VsJumpstart[] = INCBIN_U32("graphics/mugshots/pics/vs_jumpstart.4bpp.smol");

#define QR_X 9
#define QR_Y 1
#define QR_W 104
#define QR_H 104

static const struct Mugshot sMugshots[] = {
    [MUGSHOT_BATTLE_1]          = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_Battle1,           .palette = sMugshotPal_QR},
    [MUGSHOT_BATTLE_2]          = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_Battle2,           .palette = sMugshotPal_QR},
    [MUGSHOT_BATTLE_3]          = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_Battle3,           .palette = sMugshotPal_QR},
    [MUGSHOT_BATTLE_WILD]       = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_BattleWild,        .palette = sMugshotPal_QR},
    [MUGSHOT_ICE_1]             = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_Ice1,              .palette = sMugshotPal_QR},
    [MUGSHOT_ICE_2]             = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_Ice2,              .palette = sMugshotPal_QR},
    [MUGSHOT_BATTLE_4]          = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_Battle4,           .palette = sMugshotPal_QR},
    [MUGSHOT_BATTLE_5]          = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_Battle5,           .palette = sMugshotPal_QR},
    [MUGSHOT_BATTLE_6]          = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_Battle6,           .palette = sMugshotPal_QR},
    [MUGSHOT_BATTLE_7]          = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_Battle7,           .palette = sMugshotPal_QR},
    [MUGSHOT_BATTLE_7_PART_2]   = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_Battle7Part2,      .palette = sMugshotPal_QR},
    //[MUGSHOT_VS_BIG_BLUE]       = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_VsBigBlue,         .palette = sMugshotPal_QR},
    //[MUGSHOT_ABILITY_OVERLOAD]  = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_AbilityOverload,   .palette = sMugshotPal_QR},
    //[MUGSHOT_LAST_STAND]        = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_LastStand,         .palette = sMugshotPal_QR},
    //[MUGSHOT_VS_JUMPSTART]      = {.x = QR_X, .y = QR_Y, .width = QR_W, .height = QR_H, .image = sMugshotImg_VsJumpstart,       .palette = sMugshotPal_QR},
};


//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 sMugshotWindow = 0;

void ClearMugshot(void){
    if(sMugshotWindow != 0){
        ClearStdWindowAndFrameToTransparent(sMugshotWindow - 1, 0);
        CopyWindowToVram(sMugshotWindow - 1, 3);
        RemoveWindow(sMugshotWindow - 1);
        sMugshotWindow = 0;
    }
}

static void DrawMugshotCore(const struct Mugshot* const mugshot, int x, int y){
    struct WindowTemplate t;
    u16 windowId;
    
    if(sMugshotWindow != 0){
        ClearMugshot();
    }
    
    #if GAME_VERSION==VERSION_EMERALD
    SetWindowTemplateFields(&t, 0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    #else
    t = SetWindowTemplateFields(0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    #endif
    windowId = AddWindow(&t);
    sMugshotWindow = windowId + 1;
    
    LoadPalette(mugshot->palette, 16 * MUGSHOT_PALETTE_NUM, 32);
    CopyToWindowPixelBuffer(windowId, (const void*)mugshot->image, 0, 0);
    PutWindowRectTilemap(windowId, 0, 0, mugshot->width/8, mugshot->height/8);
    CopyWindowToVram(windowId, 3);
}

void DrawMugshot(void){
    const struct Mugshot* const mugshot = sMugshots + VarGet(VAR_0x8000);
    DrawMugshotCore(mugshot, mugshot->x, mugshot->y);
}

void DrawMugshotAtPos(void){
    DrawMugshotCore(sMugshots + VarGet(VAR_0x8000), VarGet(VAR_0x8001), VarGet(VAR_0x8002));
}