// FUN_001d5230 @ 001d5230

void FUN_001d5230(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_40;
  uint local_38;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_40 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    uVar2 = local_40;
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_38 = (uint)bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_38 == 0) {
      local_18 = 0;
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

