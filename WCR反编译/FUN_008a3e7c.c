// FUN_008a3e7c @ 008a3e7c

void FUN_008a3e7c(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40 [3];
  ulong local_28;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  uVar1 = local_18;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_combineSendView_026a9788);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_combineSendView_026a9788);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_28 != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_updateSelected__026a9790);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateSelected__026a9790,local_19 & 1);
    }
  }
  local_40[0] = 0;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_controlCenter_026a9798);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_controlCenter_026a9798);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40[0];
    local_40[0] = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_40[0] != 0) {
    uVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40[0],PTR_s_respondsToSelector__026ca818,PTR_s_setIsCombineSend__026a97a0);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40[0],PTR_s_setIsCombineSend__026a97a0,local_19 & 1);
    }
  }
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onCombineSendCheckChanged_026a97a8);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onCombineSendCheckChanged_026a97a8);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

