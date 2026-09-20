// FUN_0083b588 @ 0083b588

void FUN_0083b588(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulong local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  FUN_0083b760();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_3;
  if (param_3 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = &cf_xiaowei_filled;
    pcVar2 = &cf_xiaowei_filled;
    FUN_0081d4f0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_svgImageNamed_size_color__026a1350;
    uVar3 = local_30;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_size_color__026a1350)
    ;
    if ((uVar3 & 1) == 0) {
      local_18 = 0;
    }
    else {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,uStack_20,local_30,puVar1,local_40,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
    }
    local_34 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

