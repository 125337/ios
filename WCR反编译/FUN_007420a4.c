// FUN_007420a4 @ 007420a4

void FUN_007420a4(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_48 [3];
  ulong local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulong local_18;
  
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cc688)(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_18;
  local_30 = param_1;
  FUN_00745c20(local_18,local_24);
  uVar3 = local_30;
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_30;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTag__026caa80,(long)DAT_02324298);
      FUN_00746450(local_48[0],local_18);
      _objc_storeStrong(local_48,0);
    }
  }
  uVar3 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

