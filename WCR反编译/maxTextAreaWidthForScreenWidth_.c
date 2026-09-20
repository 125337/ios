// maxTextAreaWidthForScreenWidth: @ 00ff67e0

/* Function Stack Size: 0x18 bytes */

double WCRefineKeywordAlertDanmakuPresenter::maxTextAreaWidthForScreenWidth_
                 (ID param_1,SEL param_2,double param_3)

{
  double local_90;
  double local_88;
  double local_80;
  
  local_80 = param_3 * 0.5;
  if (210.0 <= local_80) {
    local_80 = 210.0;
  }
  local_88 = local_80 - 53.0;
  if (local_88 < 56.0) {
    local_88 = 56.0;
  }
  if (132.0 <= local_88) {
    local_90 = 132.0;
  }
  else {
    local_90 = local_88;
  }
  return local_90;
}

