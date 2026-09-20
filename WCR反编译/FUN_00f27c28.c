// FUN_00f27c28 @ 00f27c28

void FUN_00f27c28(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_hangup_026a0d08);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_stopRing_026abee8);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stopRing_026abee8);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hangup_026a0d08);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

