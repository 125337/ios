// sliderContainerForKey:isScale: @ 01842424

/* WARNING: Removing unreachable block (ram,0x01842cb8) */
/* Function Stack Size: 0x1c bytes */

ID WCRefineAvatarFrameSpecialUserDetailViewController::sliderContainerForKey_isScale_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double local_170;
  double local_168;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  ID local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  byte local_39;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  dVar7 = DAT_02323ca0;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar8 = 0;
  uVar5 = 0;
  uVar4 = 0x406ac00000000000;
  uVar9 = 0x4040000000000000;
  FUN_0183e5b8();
  local_68 = uVar5;
  local_60 = uVar8;
  local_58 = uVar4;
  local_50 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar8,uVar4,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,1);
  puVar1 = PTR__OBJC_CLASS___UISlider_026ce248;
  _objc_alloc();
  uVar5 = 0;
  uVar8 = 0x3ff0000000000000;
  uVar4 = 0x4063400000000000;
  uVar9 = 0x403e000000000000;
  FUN_0183e5b8();
  local_90 = uVar5;
  local_88 = uVar8;
  local_80 = uVar4;
  local_78 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar8,uVar4,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_70 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setContinuous__026b4d68,1);
  if ((local_39 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339d10,local_70,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_02339d18,local_70,PTR_s_setMaximumValue__026b2340);
    dVar7 = 0.0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_floatValueForKey_default__026b6680,local_38);
    local_a8 = 0xc049000000000000;
    local_b8 = 0x4049000000000000;
    local_168 = dVar7;
    if (50.0 < dVar7) {
      local_168 = 50.0;
    }
    local_c8 = local_168;
    local_b0 = local_168;
    if (local_168 <= -50.0) {
      local_170 = -50.0;
    }
    else {
      local_170 = local_168;
    }
    local_d0 = local_170;
    local_c0 = dVar7;
    local_a0 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)((float)local_170,local_70,PTR_s_setValue__026a51b0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(0x3e4ccccd,local_70,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)(0x40a00000,local_70,PTR_s_setMaximumValue__026b2340);
    dVar6 = 1.5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_floatValueForKey_default__026b6680,local_38);
    if ((dVar6 <= 0.0) || (local_98 = dVar6, 5.0 < dVar6)) {
      local_98 = 1.5;
    }
    if (local_98 < dVar7) {
      local_98 = dVar7;
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)local_98,local_70,PTR_s_setValue__026a51b0);
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sliderTrackColor_026b6748);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sliderThumbImage_026b6750);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setThumbImage_forState__026b4d78,IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setThumbImage_forState__026b4d78,local_d8);
  _objc_setAssociatedObject(local_70,DAT_028c6578,local_38,3);
  puVar1 = local_70;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_39 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,"WCRSpecialSliderIsScale",puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleSpecialSliderChanged__026b6758,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleSpecialSliderDidEnd__026b6760,0x40);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleSpecialSliderDidEnd__026b6760,0x80);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleSpecialSliderDidEnd__026b6760,0x100);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_70);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x4063c00000000000;
  uVar5 = 0x4010000000000000;
  uVar8 = 0x4049000000000000;
  uVar9 = 0x4036000000000000;
  local_e0 = puVar1;
  FUN_0183e5b8();
  local_120 = uVar4;
  uStack_118 = uVar5;
  local_110 = uVar8;
  uStack_108 = uVar9;
  local_100 = uVar4;
  uStack_f8 = uVar5;
  local_f0 = uVar8;
  uStack_e8 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,uVar8,uVar9,local_e0,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setTag__026caa80,0x11559);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02324258,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339b60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_128 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_128;
  local_128 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setTitleColor_forState__026caac0,local_128);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(DAT_023242c8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e0;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_displayTextForKey_isScale__026b6768,local_38,local_39 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle_forState__026caab8,IVar2,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_setAssociatedObject(local_e0,DAT_028c6578,local_38,3);
  puVar1 = local_e0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_39 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,"WCRSpecialSliderIsScale",puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleSpecialValueButtonTapped__026b6770,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_e0);
  puVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

