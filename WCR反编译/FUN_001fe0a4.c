// FUN_001fe0a4 @ 001fe0a4

void FUN_001fe0a4(undefined8 param_1)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  uint local_1d4;
  undefined *local_60;
  double local_58;
  double local_50;
  byte local_41;
  undefined *local_40;
  undefined4 local_38;
  undefined *local_28;
  undefined **ppuVar4;
  
  dVar10 = DAT_02323d70;
  dVar1 = DAT_02323cd0;
  ppuVar4 = &local_28;
  local_28 = (undefined *)0x0;
  dVar9 = DAT_02323cd0;
  _objc_storeStrong(ppuVar4,param_1);
  uVar3 = (uint)ppuVar4;
  FUN_001fe008();
  puVar6 = local_28;
  if (((uVar3 & 1) == 0) || (local_28 == (undefined *)0x0)) {
    local_38 = 1;
    goto LAB_001febfc;
  }
  puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    local_38 = 1;
    goto LAB_001febfc;
  }
  puVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar6 == (undefined *)0x0) {
    local_38 = 1;
    goto LAB_001febfc;
  }
  local_41 = 0;
  puVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  if (puVar6 == (undefined *)0x0) {
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    bVar2 = puVar5 == (undefined *)0x0;
    local_40 = puVar5;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  if (bVar2) {
    local_38 = 1;
    goto LAB_001febfc;
  }
  FUN_002006a8();
  puVar6 = local_28;
  local_50 = dVar9;
  FUN_001d5a74();
  local_50 = dVar9;
  FUN_002007a0();
  local_58 = dVar9;
  FUN_00200880();
  _objc_retainAutoreleasedReturnValue();
  if ((local_50 < 0.0) || (100.0 < local_50)) {
    local_50 = 10.0;
  }
  if ((local_58 < 0.0) || (10.0 < local_58)) {
    local_58 = 0.0;
  }
  local_60 = puVar6;
  if (puVar6 == (undefined *)0x0) {
LAB_001fe41c:
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar10,dVar10,0x3fe6666666666666,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_60;
    local_60 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    dVar9 = dVar10;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    dVar9 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)puVar6 & 1) == 0) goto LAB_001fe41c;
  }
  puVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar9 = dVar9 - local_50;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    dVar10 = local_50;
    if (dVar1 < ABS(dVar9)) {
      puVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar10);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    puVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    if (local_58 <= 0.0) {
      puVar6 = local_28;
      dVar10 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (dVar1 < dVar10) {
        puVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
    }
    else {
      puVar6 = local_28;
      dVar10 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar10 = dVar10 - local_58;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      dVar9 = local_58;
      if (dVar1 < ABS(dVar10)) {
        puVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar9);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      puVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1d4 = 1;
      if (puVar5 != (undefined *)0x0) {
        puVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar5 = local_60;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
        _CGColorEqualToColor(puVar8,puVar5);
        local_1d4 = (uint)puVar8 ^ 1;
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = local_60;
      if ((local_1d4 & 1) != 0) {
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
        puVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
    }
  }
  _objc_storeStrong(&local_60,0);
  local_38 = 0;
LAB_001febfc:
  _objc_storeStrong(&local_28,0);
  return;
}

