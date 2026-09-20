// updateWithPoint: @ 00804dd8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void __thiscall
WBTouchTrailView::updateWithPoint_(WBTouchTrailView *this,ID param_1,SEL param_2,CGPoint param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  double in_d0;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double in_d1;
  undefined8 uVar9;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  ID local_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [48];
  double local_100;
  double local_f8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  local_28 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setIsMoving__026a8a50,0,param_3.field1_0x8);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  dVar8 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailSize_026a8a58);
  dVar5 = local_30 - dVar8 / 2.0;
  dVar8 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailSize_026a8a58);
  dVar6 = local_28 - dVar8 / 2.0;
  dVar8 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailSize_026a8a58);
  dVar7 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailSize_026a8a58);
  FUN_00804378();
  local_70 = dVar5;
  dStack_68 = dVar6;
  local_60 = dVar8;
  dStack_58 = dVar7;
  local_90 = dVar5;
  dStack_88 = dVar6;
  local_80 = dVar8;
  dStack_78 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  IVar1 = local_38;
  local_d0 = dVar5;
  dStack_c8 = dVar6;
  local_c0 = dVar8;
  dStack_b8 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,dStack_c8);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_useCustomImage_026a8a60);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailSize_026a8a58);
    dVar8 = local_d0 / 2.0;
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailColor_026a8a78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasBorder_026a8a70);
    if ((IVar1 & 1) == 0) {
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      dVar8 = local_c0;
      dVar7 = dStack_b8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_borderWidth_0269e060);
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar8);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_borderColor_0269e050);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_CGColor_026ca470);
      IVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      dVar8 = local_c0;
      dVar7 = dStack_b8;
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailSize_026a8a58);
    dVar7 = local_d0 / 2.0;
    dVar8 = dVar7;
    local_f8 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_cornerRadiusRatio_026a8a68);
    dVar7 = dVar7 * dVar8;
    IVar1 = local_38;
    local_100 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasBorder_026a8a70);
    if ((IVar1 & 1) == 0) {
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      dVar8 = local_c0;
      dVar7 = dStack_b8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_borderWidth_0269e060);
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar7);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_borderColor_0269e050);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_CGColor_026ca470);
      IVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      dVar8 = local_c0;
      dVar7 = dStack_b8;
    }
  }
  _memcpy(auStack_130,PTR__CGAffineTransformIdentity_025782d8,0x30);
  IVar1 = local_38;
  _memcpy(auStack_160,auStack_130,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setTransform__026caad0,auStack_160);
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_38,PTR_s_setAlpha__026ca860);
  uStack_168 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
  local_170 = *(undefined8 *)PTR__CGSizeZero_025782f8;
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uStack_178 = uStack_168;
  local_180 = local_170;
  uVar9 = uStack_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_170);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_useCustomImage_026a8a60);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailColor_026a8a78);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_CGColor_026ca470);
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3f000000);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    dVar6 = 5.0;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    local_1a0 = dVar6;
    local_198 = uVar9;
    local_190 = dVar8;
    local_188 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailSize_026a8a58);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a0,local_198,local_190,local_188,dVar6 / 2.0,puVar2,
               PTR_s_bezierPathWithRoundedRect_corner_026ca530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGPath_026ca478);
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_38;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_1c8 = PTR___NSConcreteStackBlock_02578660;
  local_1c0 = 0xc2000000;
  local_1bc = 0;
  local_1b8 = FUN_00806050;
  local_1b0 = &DAT_02578c20;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323da8,puVar2,PTR_s_animateWithDuration_animations__026ca4e0,&local_1c8);
  _objc_storeStrong(&local_1a8,0);
  return;
}

