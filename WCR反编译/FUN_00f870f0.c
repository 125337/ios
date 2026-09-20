// FUN_00f870f0 @ 00f870f0

void FUN_00f870f0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_38;
  uint local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_visionBgView_026acc20);
  if ((uVar2 & 1) != 0) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visionBgView_026acc20);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_28 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar2 = local_28;
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_2c = (uint)bVar1;
    _objc_storeStrong(&local_28,0);
    if (local_2c != 0) goto LAB_00f87284;
  }
  uVar2 = local_20;
  FUN_00f877ac(local_20,"_visionBgView");
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  if (uVar2 == 0) {
    uVar3 = local_20;
    FUN_00f877ac(local_20,"visionBgView");
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar2;
  local_2c = 1;
  _objc_storeStrong(&local_38,0);
LAB_00f87284:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

