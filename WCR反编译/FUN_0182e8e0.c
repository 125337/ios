// FUN_0182e8e0 @ 0182e8e0

void FUN_0182e8e0(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined *local_1b8;
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [48];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  byte local_61;
  double local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  undefined *local_40;
  double local_38;
  double local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_38 = 30.0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_1;
  _objc_alloc();
  dVar5 = local_30 - local_38;
  uVar7 = 0;
  dVar6 = local_38;
  dVar9 = local_38;
  FUN_018254b4();
  local_60 = dVar5;
  local_58 = uVar7;
  local_50 = dVar6;
  local_48 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar5,uVar7,dVar6,dVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,0);
  local_61 = 0;
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_61 = lVar3 == 2;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  local_79 = 0;
  local_89 = 0;
  local_1b8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((local_61 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324038,DAT_02323e10,0x3fe0000000000000,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_1b8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f18,DAT_02332e58,DAT_02324020,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_1b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_1b8;
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  dVar6 = local_38;
  local_98 = puVar1;
  FUN_0183a570();
  local_a8 = dVar6;
  local_a0 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(dVar6,uVar7,puVar1,PTR_s_moveToPoint__026a01b0);
  puVar1 = local_98;
  dVar6 = local_38;
  dVar9 = local_38;
  FUN_0183a570();
  local_b8 = dVar6;
  local_b0 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)(dVar6,dVar9,puVar1,PTR_s_addLineToPoint__026a01b8);
  puVar1 = local_98;
  uVar8 = 0;
  uVar7 = uVar8;
  FUN_0183a570();
  local_c8 = uVar8;
  local_c0 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar7,puVar1,PTR_s_addLineToPoint__026a01b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_closePath_026a66f8);
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_98;
  local_d0 = puVar4;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGPath_026ca478);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setPath__026caa08,puVar1);
  puVar1 = local_70;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setFillColor__026ca948,puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_98;
  local_d8 = puVar4;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGPath_026ca478);
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setPath__026caa08,puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setText__026caa88,&cf_n_v);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setNumberOfLines__026ca9d8);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4022000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar4 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar7 = 0;
  uVar8 = 0x3fe0000000000000;
  FUN_01825a24();
  puVar1 = local_e0;
  local_f0 = uVar7;
  uStack_e8 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_e8;
  local_100 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,uStack_e8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ecccccd);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_sizeToFit_0269ec08);
  _CGAffineTransformMakeRotation(DAT_02339d08);
  puVar1 = local_e0;
  _memcpy(auStack_160,auStack_130,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTransform__026caad0,auStack_160);
  dVar6 = DAT_02339d00 * 5.5 + local_38 * 0.5;
  dVar9 = (local_38 * 0.5 - DAT_02339d00 * 5.5) - 2.0;
  FUN_0183a570();
  (*(code *)PTR__objc_msgSend_02578628)(dVar6,dVar9,local_e0,PTR_s_setCenter__026ca8c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_e0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_40);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

