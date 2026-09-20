// authenticatePlusLongPressSuccess: @ 0111574c

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::authenticatePlusLongPressSuccess_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  ID IVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  if (local_28 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_plusLongPressRequirePassword_026af010);
    IVar2 = local_18;
    if ((IVar1 & 1) != 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_plusLongPressPasswordProtectionS_026af020);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_isWithinProtectionWindowForSecon_026aef68,IVar1);
      if ((IVar2 & 1) == 0) {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_plusLongPressFaceIDEnabled_026af028);
        if ((IVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setPendingPlusLongPressSuccess__026aeff0,local_28);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_presentPlusLongPressPasswordAler_026af008);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_evaluatePlusLongPressFaceIDThen__026af030,local_28);
        }
        goto LAB_0111588c;
      }
    }
    (**(code **)(local_28 + 0x10))();
  }
LAB_0111588c:
  _objc_storeStrong(&local_28,0);
  return;
}

