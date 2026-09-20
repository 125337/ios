// FUN_01b5af80 @ 01b5af80

void FUN_01b5af80(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [48];
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined *local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  undefined *local_40;
  double local_38;
  double local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_38 = 30.0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_1;
  _objc_alloc();
  dVar3 = local_30 - local_38;
  uVar5 = 0;
  dVar4 = local_38;
  dVar7 = local_38;
  FUN_01b5a61c();
  local_60 = dVar3;
  local_58 = uVar5;
  local_50 = dVar4;
  local_48 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar3,uVar5,dVar4,dVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,0);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  dVar4 = local_38;
  local_68 = puVar1;
  FUN_01b75eac();
  local_78 = dVar4;
  local_70 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(dVar4,uVar5,puVar1,PTR_s_moveToPoint__026a01b0);
  puVar1 = local_68;
  dVar4 = local_38;
  dVar7 = local_38;
  FUN_01b75eac();
  local_88 = dVar4;
  local_80 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(dVar4,dVar7,puVar1,PTR_s_addLineToPoint__026a01b8);
  puVar1 = local_68;
  uVar6 = 0;
  uVar5 = uVar6;
  FUN_01b75eac();
  local_98 = uVar6;
  local_90 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar5,puVar1,PTR_s_addLineToPoint__026a01b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_closePath_026a66f8);
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_68;
  local_a0 = puVar2;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGPath_026ca478);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setPath__026caa08,puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02324038,DAT_02323e10,0x3fe0000000000000,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setFillColor__026ca948,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_68;
  local_a8 = puVar2;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGPath_026ca478);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setPath__026caa08,puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc_init();
  local_b0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,&cf_n_v);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4022000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sizeToFit_0269ec08);
  _CGAffineTransformMakeRotation(DAT_02339d08);
  puVar1 = local_b0;
  _memcpy(auStack_110,auStack_e0,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTransform__026caad0,auStack_110);
  dVar4 = local_38 * 0.5 + 4.0;
  dVar7 = local_38 * 0.5 + -6.0;
  FUN_01b75eac();
  (*(code *)PTR__objc_msgSend_02578628)(dVar4,dVar7,local_b0,PTR_s_setCenter__026ca8c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_40);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

