// FUN_0000d32c @ 0000d32c

void FUN_0000d32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,byte param_7)

{
  ulong uVar1;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_7;
  local_20 = param_6;
  local_18 = param_5;
  (*DAT_028c79e8)(param_5,param_6,param_7 & 1);
  uVar1 = local_18;
  FUN_0000d980(local_18,&DAT_028c79f0);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c79f2);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 != 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_30,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

