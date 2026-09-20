// FUN_00321318 @ 00321318

void FUN_00321318(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_a0;
  ulong local_80;
  ulong local_50;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = local_20 == 0;
  if (bVar1) {
    local_80 = 0;
  }
  else {
    local_40 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_80;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_a0 = 0;
  if ((uVar3 & 1) != 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a0 = (uint)uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_28;
  if ((local_a0 & 1) == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

