// FUN_003e87f8 @ 003e87f8

void FUN_003e87f8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_026e02b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar1 == 0) {
    local_38 = 1;
  }
  else {
    uVar1 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026e02b8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_40 = uVar1;
    _objc_getAssociatedObject(local_28,DAT_026e02c0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_48 = uVar2;
    _objc_getAssociatedObject(local_28,DAT_026e02c8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_50 = uVar1;
    _objc_getAssociatedObject(local_28,DAT_026e02d0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_58 = uVar2;
    _objc_getAssociatedObject(local_28,DAT_026e02d8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar1;
    if (local_40 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_48 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_boolValue_026ca540);
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_50 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_unsignedIntegerValue_026cabb8);
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_58 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_doubleValue_026ca608);
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(param_1);
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_60;
    if (local_60 != 0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_CGColor_026ca470);
    }
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026e02e0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    _objc_storeStrong(&local_68,0);
    _objc_setAssociatedObject(local_28,DAT_026e02b0,0,1);
    _objc_setAssociatedObject(local_28,DAT_026e0298,0,1);
    _objc_setAssociatedObject(local_28,DAT_026e02a0,0,1);
    _objc_setAssociatedObject(local_28,DAT_026e02a8,0,1);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

