// getTapActionIndex @ 01c65778

/* Function Stack Size: 0x10 bytes */

long_long WCRefineNavigationAvatarViewController::getTapActionIndex(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tapAction_026c2290);
  if (param_1 != 0) {
    if (param_1 == 1) {
      return 1;
    }
    if (param_1 == 2) {
      return 2;
    }
  }
  return 0;
}

