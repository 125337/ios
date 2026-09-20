// FUN_004ea6b0 @ 004ea6b0

void FUN_004ea6b0(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_d8;
  byte local_d0;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  byte local_5b;
  byte local_5a;
  byte local_59;
  ulong local_58;
  ulong local_50;
  byte local_42;
  byte local_41;
  undefined *local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_38 = 1;
    goto LAB_004eac44;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_messageTripleTapEnabled_026a42f8);
  local_41 = (byte)puVar2;
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_messageDoubleTapTripleOnlyEnable_026a4308);
  local_42 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    local_42 = local_41 ^ 1;
  }
  local_42 = local_42 & 1;
  uVar3 = local_28;
  FUN_004e2550();
  uVar4 = local_28;
  local_50 = uVar3;
  FUN_004e240c();
  puVar2 = local_40;
  local_58 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_messageDoubleTapEnabled_026a4300);
  local_d0 = 0;
  if ((((ulong)puVar2 & 1) != 0) && (local_d0 = 0, (local_42 & 1) != 0)) {
    uVar3 = local_50;
    FUN_004e1958();
    local_d0 = (byte)uVar3;
  }
  local_59 = local_d0 & 1;
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_messageDoubleTapEnabled_026a4300);
  local_d8 = 0;
  if ((((ulong)puVar2 & 1) != 0) && (local_d8 = 0, (local_42 & 1) == 0)) {
    uVar3 = local_50;
    FUN_004e1958();
    local_d8 = (byte)uVar3;
  }
  local_5a = local_d8 & 1;
  if ((local_41 & 1) == 0) {
LAB_004ea914:
    bVar1 = local_59;
  }
  else {
    uVar3 = local_58;
    FUN_004e1958();
    bVar1 = 1;
    if ((uVar3 & 1) == 0) goto LAB_004ea914;
  }
  uVar3 = local_28;
  local_5b = bVar1 & 1;
  if (((local_5a & 1) == 0) && ((bVar1 & 1) == 0)) {
    FUN_004eacb8(local_28);
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setUserInteractionEnabled__026caad8,1);
    uVar4 = (ulong)(local_5a & 1);
    FUN_004eb0a8(uVar4,local_5b & 1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_68;
    local_70 = uVar4;
    _objc_getAssociatedObject(local_68,&DAT_028cadf5);
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,local_70);
    if ((uVar3 & 1) == 0) {
      FUN_004eacb8(local_28);
      local_80 = 0;
      local_88 = 0;
      if ((local_5a & 1) != 0) {
        uVar4 = local_28;
        FUN_004eb128(local_28,PTR_s_wcrefine_handleDoubleTap__026a42c0,2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_80;
        local_80 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_addGestureRecognizer__026ca4a8,local_80);
        _objc_setAssociatedObject(local_68,&DAT_028cadf6,local_80,1);
      }
      if ((local_5b & 1) != 0) {
        uVar4 = local_28;
        FUN_004eb128(local_28,PTR_s_wcrefine_handleTripleTap__026a1ea0,3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_88;
        local_88 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_addGestureRecognizer__026ca4a8,local_88);
        _objc_setAssociatedObject(local_68,&DAT_028cadf7,local_88,1);
      }
      _objc_setAssociatedObject(local_68,&DAT_028cadf5,local_70,3);
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      local_38 = 0;
    }
    else {
      local_38 = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_004eac44:
  _objc_storeStrong(&local_28,0);
  return;
}

