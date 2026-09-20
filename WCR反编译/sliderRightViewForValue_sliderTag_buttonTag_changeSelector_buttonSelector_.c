// sliderRightViewForValue:sliderTag:buttonTag:changeSelector:buttonSelector: @ 01a818dc

/* WARNING: Removing unreachable block (ram,0x01a81f3c) */
/* Function Stack Size: 0x38 bytes */

ID WCRefineGlobalPageBackgroundViewController::
   sliderRightViewForValue_sliderTag_buttonTag_changeSelector_buttonSelector_
             (ID param_1,SEL param_2,double param_3,long_long param_4,long_long param_5,SEL param_6,
             SEL param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double local_140;
  double local_138;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  SEL local_58;
  SEL local_50;
  long_long local_48;
  long_long local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_68 = 0x3ff0000000000000;
  local_78 = 0;
  local_138 = param_3;
  if (param_3 <= 0.0) {
    local_138 = 0.0;
  }
  local_88 = local_138;
  local_70 = local_138;
  if (local_138 <= 1.0) {
    local_140 = local_138;
  }
  else {
    local_140 = 1.0;
  }
  local_90 = local_140;
  local_60 = local_140;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_80 = param_3;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc();
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x4065400000000000;
  uVar6 = 0x403e000000000000;
  FUN_01a8212c();
  local_b8 = uVar4;
  local_b0 = uVar5;
  local_a8 = uVar3;
  local_a0 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,uVar3,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UISlider_026ce248;
  local_98 = puVar1;
  _objc_alloc();
  uVar4 = 0;
  uVar6 = 0x403e000000000000;
  uVar5 = 0x405f000000000000;
  uVar3 = uVar4;
  FUN_01a8212c();
  local_e0 = uVar4;
  local_d8 = uVar3;
  local_d0 = uVar5;
  local_c8 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar3,uVar5,uVar6,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(0,puVar2,PTR_s_setMinimumValue__026b2338);
  (*(code *)PTR__objc_msgSend_02578628)(0x3f800000,local_c0,PTR_s_setMaximumValue__026b2340);
  (*(code *)PTR__objc_msgSend_02578628)((float)local_60,local_c0,PTR_s_setValue__026a51b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setContinuous__026b4d68,0);
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTag__026caa80,local_40);
  FUN_01a82178();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_01a821bc();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setThumbImage_forState__026b4d78,puVar1,0);
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setThumbImage_forState__026b4d78,local_e8);
  FUN_01a82230(local_60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setAccessibilityValue__026bd798);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_50,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addSubview__026ca4c0,local_c0);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x405f800000000000;
  uVar4 = 0x4000000000000000;
  uVar5 = 0x4046000000000000;
  uVar6 = 0x403a000000000000;
  local_f0 = puVar1;
  FUN_01a8212c();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,uVar4,uVar5,uVar6,local_f0,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setTag__026caa80,local_48);
  puVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe8000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar2 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = local_f0;
  FUN_01a82230(local_60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle_forState__026caab8,puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_58,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addSubview__026ca4c0,local_f0);
  puVar1 = local_98;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_98,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

