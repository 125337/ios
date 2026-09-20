// getNicknameDisplayPositionIndex @ 01c65378

/* Function Stack Size: 0x10 bytes */

long_long WCRefineNavigationAvatarViewController::getNicknameDisplayPositionIndex
                    (ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showSelfAvatar_026c1f30);
  if (((IVar1 & 1) != 0) &&
     (IVar1 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showOtherAvatar_026c1f28)
     , (IVar1 & 1) != 0)) {
    return 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_nicknameDisplayPosition_026c22b0);
  return param_1;
}

