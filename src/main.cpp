// beautiful_katamari_recomp - ReXGlue Recompiled Project

#include <rex/app/title_app.h>

#include "generated/default/beautiful_katamari_recomp_init.h"

class BeautifulKatamariRecompApp : public rex::app::TitleApp {
 public:
  BeautifulKatamariRecompApp() : TitleApp("beautiful_katamari_recomp", kPPCImageConfig) {}
};

REX_TITLE_APP(BeautifulKatamariRecompApp)
