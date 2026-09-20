// frostedBubbleIntensitySliderContainer @ 01f2df5c

/* WARNING: Removing unreachable block (ram,0x01f2e55c) */
/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineUIBeautifyViewController::frostedBubbleIntensitySliderContainer
          (WCRefineUIBeautifyViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double in_d0;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = in_d0;
  _objc_alloc();
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x4065400000000000;
  uVar6 = 0x403e000000000000;
  FUN_01f2e778();
  local_60 = uVar4;
  local_58 = uVar5;
  local_50 = uVar3;
  local_48 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,uVar3,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,1);
  puVar1 = PTR__OBJC_CLASS___UISlider_026ce248;
  _objc_alloc();
  uVar4 = 0;
  uVar6 = 0x403e000000000000;
  uVar5 = 0x405f000000000000;
  uVar3 = uVar4;
  FUN_01f2e778();
  local_88 = uVar4;
  local_80 = uVar3;
  local_78 = uVar5;
  local_70 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar3,uVar5,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(0,puVar1,PTR_s_setMinimumValue__026b2338);
  (*(code *)PTR__objc_msgSend_02578628)(0x42c80000,local_68,PTR_s_setMaximumValue__026b2340);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setContinuous__026b4d68,0);
  (*(code *)PTR__objc_msgSend_02578628)((float)local_38,local_68,PTR_s_setValue__026a51b0);
  puVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTag__026caa80,DAT_0233a780);
  FUN_01f2e7c4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_01f2e808();
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setThumbImage_forState__026b4d78,puVar1,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setThumbImage_forState__026b4d78,local_90);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_frostedBubbleIntensityChanged__026c87b0,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_68);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x4060400000000000;
  uVar4 = 0x4000000000000000;
  uVar5 = 0x4044000000000000;
  uVar6 = 0x403a000000000000;
  local_98 = puVar1;
  FUN_01f2e778();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,uVar4,uVar5,uVar6,local_98,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTag__026caa80,DAT_0233a788);
  puVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
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
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_98;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle_forState__026caab8,puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_98,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_frostedBubbleIntensityValueTappe_026c87b8,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_98);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

