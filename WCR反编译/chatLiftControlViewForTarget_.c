// chatLiftControlViewForTarget: @ 01b4cbec

/* WARNING: Removing unreachable block (ram,0x01b4d1b8) */
/* Function Stack Size: 0x18 bytes */

ID WCRefineLayoutFunctionViewController::chatLiftControlViewForTarget_
             (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_a0;
  undefined *local_98;
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
  ID local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_chatLiftValueForTarget__026bf598,param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = param_1;
  _objc_alloc();
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x4065400000000000;
  uVar6 = 0x403e000000000000;
  FUN_01b47878();
  local_68 = uVar4;
  local_60 = uVar5;
  local_58 = uVar3;
  local_50 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,uVar3,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,1);
  puVar1 = PTR__OBJC_CLASS___UISlider_026ce248;
  _objc_alloc();
  uVar4 = 0;
  uVar6 = 0x403e000000000000;
  uVar5 = 0x405f000000000000;
  uVar3 = uVar4;
  FUN_01b47878();
  local_90 = uVar4;
  local_88 = uVar3;
  local_80 = uVar5;
  local_78 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar3,uVar5,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_70 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(0,puVar1,PTR_s_setMinimumValue__026b2338);
  (*(code *)PTR__objc_msgSend_02578628)(0x43fa0000,local_70,PTR_s_setMaximumValue__026b2340);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setContinuous__026b4d68,0);
  (*(code *)PTR__objc_msgSend_02578628)((float)(long)local_40,local_70,PTR_s_setValue__026a51b0);
  puVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTag__026caa80,local_38);
  FUN_01b478c4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_01b47908();
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setThumbImage_forState__026b4d78,puVar1,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setThumbImage_forState__026b4d78,local_98);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleChatLiftSliderChanged__026bf5a0,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_70);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x4060400000000000;
  uVar4 = 0x4000000000000000;
  uVar5 = 0x4044000000000000;
  uVar6 = 0x403a000000000000;
  local_a0 = puVar1;
  FUN_01b47878();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,uVar4,uVar5,uVar6,local_a0,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTag__026caa80,local_38 + 3000);
  puVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
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
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_a0;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle_forState__026caab8,puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleChatLiftValueButtonTapped__026bf5a8,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_a0);
  puVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

