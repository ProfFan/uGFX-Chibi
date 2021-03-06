/******************************************************************************/
/* This file has been generated by the uGFX-Studio                            */
/*                                                                            */
/* http://ugfx.org                                                            */
/******************************************************************************/

#include "colors.h"
#include "widgetstyles.h"
#include "gui.h"

// GListeners
GListener glistener;

// GHandles
GHandle ghContainerPage0;
GHandle ghConsole1;
GHandle ghLabel1;
GHandle ghLabelPM25;
GHandle ghLabel3;
GHandle ghLabelHCHO;
GHandle ghLabel5;
GHandle ghLabelTemp;
GHandle ghLabel7;
GHandle ghLabelHumid;
GHandle ghLabel26;
GHandle ghLabelPM1;
GHandle ghLabel28;
GHandle ghLabelPM10;

// Fonts
font_t dejavu_sans_16;
font_t dejavu_sans_32_anti_aliased;

static void createPagePage0(void)
{
	GWidgetInit wi;
	gwinWidgetClearInit(&wi);


	// create container widget: ghContainerPage0
	wi.g.show = FALSE;
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 480;
	wi.g.height = 272;
	wi.g.parent = 0;
	wi.text = "Container";
	wi.customDraw = 0;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghContainerPage0 = gwinContainerCreate(0, &wi, 0);

	// Create console widget: ghConsole1
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 170;
	wi.g.width = 460;
	wi.g.height = 100;
	wi.g.parent = ghContainerPage0;
	ghConsole1 = gwinConsoleCreate(0, &wi.g);
	gwinSetColor(ghConsole1, black_studio);
	gwinSetBgColor(ghConsole1, silver_studio);

	// Create label widget: ghLabel1
	wi.g.show = TRUE;
	wi.g.x = 20;
	wi.g.y = 10;
	wi.g.width = 120;
	wi.g.height = 20;
	wi.g.parent = ghContainerPage0;
	wi.text = "PM2.5";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel1 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel1, FALSE);

	// Create label widget: ghLabelPM25
	wi.g.show = TRUE;
	wi.g.x = 20;
	wi.g.y = 30;
	wi.g.width = 110;
	wi.g.height = 40;
	wi.g.parent = ghContainerPage0;
	wi.text = "0.0";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelPM25 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelPM25, FALSE);
	gwinSetFont(ghLabelPM25, dejavu_sans_32_anti_aliased);
	gwinRedraw(ghLabelPM25);

	// Create label widget: ghLabel3
	wi.g.show = TRUE;
	wi.g.x = 140;
	wi.g.y = 10;
	wi.g.width = 120;
	wi.g.height = 20;
	wi.g.parent = ghContainerPage0;
	wi.text = "HCHO";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel3 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel3, FALSE);

	// Create label widget: ghLabelHCHO
	wi.g.show = TRUE;
	wi.g.x = 140;
	wi.g.y = 30;
	wi.g.width = 120;
	wi.g.height = 40;
	wi.g.parent = ghContainerPage0;
	wi.text = "0.0";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelHCHO = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelHCHO, FALSE);
	gwinSetFont(ghLabelHCHO, dejavu_sans_32_anti_aliased);
	gwinRedraw(ghLabelHCHO);

	// Create label widget: ghLabel5
	wi.g.show = TRUE;
	wi.g.x = 20;
	wi.g.y = 80;
	wi.g.width = 120;
	wi.g.height = 20;
	wi.g.parent = ghContainerPage0;
	wi.text = "Temperature";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel5 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel5, FALSE);

	// Create label widget: ghLabelTemp
	wi.g.show = TRUE;
	wi.g.x = 20;
	wi.g.y = 100;
	wi.g.width = 120;
	wi.g.height = 40;
	wi.g.parent = ghContainerPage0;
	wi.text = "0.0";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelTemp = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelTemp, FALSE);
	gwinSetFont(ghLabelTemp, dejavu_sans_32_anti_aliased);
	gwinRedraw(ghLabelTemp);

	// Create label widget: ghLabel7
	wi.g.show = TRUE;
	wi.g.x = 140;
	wi.g.y = 80;
	wi.g.width = 120;
	wi.g.height = 20;
	wi.g.parent = ghContainerPage0;
	wi.text = "Humidity";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel7 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel7, FALSE);

	// Create label widget: ghLabelHumid
	wi.g.show = TRUE;
	wi.g.x = 140;
	wi.g.y = 100;
	wi.g.width = 120;
	wi.g.height = 40;
	wi.g.parent = ghContainerPage0;
	wi.text = "0.0";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelHumid = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelHumid, FALSE);
	gwinSetFont(ghLabelHumid, dejavu_sans_32_anti_aliased);
	gwinRedraw(ghLabelHumid);

	// Create label widget: ghLabel26
	wi.g.show = TRUE;
	wi.g.x = 260;
	wi.g.y = 10;
	wi.g.width = 120;
	wi.g.height = 20;
	wi.g.parent = ghContainerPage0;
	wi.text = "PM1.0";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel26 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel26, FALSE);

	// Create label widget: ghLabelPM1
	wi.g.show = TRUE;
	wi.g.x = 260;
	wi.g.y = 30;
	wi.g.width = 120;
	wi.g.height = 40;
	wi.g.parent = ghContainerPage0;
	wi.text = "0.0";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelPM1 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelPM1, FALSE);
	gwinSetFont(ghLabelPM1, dejavu_sans_32_anti_aliased);
	gwinRedraw(ghLabelPM1);

	// Create label widget: ghLabel28
	wi.g.show = TRUE;
	wi.g.x = 260;
	wi.g.y = 80;
	wi.g.width = 120;
	wi.g.height = 20;
	wi.g.parent = ghContainerPage0;
	wi.text = "PM10";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel28 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel28, FALSE);

	// Create label widget: ghLabelPM10
	wi.g.show = TRUE;
	wi.g.x = 260;
	wi.g.y = 100;
	wi.g.width = 120;
	wi.g.height = 40;
	wi.g.parent = ghContainerPage0;
	wi.text = "0.0";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelPM10 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelPM10, FALSE);
	gwinSetFont(ghLabelPM10, dejavu_sans_32_anti_aliased);
	gwinRedraw(ghLabelPM10);
}

void guiShowPage(unsigned pageIndex)
{
	// Hide all pages
	gwinHide(ghContainerPage0);

	// Show page selected page
	switch (pageIndex) {
	case 0:
		gwinShow(ghContainerPage0);
		break;

	default:
		break;
	}
}

void guiCreate(void)
{
	GWidgetInit wi;

	// Prepare fonts
	dejavu_sans_16 = gdispOpenFont("DejaVuSans16");
	dejavu_sans_32_anti_aliased = gdispOpenFont("DejaVuSans32_aa");

	// Prepare images

	// GWIN settings
	gwinWidgetClearInit(&wi);
	gwinSetDefaultFont(dejavu_sans_16);
	gwinSetDefaultStyle(&black, FALSE);
	gwinSetDefaultColor(black_studio);
	gwinSetDefaultBgColor(white_studio);

	// Create all the display pages
	createPagePage0();

	// Select the default display page
	guiShowPage(0);
}

void guiEventLoop(void)
{
	GEvent* pe;

	while (1) {
		// Get an event
		pe = geventEventWait(&glistener, 0);
		switch (pe->type) {
		}

	}
}

