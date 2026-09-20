// FUN_008b8b30 @ 008b8b30

byte FUN_008b8b30(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  ulong local_a0;
  ulong local_68;
  ulong local_60;
  int local_54;
  ulong local_50;
  byte local_41;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_008b4e10();
  uVar4 = local_20;
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
    goto LAB_008b8e90;
  }
  local_41 = 0;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
LAB_008b8c78:
    local_a0 = local_20;
  }
  else {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    if (uVar4 == 0) goto LAB_008b8c78;
    local_a0 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a0;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  uVar4 = local_38;
  FUN_008b9014();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar4;
  if (uVar4 == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    FUN_008b91b0(uVar4,PTR_s_type_0269e6f8,0x80000000);
    local_54 = (int)uVar4;
    if (local_54 == 3) {
      uVar4 = local_50;
      FUN_008b9320(0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar4;
      FUN_008b9684();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
      local_11 = uVar4 != 0;
      local_30 = 1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_11 = 0;
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
LAB_008b8e90:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

