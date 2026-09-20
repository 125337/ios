// avatarBeautifySliderContainerForKind: @ 0181bdf0

/* WARNING: Removing unreachable block (ram,0x0181c3e0) */
/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarCornerBeautifyViewController::avatarBeautifySliderContainerForKind_
             (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc();
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0x406ac00000000000;
  uVar7 = 0x4040000000000000;
  FUN_01815654();
  local_60 = uVar5;
  local_58 = uVar6;
  local_50 = uVar4;
  local_48 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,uVar4,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,1);
  puVar1 = PTR__OBJC_CLASS___UISlider_026ce248;
  _objc_alloc();
  uVar5 = 0;
  uVar6 = 0x3ff0000000000000;
  uVar4 = 0x4063400000000000;
  uVar7 = 0x403e000000000000;
  FUN_01815654();
  local_88 = uVar5;
  local_80 = uVar6;
  local_78 = uVar4;
  local_70 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,uVar4,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setContinuous__026b4d68,0);
  puVar1 = local_68;
  uVar4 = DAT_028c6510;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,uVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_configureAvatarBeautifySlider_fo_026b6120,local_68,local_38);
  FUN_0181c814();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_0181c858();
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setThumbImage_forState__026b4d78,puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setThumbImage_forState__026b4d78,local_90,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleAvatarBeautifySliderTouchD_026b6128,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleAvatarBeautifySliderChange_026b6130,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_68);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x4063c00000000000;
  uVar5 = 0x4010000000000000;
  uVar6 = 0x4049000000000000;
  uVar7 = 0x4036000000000000;
  local_98 = puVar1;
  FUN_01815654();
  local_e0 = uVar4;
  uStack_d8 = uVar5;
  local_d0 = uVar6;
  uStack_c8 = uVar7;
  local_b8 = uVar4;
  uStack_b0 = uVar5;
  local_a8 = uVar6;
  uStack_a0 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,uVar6,uVar7,local_98,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTag__026caa80,local_38 + 70000);
  puVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000);
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
            (DAT_02324258,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
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
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339b60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_e8;
  local_e8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTitleColor_forState__026caac0,local_e8);
  puVar1 = local_98;
  puVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339b98,local_e8,PTR_s_colorWithAlphaComponent__026ca578);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitleColor_forState__026caac0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(DAT_023242c8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_98;
  uVar4 = DAT_028c6510;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,uVar4,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_98;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_titleForAvatarBeautifyValueButto_026b6138,local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle_forState__026caab8,IVar3,0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_98,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleAvatarBeautifyValueButtonT_026b6140,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_98);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

