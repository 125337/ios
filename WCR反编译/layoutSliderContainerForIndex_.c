// layoutSliderContainerForIndex: @ 018cc3dc

/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineChatToolbarViewController::layoutSliderContainerForIndex_
          (WCRefineChatToolbarViewController *this,ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double in_d0;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  double local_60;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  long_long local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  FUN_018c6f28();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_40;
  local_48 = param_1;
  if (((long)local_40 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0),
     (long)param_1 <= (long)lVar1)) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    local_4c = 1;
    local_28 = puVar3;
  }
  else {
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_58 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_valueForKey__0269d128);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_60 = in_d0;
    _objc_alloc();
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0x4065400000000000;
    uVar8 = 0x403e000000000000;
    FUN_018c86b0();
    local_88 = uVar6;
    local_80 = uVar7;
    local_78 = uVar5;
    local_70 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,uVar5,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setUserInteractionEnabled__026caad8,1);
    puVar3 = PTR__OBJC_CLASS___UISlider_026ce248;
    _objc_alloc();
    uVar6 = 0;
    uVar8 = 0x403e000000000000;
    uVar7 = 0x405f000000000000;
    uVar5 = uVar6;
    FUN_018c86b0();
    local_b0 = uVar6;
    local_a8 = uVar5;
    local_a0 = uVar7;
    local_98 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar5,uVar7,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
    IVar2 = local_58;
    local_90 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_min);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_max);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setMaximumValue__026b2340);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)((float)local_60,local_90,PTR_s_setValue__026a51b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setTag__026caa80,local_40);
    puVar3 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setContinuous__026b4d68,1);
    FUN_018ccdb8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setMinimumTrackTintColor__026b2398);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323ee8,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setMaximumTrackTintColor__026b4d70);
    (*(code *)PTR__objc_release_02578630)();
    FUN_018ccdfc();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setThumbImage_forState__026b4d78,puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setThumbImage_forState__026b4d78,local_b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_30,
               PTR_s_layoutSliderChanged__026b8030,0x1000);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_30,
               PTR_s_layoutSliderEnded__026b8038,0x1c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addSubview__026ca4c0,local_90);
    puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x4060400000000000;
    uVar6 = 0x4000000000000000;
    uVar7 = 0x4044000000000000;
    uVar8 = 0x403a000000000000;
    local_c0 = puVar3;
    FUN_018c86b0();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,uVar7,uVar8,local_c0,PTR_s_setFrame__026ca960)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTag__026caa80,local_40 + 0xc1c);
    puVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe8000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
    puVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4026000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_c0;
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,local_30,PTR_s_layoutSliderDisplayTextForItem_v_026b8040,local_58);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitle_forState__026caab8,IVar2,0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_30,
               PTR_s_layoutSliderValueButtonTapped__026b8048,0x40);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addSubview__026ca4c0,local_c0);
    puVar3 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_4c = 1;
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

