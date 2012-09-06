/****************************************************************************
* FreeType font
****************************************************************************/
#ifndef _FTFONTS_
#define _FTFONTS_

#define MCDATAOFFSET 64
#define FONT_SIZE 16 //pixels
//#define PRESSED_BUTTON_A 100 /* Free mode */
#define DELETE_MODE 200
#define BACKUP_MODE 300
#define RESTORE_MODE 400
//#define RELOAD_MODE 500 /* Free mode */

#ifdef HW_RVL
void initialise_power() ;
#endif

int FT_Init ();
void setfontsize (int pixelsize);
void setfontcolour (u8 r, u8 g, u8 b);
void DrawText (int x, int y, char *text);
//extern void ClearScreen ();
void ShowScreen ();
void ShowAction (char *msg);
void WaitPrompt (char *msg);
int WaitPromptChoice ( char *msg, char *bmsg, char *amsg);
int WaitPromptChoiceAZ ( char *msg, char *bmsg, char *amsg);
int ShowSelector (int saveinfo);
int SelectMode ();
void writeStatusBar(char *line1, char *line2);
void clearLeftPane();
void clearRightPane();
/****************************************************************************
 *  Draw functions - lines, boxes
 ****************************************************************************/
void DrawHLine (int x1, int x2, int y, int color);
void DrawVLine (int x, int y1, int y2, int color);
void DrawBox (int x1, int y1, int x2, int y2, int color);
void DrawBoxFilled (int x1, int y1, int x2, int y2, int color);


#endif