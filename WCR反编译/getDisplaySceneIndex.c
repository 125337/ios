// getDisplaySceneIndex @ 01c650a0

/* Function Stack Size: 0x10 bytes */

long_long WCRefineNavigationAvatarViewController::getDisplaySceneIndex(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showInPrivate_026c1f10);
  if (((IVar1 & 1) != 0) &&
     (IVar1 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showInGroup_026c1f18),
     (IVar1 & 1) == 0)) {
    return 0;
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showInPrivate_026c1f10);
  if (((IVar1 & 1) == 0) &&
     (IVar1 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showInGroup_026c1f18),
     (IVar1 & 1) != 0)) {
    return 1;
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showInPrivate_026c1f10);
  if (((IVar1 & 1) != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showInGroup_026c1f18), (param_1 & 1) != 0)
     ) {
    return 2;
  }
  return 2;
}

