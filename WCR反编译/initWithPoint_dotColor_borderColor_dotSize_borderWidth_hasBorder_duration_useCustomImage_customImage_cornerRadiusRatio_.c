// initWithPoint:dotColor:borderColor:dotSize:borderWidth:hasBorder:duration:useCustomImage:customImage:cornerRadiusRatio: @ 008035cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x60 bytes */

ID __thiscall
WBTouchTrailDotView::
initWithPoint_dotColor_borderColor_dotSize_borderWidth_hasBorder_duration_useCustomImage_customImage_cornerRadiusRatio_
          (WBTouchTrailDotView *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4,ID param_5,
          double param_6,double param_7,bool param_8,double param_9,bool param_10,ID param_11,
          double param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID *pIVar3;
  ID *pIVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 in_d4;
  double in_d5;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  ID *local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  ID *local_188;
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [48];
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 local_80;
  byte local_71;
  undefined8 local_70;
  byte local_61;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  SEL local_40;
  ID *local_38;
  double local_30;
  double local_28;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = (ID *)param_1;
  local_30 = param_6;
  local_28 = param_7;
  _objc_storeStrong(&local_48,param_3.field0_0x0);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_3.field1_0x8);
  local_61 = (byte)param_4;
  local_71 = (byte)param_5;
  local_80 = 0;
  local_70 = in_d4;
  local_60 = param_12;
  local_58 = param_9;
  _objc_storeStrong(&local_80,param_8);
  dVar8 = local_30 - local_58 / 2.0;
  dVar10 = local_28 - local_58 / 2.0;
  dVar9 = local_58;
  dVar11 = local_58;
  local_88 = in_d5;
  FUN_00804378();
  local_f0 = local_38;
  local_38 = (ID *)0x0;
  ppuVar5 = &local_f0;
  local_e8 = PTR_WBTouchTrailDotView_026cf8e8;
  local_e0 = dVar8;
  dStack_d8 = dVar10;
  local_d0 = dVar9;
  dStack_c8 = dVar11;
  local_a8 = dVar8;
  dStack_a0 = dVar10;
  local_98 = dVar9;
  dStack_90 = dVar11;
  _objc_msgSendSuper2(dVar8,ppuVar5,PTR_s_initWithFrame__026ca6e8);
  local_38 = (ID *)ppuVar5;
  _objc_storeStrong(&local_38);
  if ((undefined8 **)local_38 != (undefined8 **)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDotColor__026a8a00,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBorderColor__026ca890,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,local_38,PTR_s_setDotSize__026a8a08);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,local_38,PTR_s_setBorderWidth__026ca898);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHasBorder__026a8a10,local_61 & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setUseCustomImage__026a8a18,local_71 & 1);
    dVar8 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCornerRadiusRatio__026a8a20);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setUserInteractionEnabled__026caad8,0);
    if ((local_71 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888,local_48);
      dVar9 = local_58 / 2.0;
      ppuVar5 = (undefined8 **)local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar9);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      dVar9 = local_60;
      if ((local_61 & 1) != 0) {
        ppuVar5 = (undefined8 **)local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar9);
        (*(code *)PTR__objc_release_02578630)(ppuVar5);
        uVar2 = local_50;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_CGColor_026ca470);
        ppuVar5 = (undefined8 **)local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(ppuVar5);
      }
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      local_108 = dVar10;
      local_100 = dVar9;
      local_f8 = dVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar8,dVar10,dVar9,dVar11,puVar6,PTR_s_initWithFrame__026ca6e8);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCustomImageView__026a8a28,puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      ppuVar5 = (undefined8 **)local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      ppuVar5 = (undefined8 **)local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      pIVar3 = local_38;
      ppuVar5 = (undefined8 **)local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pIVar3,PTR_s_addSubview__026ca4c0);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      local_118 = local_58 / 2.0;
      dVar9 = local_118 * local_88;
      ppuVar5 = (undefined8 **)local_38;
      local_120 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar9);
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      ppuVar5 = (undefined8 **)local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      dVar9 = local_60;
      if ((local_61 & 1) != 0) {
        ppuVar5 = (undefined8 **)local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar9);
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        (*(code *)PTR__objc_release_02578630)(ppuVar5);
        uVar2 = local_50;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_CGColor_026ca470);
        ppuVar5 = (undefined8 **)local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customImageView_026a8a30);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        (*(code *)PTR__objc_release_02578630)(ppuVar5);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323f60,local_38,PTR_s_setAlpha__026ca860);
    _memcpy(auStack_150,PTR__CGAffineTransformIdentity_025782d8,0x30);
    pIVar3 = local_38;
    _memcpy(auStack_180,auStack_150,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(pIVar3,PTR_s_setTransform__026caad0,auStack_180);
    pIVar3 = local_38;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar6 = PTR___NSConcreteStackBlock_02578660;
    local_1a8 = PTR___NSConcreteStackBlock_02578660;
    local_1a0 = 0xc2000000;
    local_19c = 0;
    local_198 = FUN_008043c4;
    local_190 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    pIVar4 = local_38;
    local_188 = pIVar3;
    local_1d0 = puVar6;
    local_1c8 = 0xc2000000;
    local_1c4 = 0;
    local_1c0 = FUN_00804468;
    local_1b8 = &DAT_025790c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = pIVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,0,puVar1,PTR_s_animateWithDuration_delay_option_026ca4f0,&DAT_00020004,
               &local_1a8,&local_1d0);
    _objc_storeStrong(&local_1b0);
    _objc_storeStrong(&local_188,0);
  }
  pIVar3 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return (ID)(undefined8 **)pIVar3;
}

