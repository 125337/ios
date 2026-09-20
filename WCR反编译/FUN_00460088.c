// FUN_00460088 @ 00460088

void FUN_00460088(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_hideWithAnimated__026a3eb8);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_hide_026a3ec0);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hide_026a3ec0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideWithAnimated__026a3eb8,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

