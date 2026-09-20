// FUN_0064b610 @ 0064b610

void FUN_0064b610(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint local_60;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cbb90)(param_1,param_2);
  FUN_006620a0();
  if ((param_1 & 1) != 0) {
    uVar1 = local_18;
    FUN_0066e298();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_28 = uVar1;
    _objc_getAssociatedObject(local_18,&DAT_028cbc90);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_60 = 0;
    if ((uVar2 & 1) != 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
      local_60 = (uint)uVar1 ^ 1;
    }
    uVar1 = local_28;
    FUN_0066c6c4();
    if ((((uVar1 & 1) != 0) || (uVar1 = local_18, FUN_0066cfc4(), (uVar1 & 1) != 0)) ||
       ((local_60 & 1) != 0)) {
      FUN_0066d09c(local_18,local_28);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

