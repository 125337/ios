// FUN_001ce214 @ 001ce214

void FUN_001ce214(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_40 [3];
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_001d4148(param_1);
  uVar2 = local_18;
  (*DAT_028c8ef8)(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_28;
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = uVar1;
    FUN_001d4b20(uVar1);
    FUN_00222fe4(local_40[0]);
    _objc_storeStrong(local_40,0);
  }
  FUN_001d4148(local_18);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

