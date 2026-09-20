// FUN_0170b798 @ 0170b798

void FUN_0170b798(long param_1,byte param_2,byte param_3)

{
  ulong uVar1;
  ulong local_30;
  long local_28;
  byte local_1a;
  byte local_19;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_28 = param_1;
  local_1a = param_3;
  local_19 = param_2;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setOn__0269dc80,local_19 & 1);
  if ((((byte)uVar1 & 1) != (local_19 & 1)) &&
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s__impactFeedbackGenerator_026b3880)
     , (uVar1 & 1) != 0)) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s__impactFeedbackGenerator_026b3880);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((local_1a & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_sendActionsForControlEvents__026a4650,0x1000);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

