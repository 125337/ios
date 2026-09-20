// authenticateTitleLongPressSuccess: @ 01114b28

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::authenticateTitleLongPressSuccess_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  if (local_28 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isLocked_0269db88);
    if ((IVar1 & 1) == 0) {
      (**(code **)(local_28 + 0x10))();
    }
    else {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_titleLongPressRequirePassword_026aefa8);
      if (((IVar1 & 1) == 0) ||
         (IVar1 = local_18,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_18,PTR_s_isWithinPasswordProtectionWindow_026aefc8), (IVar1 & 1) != 0)) {
        (**(code **)(local_28 + 0x10))();
      }
      else {
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_titleLongPressFaceIDEnabled_026aefd0);
        if ((IVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setPendingTitleLongPressSuccess__026aef88,local_28);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_presentTitleLongPressPasswordAle_026aefa0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_evaluateTitleLongPressFaceIDThen_026aefd8,local_28);
        }
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

