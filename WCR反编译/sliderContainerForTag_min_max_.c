// sliderContainerForTag:min:max: @ 01ed84e0

/* Function Stack Size: 0x28 bytes */

ID WCRToDoAdjustmentViewController::sliderContainerForTag_min_max_
             (ID param_1,SEL param_2,long_long param_3,double param_4,double param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long_long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double local_140;
  double local_138;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  FUN_01ed8cfc(param_3);
  local_70 = local_40;
  local_138 = param_4;
  if (param_4 < local_40) {
    local_138 = local_40;
  }
  local_78 = local_138;
  local_60 = local_138;
  local_80 = local_48;
  if (local_48 <= local_138) {
    local_140 = local_48;
  }
  else {
    local_140 = local_138;
  }
  local_88 = local_140;
  local_58 = local_140;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_68 = param_4;
  local_50 = param_4;
  _objc_alloc();
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0x4062800000000000;
  uVar7 = 0x403e000000000000;
  FUN_01ebb220();
  local_b0 = uVar5;
  local_a8 = uVar6;
  local_a0 = uVar4;
  local_98 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,uVar4,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_90 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,1);
  puVar1 = PTR__OBJC_CLASS___UISlider_026ce248;
  _objc_alloc();
  uVar5 = 0;
  uVar7 = 0x403e000000000000;
  uVar6 = 0x405a000000000000;
  uVar4 = uVar5;
  FUN_01ebb220();
  local_d8 = uVar5;
  local_d0 = uVar4;
  local_c8 = uVar6;
  local_c0 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar4,uVar6,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)((float)local_40,puVar1,PTR_s_setMinimumValue__026b2338);
  (*(code *)PTR__objc_msgSend_02578628)((float)local_48,local_b8,PTR_s_setMaximumValue__026b2340);
  (*(code *)PTR__objc_msgSend_02578628)((float)local_58,local_b8,PTR_s_setValue__026a51b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTag__026caa80,local_38);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setContinuous__026b4d68,1);
  FUN_01ebfa90();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_01ebfad4();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setThumbImage_forState__026b4d78,puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setThumbImage_forState__026b4d78,local_e0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_sliderChanged__026b8190,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_sliderEnded__026b8198,0x1c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_addSubview__026ca4c0,local_b8);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x405b000000000000;
  uVar5 = 0x4000000000000000;
  uVar6 = 0x4044000000000000;
  uVar7 = 0x403a000000000000;
  local_e8 = puVar1;
  FUN_01ebb220();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,uVar6,uVar7,local_e8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setTag__026caa80,local_38 + 91000);
  puVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
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
  puVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4026000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e8;
  lVar3 = local_38;
  FUN_01ebef60(local_50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle_forState__026caab8,lVar3,0);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_valueButtonTapped__026b81a8,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_addSubview__026ca4c0,local_e8);
  puVar1 = local_90;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_90,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

