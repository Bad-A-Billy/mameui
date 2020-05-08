// For licensing and usage information, read docs/winui_license.txt
// MASTER
//****************************************************************************

#ifndef MUI_OPTS_H
#define MUI_OPTS_H

#include "winmain.h"
#include "winui.h"

#if 0
enum class m_optnum
{
	MOPT_ROMPATH,
	MOPT_HASHPATH,
	MOPT_SAMPLEPATH,
	MOPT_ARTPATH,
	MOPT_CTRLRPATH,
	MOPT_INIPATH,
	MOPT_FONTPATH,
	MOPT_CHEATPATH,
	MOPT_CROSSHAIRPATH,
	MOPT_PLUGINSPATH,
	MOPT_LANGUAGEPATH,
	MOPT_SWPATH,
	MOPT_CFGPATH,
	MOPT_NVRAMPATH,
	MOPT_INPUTPATH,
	MOPT_SAVESTATEPATH,
	MOPT_DIFFPATH,
	MOPT_COMMENTPATH,
	MOPT_DATPATH,
	MOPT_FOLDERPATH,
	MOPT_UIPATH,
	MOPT_ICONSPATH,
	MOPT_SS_ARTPREVPATH,
	MOPT_SS_BOSSPATH,
	MOPT_SS_CABPATH,
	MOPT_SS_COVERPATH,
	MOPT_SS_CPANELPATH,
	MOPT_SS_ENDPATH,
	MOPT_SS_FLYERPATH,
	MOPT_SS_GAMEOVERPATH,
	MOPT_SS_HOWTOPATH,
	MOPT_SS_LOGOPATH,
	MOPT_SS_MARQUEEPATH,
	MOPT_SS_PCBPATH,
	MOPT_SS_SCOREPATH,
	MOPT_SS_SELECTPATH,
	MOPT_SS_SNAPPATH,
	MOPT_SS_TITLEPATH,
	MOPT_SS_VERSUSPATH,
};

typedef struct
{
	m_optnum    optnum;
	LPCSTR      optname;
	LPCSTR      defdata;
	uint8_t     optfile; // 1 = mame.ini; 2 = ui.ini; 4 = mameui.ini
}
MAINOPTINFO;

// must be in same order as enum above
const MAINOPTINFO m_opt_info [] =
{
	{ m_optnum::MOPT_ROMPATH,         OPTION_MEDIAPATH,          "roms",      0x01 },
	{ m_optnum::MOPT_HASHPATH,        OPTION_HASHPATH,           "hash",      0x01 },
	{ m_optnum::MOPT_SAMPLEPATH,      OPTION_SAMPLEPATH,         "samples",   0x01 },
	{ m_optnum::MOPT_ARTPATH,         OPTION_ARTPATH,            "artwork",   0x01 },
	{ m_optnum::MOPT_CTRLRPATH,       OPTION_CTRLRPATH,          "ctrlr",     0x01 },
	{ m_optnum::MOPT_INIPATH,         OPTION_INIPATH,            "ini",       0x01 },
	{ m_optnum::MOPT_FONTPATH,        OPTION_FONTPATH,           ".",         0x01 },
	{ m_optnum::MOPT_CHEATPATH,       OPTION_CHEATPATH,          "cheat",     0x01 },
	{ m_optnum::MOPT_CROSSHAIRPATH,   OPTION_CROSSHAIRPATH,      "crosshair", 0x01 },
	{ m_optnum::MOPT_PLUGINSPATH,     OPTION_PLUGINSPATH,        "plugins",   0x01 },
	{ m_optnum::MOPT_LANGUAGEPATH,    OPTION_LANGUAGEPATH,       "language",  0x01 },
	{ m_optnum::MOPT_SWPATH,          OPTION_SWPATH,             "data",      0x01 },
	{ m_optnum::MOPT_CFGPATH,         OPTION_CFG_DIRECTORY,      "cfg",       0x01 },
	{ m_optnum::MOPT_NVRAMPATH,       OPTION_NVRAM_DIRECTORY,    "nvram",     0x01 },
	{ m_optnum::MOPT_INPUTPATH,       OPTION_INPUT_DIRECTORY,    "inp",       0x01 },
	{ m_optnum::MOPT_SAVESTATEPATH,   OPTION_STATE_DIRECTORY,    "sta",       0x01 },
	{ m_optnum::MOPT_DIFFPATH,        OPTION_DIFF_DIRECTORY,     "diff",      0x01 },
	{ m_optnum::MOPT_COMMENTPATH,     OPTION_COMMENT_DIRECTORY,  "comments",  0x01 },
	{ m_optnum::MOPT_DATPATH,         OPTION_HISTORY_PATH,       "history",   0x02 },
	{ m_optnum::MOPT_FOLDERPATH,      OPTION_CATEGORYINI_PATH,   "folders",   0x02 },
	{ m_optnum::MOPT_UIPATH,          OPTION_UI_PATH,            "ui",        0x02 },
	{ m_optnum::MOPT_ICONSPATH,       OPTION_ICONS_PATH,         "icons",     0x02 },
	{ m_optnum::MOPT_SS_ARTPREVPATH,  OPTION_ARTPREV_PATH,       "artprev",   0x02 },
	{ m_optnum::MOPT_SS_BOSSPATH,     OPTION_BOSSES_PATH,        "bosses",    0x02 },
	{ m_optnum::MOPT_SS_CABPATH,      OPTION_CABINETS_PATH,      "cabinets",  0x02 },
	{ m_optnum::MOPT_SS_COVERPATH,    OPTION_COVER_PATH,         "covers",    0x02 },
	{ m_optnum::MOPT_SS_CPANELPATH,   OPTION_CPANELS_PATH,       "cpanel",    0x02 },
	{ m_optnum::MOPT_SS_ENDPATH,      OPTION_ENDS_PATH,          "ends",      0x02 },
	{ m_optnum::MOPT_SS_FLYERPATH,    OPTION_FLYERS_PATH,        "flyers",    0x02 },
	{ m_optnum::MOPT_SS_GAMEOVERPATH, OPTION_GAMEOVER_PATH,      "gameover",  0x02 },
	{ m_optnum::MOPT_SS_HOWTOPATH,    OPTION_HOWTO_PATH,         "howto",     0x02 },
	{ m_optnum::MOPT_SS_LOGOPATH,     OPTION_LOGOS_PATH,         "logo",      0x02 },
	{ m_optnum::MOPT_SS_MARQUEEPATH,  OPTION_MARQUEES_PATH,      "marquees",  0x02 },
	{ m_optnum::MOPT_SS_PCBPATH,      OPTION_PCBS_PATH,          "pcb",       0x02 },
	{ m_optnum::MOPT_SS_SCOREPATH,    OPTION_SCORES_PATH,        "scores",    0x02 },
	{ m_optnum::MOPT_SS_SELECTPATH,   OPTION_SELECT_PATH,        "select",    0x02 },
	{ m_optnum::MOPT_SS_SNAPPATH,     OPTION_SNAPSHOT_DIRECTORY, "snap",      0x01 },
	{ m_optnum::MOPT_SS_TITLEPATH,    OPTION_TITLES_PATH,        "titles",    0x02 },
	{ m_optnum::MOPT_SS_VERSUSPATH,   OPTION_VERSUS_PATH,        "versus",    0x02 },
};

int m_index = static_cast<uint8_t>(MOPT_whatever);

#endif

// These help categorise the folders on the left side
// This list is mainly for documentation, although a few are used in code
typedef enum {
	// Global types
	OPTIONS_GLOBAL = 0,
	OPTIONS_HORIZONTAL,
	OPTIONS_VERTICAL,
	OPTIONS_RASTER,
	OPTIONS_VECTOR,
	OPTIONS_LCD,
	OPTIONS_ARCADE,
	OPTIONS_CONSOLE,
	OPTIONS_COMPUTER,
	OPTIONS_OTHERSYS,
	// Local types
	OPTIONS_SOURCE,
	OPTIONS_GPARENT,
	OPTIONS_PARENT,
	OPTIONS_GAME,
	// EOF marker
	OPTIONS_MAX
} OPTIONS_TYPE;

// List of columns in the main game list
enum
{
	COLUMN_GAMES = 0,
	COLUMN_SRCDRIVERS,
	COLUMN_DIRECTORY,
	COLUMN_TYPE,
	COLUMN_ORIENTATION,
	COLUMN_MANUFACTURER,
	COLUMN_YEAR,
	COLUMN_PLAYED,
	COLUMN_PLAYTIME,
	COLUMN_CLONE,
	COLUMN_TRACKBALL,
	COLUMN_SAMPLES,
	COLUMN_ROMS,
	COLUMN_MAX
};

#define LOCAL_OPTIONS   -10
#define GLOBAL_OPTIONS  -1

typedef struct
{
	int x, y, width, height;
} AREA;

typedef struct
{
	char *screen;
	char *aspect;
	char *resolution;
	char *view;
} ScreenParams;

// List of artwork types to display in the screen shot area
enum
{
	// these must match array of strings image_tabs_long_name in mui_opts.cpp
	// if you add new Tabs, be sure to also add them to the ComboBox init in dialogs.cpp
	TAB_ARTWORK = 0,
	TAB_BOSSES,
	TAB_CABINET,
	TAB_CONTROL_PANEL,
	TAB_COVER,
	TAB_ENDS,
	TAB_FLYER,
	TAB_GAMEOVER,
	TAB_HOWTO,
	TAB_LOGO,
	TAB_MARQUEE,
	TAB_PCB,
	TAB_SCORES,
	TAB_SELECT,
	TAB_SCREENSHOT,
	TAB_TITLE,
	TAB_VERSUS,
	TAB_HISTORY,
	MAX_TAB_TYPES,
	BACKGROUND,
	TAB_ALL,
	TAB_NONE
};
// Because we have added the Options after MAX_TAB_TYPES, we have to subtract 3 here
// (that's how many options we have after MAX_TAB_TYPES)
#define TAB_SUBTRACT 3

BOOL OptionsInit(void);

#define OPTIONS_TYPE_GLOBAL -1
#define OPTIONS_TYPE_FOLDER -2

bool AreOptionsEqual(windows_options &opts1, windows_options &opts2);
void OptionsCopy(windows_options &source, windows_options &dest);
void SetDirectories(windows_options &opts);

void load_options(windows_options &opts, OPTIONS_TYPE opt_type, int game_num, bool set_system_name);
void save_options(windows_options &opts, OPTIONS_TYPE opt_type, int game_num);

void SetSystemName(windows_options &opts, OPTIONS_TYPE opt_type, int driver_index);

windows_options &MameUIGlobal(void);

void LoadFolderFlags(void);

// Start interface to directories.h
const string GetRomDirs(void);
void SetRomDirs(const char *paths);

const string GetSampleDirs(void);
void SetSampleDirs(const char *paths);

const string GetArtDir(void);
void SetArtDir(const char *path);

const string GetArtworkDir(void);
void SetArtworkDir(const char *path);

const string GetBossesDir(void);
void SetBossesDir(const char *path);

const string GetCabinetDir(void);
void SetCabinetDir(const char *path);

const string GetCheatDir(void);
void SetCheatDir(const char *path);

const string GetCfgDir(void);
void SetCfgDir(const char *path);

const string GetControlPanelDir(void);
void SetControlPanelDir(const char *path);

const string GetCoversDir(void);
void SetCoversDir(const char *path);

const string GetCtrlrDir(void);
void SetCtrlrDir(const char *path);

const string GetCrosshairDir(void);
void SetCrosshairDir(const char *paths);

const string GetDatsDir(void);
void SetDatsDir(const char *path);

const string GetDiffDir(void);
void SetDiffDir(const char *path);

const string GetEndsDir(void);
void SetEndsDir(const char *path);

const string GetFlyerDir(void);
void SetFlyerDir(const char *path);

const string GetFolderDir(void);
void SetFolderDir(const char *path);

const string GetFontDir(void);
void SetFontDir(const char *paths);

const string GetGameOverDir(void);
void SetGameOverDir(const char *path);

const string GetHashDirs(void);
void SetHashDirs(const char *paths);

const string GetHLSLDir(void);
void SetHLSLDir(const char *path);

const string GetHowToDir(void);
void SetHowToDir(const char *path);

const string GetIconsDir(void);
void SetIconsDir(const char *path);

const string GetImgDir(void);
void SetImgDir(const char *path);

const char *GetIniDir(void);
void SetIniDir(const char *path);

const string GetInpDir(void);
void SetInpDir(const char *path);

const string GetLangDir(void);
void SetLangDir(const char *path);

const string GetLogoDir(void);
void SetLogoDir(const char *path);

const string GetManualsDir(void);
void SetManualsDir(const char* path);

const string GetMarqueeDir(void);
void SetMarqueeDir(const char *path);

const string GetNvramDir(void);
void SetNvramDir(const char *path);

const string GetPcbDir(void);
void SetPcbDir(const char *path);

const string GetPluginsDir(void);
void SetPluginsDir(const char *path);

const string GetScoresDir(void);
void SetScoresDir(const char *path);

const string GetStateDir(void);
void SetStateDir(const char *path);

const string GetTitlesDir(void);
void SetTitlesDir(const char *path);

const string GetSelectDir(void);
void SetSelectDir(const char *path);

const string GetSWDir(void);
void SetSWDir(const char *path);

const string GetVersusDir(void);
void SetVersusDir(const char *path);

const string GetVideoDir(void);
void SetVideoDir(const char *path);

// End interface to directories.h

void SaveOptions(void);
void SaveDefaultOptions(void);
void SaveGameListOptions(void);

void ResetGUI(void);
void ResetGameDefaults(void);
void ResetAllGameOptions(void);

const char * GetImageTabLongName(int tab_index);
const char * GetImageTabShortName(int tab_index);

void SetViewMode(int val);
int  GetViewMode(void);

void SetGameCheck(BOOL game_check);
BOOL GetGameCheck(void);

void SetJoyGUI(BOOL use_joygui);
BOOL GetJoyGUI(void);

void SetKeyGUI(BOOL use_keygui);
BOOL GetKeyGUI(void);

void SetCycleScreenshot(int cycle_screenshot);
int GetCycleScreenshot(void);

void SetStretchScreenShotLarger(BOOL stretch);
BOOL GetStretchScreenShotLarger(void);

void SetScreenshotBorderSize(int size);
int GetScreenshotBorderSize(void);

void SetScreenshotBorderColor(COLORREF uColor);
COLORREF GetScreenshotBorderColor(void);

void SetFilterInherit(BOOL inherit);
BOOL GetFilterInherit(void);

void SetOffsetClones(BOOL offset);
BOOL GetOffsetClones(void);

void SetSavedFolderID(UINT val);
UINT GetSavedFolderID(void);

void SetOverrideRedX(BOOL val);
BOOL GetOverrideRedX(void);

BOOL GetShowFolder(int folder);
void SetShowFolder(int folder,BOOL show);

void SetShowStatusBar(BOOL val);
BOOL GetShowStatusBar(void);

void SetShowToolBar(BOOL val);
BOOL GetShowToolBar(void);

void SetShowTabCtrl(BOOL val);
BOOL GetShowTabCtrl(void);

void SetCurrentTab(int val);
int GetCurrentTab(void);

void SetDefaultGame(int val);
uint32_t GetDefaultGame(void);

void SetWindowArea(const AREA *area);
void GetWindowArea(AREA *area);

void SetWindowState(UINT state);
UINT GetWindowState(void);

void SetWindowPanes(int val);
UINT GetWindowPanes(void);

void SetColumnWidths(int widths[]);
void GetColumnWidths(int widths[]);

void SetColumnOrder(int order[]);
void GetColumnOrder(int order[]);

void SetColumnShown(int shown[]);
void GetColumnShown(int shown[]);

void SetSplitterPos(int splitterId, int pos);
int  GetSplitterPos(int splitterId);

void SetCustomColor(int iIndex, COLORREF uColor);
COLORREF GetCustomColor(int iIndex);

void SetListFont(const LOGFONT *font);
void GetListFont(LOGFONT *font);

DWORD GetFolderFlags(int folder_index);

void SetListFontColor(COLORREF uColor);
COLORREF GetListFontColor(void);

void SetListCloneColor(COLORREF uColor);
COLORREF GetListCloneColor(void);

int GetHistoryTab(void);
void SetHistoryTab(int tab,BOOL show);

int GetShowTab(int tab);
void SetShowTab(int tab,BOOL show);
BOOL AllowedToSetShowTab(int tab,BOOL show);

void SetSortColumn(int column);
int  GetSortColumn(void);

void SetSortReverse(BOOL reverse);
BOOL GetSortReverse(void);

const string GetLanguageUI(void);

bool GetEnablePlugins(void);

const string GetPlugins(void);

const char *GetSnapName(void);
void SetSnapName(const char *pattern);

const string GetBgDir(void);
void SetBgDir(const char *path);

void ResetGameOptions(int driver_index);

int GetRomAuditResults(uint32_t driver_index);
void SetRomAuditResults(uint32_t driver_index, int audit_results);

int GetSampleAuditResults(uint32_t driver_index);
void SetSampleAuditResults(uint32_t driver_index, int audit_results);

void IncrementPlayCount(uint32_t driver_index);
uint32_t GetPlayCount(uint32_t driver_index);
void ResetPlayCount(int driver_index);

void IncrementPlayTime(uint32_t driver_index, uint32_t playtime);
uint32_t GetPlayTime(uint32_t driver_index);
void GetTextPlayTime(uint32_t driver_index, char *buf);
void ResetPlayTime(int driver_index);

const char * GetVersionString(void);

bool DriverHasSoftware(uint32_t drvindex);

void SaveDefaultOptions(void);

BOOL IsGlobalOption(const char *option_name);



// Keyboard control of ui
input_seq* Get_ui_key_up(void);
input_seq* Get_ui_key_down(void);
input_seq* Get_ui_key_left(void);
input_seq* Get_ui_key_right(void);
input_seq* Get_ui_key_start(void);
input_seq* Get_ui_key_pgup(void);
input_seq* Get_ui_key_pgdwn(void);
input_seq* Get_ui_key_home(void);
input_seq* Get_ui_key_end(void);
input_seq* Get_ui_key_ss_change(void);
input_seq* Get_ui_key_history_up(void);
input_seq* Get_ui_key_history_down(void);

input_seq* Get_ui_key_context_filters(void);
input_seq* Get_ui_key_select_random(void);
input_seq* Get_ui_key_game_audit(void);
input_seq* Get_ui_key_game_properties(void);
input_seq* Get_ui_key_help_contents(void);
input_seq* Get_ui_key_update_gamelist(void);
input_seq* Get_ui_key_view_folders(void);
input_seq* Get_ui_key_view_fullscreen(void);
input_seq* Get_ui_key_view_pagetab(void);
input_seq* Get_ui_key_view_picture_area(void);
input_seq* Get_ui_key_view_software_area(void);
input_seq* Get_ui_key_view_status(void);
input_seq* Get_ui_key_view_toolbars(void);

input_seq* Get_ui_key_view_tab_cabinet(void);
input_seq* Get_ui_key_view_tab_cpanel(void);
input_seq* Get_ui_key_view_tab_flyer(void);
input_seq* Get_ui_key_view_tab_history(void);
input_seq* Get_ui_key_view_tab_marquee(void);
input_seq* Get_ui_key_view_tab_screenshot(void);
input_seq* Get_ui_key_view_tab_title(void);
input_seq* Get_ui_key_view_tab_pcb(void);
input_seq* Get_ui_key_quit(void);


int GetUIJoyUp(int joycodeIndex);
void SetUIJoyUp(int joycodeIndex, int val);

int GetUIJoyDown(int joycodeIndex);
void SetUIJoyDown(int joycodeIndex, int val);

int GetUIJoyLeft(int joycodeIndex);
void SetUIJoyLeft(int joycodeIndex, int val);

int GetUIJoyRight(int joycodeIndex);
void SetUIJoyRight(int joycodeIndex, int val);

int GetUIJoyStart(int joycodeIndex);
void SetUIJoyStart(int joycodeIndex, int val);

int GetUIJoyPageUp(int joycodeIndex);
void SetUIJoyPageUp(int joycodeIndex, int val);

int GetUIJoyPageDown(int joycodeIndex);
void SetUIJoyPageDown(int joycodeIndex, int val);

int GetUIJoyHome(int joycodeIndex);
void SetUIJoyHome(int joycodeIndex, int val);

int GetUIJoyEnd(int joycodeIndex);
void SetUIJoyEnd(int joycodeIndex, int val);

int GetUIJoySSChange(int joycodeIndex);
void SetUIJoySSChange(int joycodeIndex, int val);

int GetUIJoyHistoryUp(int joycodeIndex);
void SetUIJoyHistoryUp(int joycodeIndex, int val);

int GetUIJoyHistoryDown(int joycodeIndex);
void SetUIJoyHistoryDown(int joycodeIndex, int val);

int GetUIJoyExec(int joycodeIndex);
void SetUIJoyExec(int joycodeIndex, int val);

const string GetExecCommand(void);
void SetExecCommand(char *cmd);

int GetExecWait(void);
void SetExecWait(int wait);

BOOL GetHideMouseOnStartup(void);
void SetHideMouseOnStartup(BOOL hide);

BOOL GetRunFullScreen(void);
void SetRunFullScreen(BOOL fullScreen);

uint32_t GetDriverCacheLower(uint32_t driver_index);
uint32_t GetDriverCacheUpper(uint32_t driver_index);
void SetDriverCache(uint32_t driver_index, uint32_t val);
BOOL RequiredDriverCache(void);
void ForceRebuild(void);
BOOL DriverIsComputer(uint32_t driver_index);
BOOL DriverIsConsole(uint32_t driver_index);
BOOL DriverIsModified(uint32_t driver_index);
BOOL DriverIsImperfect(uint32_t driver_index);
string GetGameName(uint32_t driver_index);

// from optionsms.h (MESSUI)

enum
{
	SW_COLUMN_IMAGES,
	SW_COLUMN_MAX
};

enum
{
	SL_COLUMN_IMAGES,
	SL_COLUMN_GOODNAME,
	SL_COLUMN_MANUFACTURER,
	SL_COLUMN_YEAR,
	SL_COLUMN_PLAYABLE,
	SL_COLUMN_USAGE,
	SL_COLUMN_MAX
};

void SetSWColumnWidths(int widths[]);
void GetSWColumnWidths(int widths[]);
void SetSWColumnOrder(int order[]);
void GetSWColumnOrder(int order[]);
void SetSWColumnShown(int shown[]);
void GetSWColumnShown(int shown[]);
void SetSWSortColumn(int column);
int  GetSWSortColumn(void);
void SetSWSortReverse(BOOL reverse);
BOOL GetSWSortReverse(void);

void SetSLColumnWidths(int widths[]);
void GetSLColumnWidths(int widths[]);
void SetSLColumnOrder(int order[]);
void GetSLColumnOrder(int order[]);
void SetSLColumnShown(int shown[]);
void GetSLColumnShown(int shown[]);
void SetSLSortColumn(int column);
int  GetSLSortColumn(void);
void SetSLSortReverse(BOOL reverse);
BOOL GetSLSortReverse(void);

void SetSelectedSoftware(int driver_index, string opt_name, const char *software);

void SetCurrentSoftwareTab(int val);
int GetCurrentSoftwareTab(void);


#endif

