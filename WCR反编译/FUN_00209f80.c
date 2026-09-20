// FUN_00209f80 @ 00209f80

void FUN_00209f80(undefined8 param_1)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined *local_60;
  double local_58;
  double local_50;
  byte local_41;
  undefined *local_40;
  undefined4 local_38;
  undefined *local_28;
  undefined **ppuVar4;
  
  dVar1 = DAT_02323d70;
  ppuVar4 = &local_28;
  local_28 = (undefined *)0x0;
  dVar7 = DAT_02323d70;
  _objc_storeStrong(ppuVar4,param_1);
  uVar3 = (uint)ppuVar4;
  FUN_0020e924();
  puVar6 = local_28;
  if (((uVar3 & 1) == 0) || (local_28 == (undefined *)0x0)) {
    local_38 = 1;
    goto LAB_0020a66c;
  }
  puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    local_38 = 1;
    goto LAB_0020a66c;
  }
  puVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar6 == (undefined *)0x0) {
    local_38 = 1;
    goto LAB_0020a66c;
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
    goto LAB_0020a66c;
  }
  FUN_0020ea1c();
  puVar6 = local_28;
  local_50 = dVar7;
  FUN_001d5a74();
  local_50 = dVar7;
  FUN_0020eb14();
  local_58 = dVar7;
  FUN_0020ebf4();
  _objc_retainAutoreleasedReturnValue();
  if ((local_50 < 0.0) || (100.0 < local_50)) {
    local_50 = 25.0;
  }
  if ((local_58 < 0.0) || (10.0 < local_58)) {
    local_58 = 0.0;
  }
  local_60 = puVar6;
  if (puVar6 == (undefined *)0x0) {
LAB_0020a2ec:
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar1,dVar1,0x3fe6666666666666,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_60;
    local_60 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)puVar6 & 1) == 0) goto LAB_0020a2ec;
  }
  FUN_0020ee74(local_50,local_28);
  dVar1 = local_58;
  if (local_58 <= 0.0) {
    puVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  else {
    puVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar1);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = local_60;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
    puVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  FUN_0020f0e8(local_50,local_28);
  _objc_storeStrong(&local_60,0);
  local_38 = 0;
LAB_0020a66c:
  _objc_storeStrong(&local_28,0);
  return;
}

