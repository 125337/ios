// ensureToolbarExpandButton @ 01668d38

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::ensureToolbarExpandButton(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_toolbarExpandButton_026b1e78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAccessibilityLabel__0269e968,&cf_U_);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
               PTR_s_toggleToolbarCollapsed_026b2478,0x40);
    puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    puVar1 = PTR__CGRectZero_025782f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,0x321);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setContentMode__026ca8e0);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_icons_filled_max_window;
    FUN_01640768();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setImage__026ca978);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setUserInteractionEnabled__026caad8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_40);
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),*(undefined8 *)(puVar1 + 0x10),
               *(undefined8 *)(puVar1 + 0x18));
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,0x322);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setText__026caa88,&cf_U_);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4024000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTextAlignment__026caa90,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setUserInteractionEnabled__026caad8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_48);
    uVar8 = 0x4036000000000000;
    uVar5 = 0x4031000000000000;
    uVar7 = 0x4020000000000000;
    uVar6 = uVar8;
    FUN_0163f5dc();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar7,uVar8,uVar6,local_40,PTR_s_setFrame__026ca960)
    ;
    uVar6 = 0x4000000000000000;
    uVar5 = 0x4040000000000000;
    uVar7 = 0x404a000000000000;
    uVar8 = 0x4030000000000000;
    FUN_0163f5dc();
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar5,uVar7,uVar8,local_48,PTR_s_setFrame__026ca960)
    ;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toolbarScroll_026b1cb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setToolbarExpandButton__026b2480,local_38);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

