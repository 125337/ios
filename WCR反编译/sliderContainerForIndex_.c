// sliderContainerForIndex: @ 018d28a8

/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRChatToolbarAdjustmentViewController::sliderContainerForIndex_
          (WCRChatToolbarAdjustmentViewController *this,ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double in_d0;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  double local_48;
  ID local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_valueForKey__0269d128);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_48 = in_d0;
  _objc_alloc();
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0x4062800000000000;
  uVar7 = 0x403e000000000000;
  FUN_018c86b0();
  local_70 = uVar5;
  local_68 = uVar6;
  local_60 = uVar4;
  local_58 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,uVar4,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setUserInteractionEnabled__026caad8,1);
  puVar2 = PTR__OBJC_CLASS___UISlider_026ce248;
  _objc_alloc();
  uVar5 = 0;
  uVar7 = 0x403e000000000000;
  uVar6 = 0x405a000000000000;
  uVar4 = uVar5;
  FUN_018c86b0();
  local_98 = uVar5;
  local_90 = uVar4;
  local_88 = uVar6;
  local_80 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar4,uVar6,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  IVar1 = local_40;
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_min);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setMinimumValue__026b2338);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_max);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setMaximumValue__026b2340);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)((float)local_48,local_78,PTR_s_setValue__026a51b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTag__026caa80,local_38);
  puVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setContinuous__026b4d68,1);
  FUN_018ccdb8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323ee8,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_018ccdfc();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setThumbImage_forState__026b4d78,puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setThumbImage_forState__026b4d78,local_a0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_sliderChanged__026b8190,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_sliderEnded__026b8198,0x1c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_78);
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x405b000000000000;
  uVar5 = 0x4000000000000000;
  uVar6 = 0x4044000000000000;
  uVar7 = 0x403a000000000000;
  local_a8 = puVar2;
  FUN_018c86b0();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,uVar6,uVar7,local_a8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setTag__026caa80,local_38 + 2000);
  puVar2 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
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
  puVar3 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4026000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a8;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,local_28,PTR_s_displayTextForItem_value__026b81a0,local_40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitle_forState__026caab8,IVar1,0);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_valueButtonTapped__026b81a8,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_a8);
  puVar2 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

