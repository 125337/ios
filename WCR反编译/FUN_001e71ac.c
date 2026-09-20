// FUN_001e71ac @ 001e71ac

void FUN_001e71ac(double param_1,undefined8 param_2,byte param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong local_70;
  undefined *local_68;
  double local_60;
  double local_58;
  byte local_49;
  undefined *local_48;
  undefined4 local_30;
  byte local_29;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  puVar5 = local_28;
  local_29 = param_3;
  if (local_28 == (undefined *)0x0) {
    local_30 = 1;
    goto LAB_001e7ab8;
  }
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    local_30 = 1;
    goto LAB_001e7ab8;
  }
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar5 == (undefined *)0x0) {
    local_30 = 1;
    goto LAB_001e7ab8;
  }
  local_49 = 0;
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  if (puVar5 == (undefined *)0x0) {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    bVar2 = puVar4 == (undefined *)0x0;
    local_48 = puVar4;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)();
  uVar3 = (uint)puVar5;
  if (bVar2) {
    local_30 = 1;
    goto LAB_001e7ab8;
  }
  FUN_001e7ff4();
  if ((uVar3 & 1) != 0) {
    FUN_001e84b4();
    puVar5 = local_28;
    local_58 = param_1;
    FUN_001d5a74();
    local_58 = param_1;
    FUN_001e85ac();
    local_60 = param_1;
    FUN_001e868c();
    _objc_retainAutoreleasedReturnValue();
    if ((local_58 < 0.0) || (100.0 < local_58)) {
      local_58 = 10.0;
    }
    if ((local_60 < 0.0) || (10.0 < local_60)) {
      local_60 = 0.0;
    }
    local_68 = puVar5;
    if (puVar5 == (undefined *)0x0) {
LAB_001e7520:
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_68;
      local_68 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)puVar5 & 1) == 0) goto LAB_001e7520;
    }
    dVar1 = local_58;
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    dVar1 = local_60;
    if (local_60 <= 0.0) {
      puVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
      puVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      puVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_68;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
      puVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    ppuVar6 = &local_68;
    _objc_storeStrong(ppuVar6,0);
    uVar3 = (uint)ppuVar6;
  }
  FUN_001e8090();
  if ((uVar3 & 1) != 0) {
    uVar7 = (ulong)(local_29 & 1);
    FUN_001e88f8();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_28;
    local_70 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888,local_70);
    }
    _objc_storeStrong(&local_70,0);
  }
  local_30 = 0;
LAB_001e7ab8:
  _objc_storeStrong(&local_28,0);
  return;
}

