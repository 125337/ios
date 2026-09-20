// getAvatarDisplayModeIndex @ 01c64c60

/* Function Stack Size: 0x10 bytes */

long_long WCRefineNavigationAvatarViewController::getAvatarDisplayModeIndex(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showOtherAvatar_026c1f28);
  if (((IVar1 & 1) != 0) &&
     (IVar1 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showSelfAvatar_026c1f30),
     (IVar1 & 1) != 0)) {
    return 2;
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showOtherAvatar_026c1f28);
  if (((IVar1 & 1) != 0) &&
     (IVar1 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showSelfAvatar_026c1f30),
     (IVar1 & 1) == 0)) {
    return 0;
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showOtherAvatar_026c1f28);
  if (((IVar1 & 1) == 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showSelfAvatar_026c1f30),
     (param_1 & 1) != 0)) {
    return 1;
  }
  return 2;
}

