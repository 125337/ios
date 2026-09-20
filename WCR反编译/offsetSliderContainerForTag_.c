// offsetSliderContainerForTag: @ 019ef914

/* WARNING: Removing unreachable block (ram,0x019effa0) */
/* Function Stack Size: 0x18 bytes */

ID WCRefineFontConvertViewController::offsetSliderContainerForTag_
             (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  ID local_50;
  long local_48;
  long local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = 0;
  local_48 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_offsetLimitsForTag_min_max__026bb2a8,param_3,&local_40,&local_48);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_offsetValueForTag__026bb2b0,local_38);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_50 = IVar1;
  _objc_alloc();
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0x4067c00000000000;
  uVar7 = 0x403e000000000000;
  FUN_019e39e8();
  local_78 = uVar5;
  local_70 = uVar6;
  local_68 = uVar4;
  local_60 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,uVar4,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setUserInteractionEnabled__026caad8,1);
  puVar2 = PTR__OBJC_CLASS___UISlider_026ce248;
  _objc_alloc();
  uVar5 = 0;
  uVar7 = 0x403e000000000000;
  uVar6 = 0x4061000000000000;
  uVar4 = uVar5;
  FUN_019e39e8();
  local_a0 = uVar5;
  local_98 = uVar4;
  local_90 = uVar6;
  local_88 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar4,uVar6,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_80 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)((float)local_40,puVar2,PTR_s_setMinimumValue__026b2338);
  (*(code *)PTR__objc_msgSend_02578628)((float)local_48,local_80,PTR_s_setMaximumValue__026b2340);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setContinuous__026b4d68,1);
  (*(code *)PTR__objc_msgSend_02578628)((float)(long)local_50,local_80,PTR_s_setValue__026a51b0);
  puVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTag__026caa80,local_38);
  FUN_019f01ac();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_019f01f0();
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setThumbImage_forState__026b4d78,puVar2,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setThumbImage_forState__026b4d78,local_a8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_offsetSliderChanged__026bb2b8,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_offsetSliderDidEnd__026bb2c0,0x40);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_offsetSliderDidEnd__026bb2c0,0x80);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_offsetSliderDidEnd__026bb2c0,0x100);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addSubview__026ca4c0,local_80);
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x4061c00000000000;
  uVar5 = 0x4000000000000000;
  uVar6 = 0x4048000000000000;
  uVar7 = 0x403a000000000000;
  local_b0 = puVar2;
  FUN_019e39e8();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,uVar6,uVar7,local_b0,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTag__026caa80,local_38 + 2000);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe8000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_b0;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_offsetDisplayTextForTag_value__026bb2c8,local_38,local_50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitle_forState__026caab8,IVar1,0);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_offsetSliderValueButtonTapped__026bb2d0,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addSubview__026ca4c0,local_b0);
  puVar2 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_58,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

