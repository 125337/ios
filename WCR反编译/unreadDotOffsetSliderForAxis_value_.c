// unreadDotOffsetSliderForAxis:value: @ 01cb71d0

/* WARNING: Removing unreachable block (ram,0x01cb78a4) */
/* Function Stack Size: 0x20 bytes */

ID WCRefinePrivateFriendViewController::unreadDotOffsetSliderForAxis_value_
             (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double local_130;
  double local_128;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_50 = 0xc044000000000000;
  local_60 = 0x4044000000000000;
  local_128 = param_4;
  if (40.0 < param_4) {
    local_128 = 40.0;
  }
  local_70 = local_128;
  local_58 = local_128;
  if (local_128 <= -40.0) {
    local_130 = -40.0;
  }
  else {
    local_130 = local_128;
  }
  local_78 = local_130;
  local_48 = local_130;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_68 = param_4;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc();
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x4065400000000000;
  uVar6 = 0x403e000000000000;
  FUN_01cb6050();
  local_a0 = uVar4;
  local_98 = uVar5;
  local_90 = uVar3;
  local_88 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,uVar3,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UISlider_026ce248;
  local_80 = puVar1;
  _objc_alloc();
  uVar4 = 0;
  uVar6 = 0x403e000000000000;
  uVar5 = 0x405f000000000000;
  uVar3 = uVar4;
  FUN_01cb6050();
  local_c8 = uVar4;
  local_c0 = uVar3;
  local_b8 = uVar5;
  local_b0 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar3,uVar5,uVar6,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(0xc2200000,puVar2,PTR_s_setMinimumValue__026b2338);
  (*(code *)PTR__objc_msgSend_02578628)(0x42200000,local_a8,PTR_s_setMaximumValue__026b2340);
  (*(code *)PTR__objc_msgSend_02578628)((float)local_48,local_a8,PTR_s_setValue__026a51b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setContinuous__026b4d68,1);
  uVar3 = 0x5ec5;
  if (local_38 != 0) {
    uVar3 = 0x5ec6;
  }
  puVar1 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setTag__026caa80,uVar3);
  FUN_01cb7a98();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_01cb7adc();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setThumbImage_forState__026b4d78,puVar1,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setThumbImage_forState__026b4d78,local_d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_unreadDotOffsetSliderChanged__026c3308,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_unreadDotOffsetSliderEnded__026c3310,0x40);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_unreadDotOffsetSliderEnded__026c3310,0x80);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_unreadDotOffsetSliderEnded__026c3310,0x100);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_a8);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x405f800000000000;
  uVar4 = 0x4000000000000000;
  uVar5 = 0x4046000000000000;
  uVar6 = 0x403a000000000000;
  local_d8 = puVar1;
  FUN_01cb6050();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,uVar4,uVar5,uVar6,local_d8,PTR_s_setFrame__026ca960);
  uVar3 = 0x5ec7;
  if (local_38 != 0) {
    uVar3 = 0x5ec8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setTag__026caa80,uVar3);
  puVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_layer_026ca788);
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
  puVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = local_d8;
  FUN_01cb7b50(local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle_forState__026caab8,puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_unreadDotOffsetValueTapped__026c3318,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_d8);
  puVar1 = local_80;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_80,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

