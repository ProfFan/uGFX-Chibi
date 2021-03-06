/******************************************************************************/
/* This file has been generated by the uGFX-Studio                            */
/*                                                                            */
/* http://ugfx.org                                                            */
/******************************************************************************/

#ifndef _GUI_H_
#define _GUI_H_

#include "gfx.h"

// Widget groups
#define GROUP_DEFAULT 0

// GListeners
extern GListener glistener;

// GHandles
extern GHandle ghContainerPage0;
extern GHandle ghConsole1;
extern GHandle ghLabel1;
extern GHandle ghLabelPM25;
extern GHandle ghLabel3;
extern GHandle ghLabelHCHO;
extern GHandle ghLabel5;
extern GHandle ghLabelTemp;
extern GHandle ghLabel7;
extern GHandle ghLabelHumid;
extern GHandle ghLabel26;
extern GHandle ghLabelPM1;
extern GHandle ghLabel28;
extern GHandle ghLabelPM10;

// Function Prototypes
void guiCreate(void);
void guiShowPage(unsigned pageIndex);
void guiEventLoop(void);

#endif /* _GUI_H_ */

