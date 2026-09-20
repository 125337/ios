// sliderForScene:kind: @ 01c4a0ec

/* WARNING: Removing unreachable block (ram,0x01c4a7d0) */
/* Function Stack Size: 0x20 bytes */

ID WCRefineNameplateSpecialUserDetailViewController::sliderForScene_kind_
             (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  long_long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
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
  long_long local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc();
  uVar9 = 0;
  uVar7 = 0;
  uVar5 = 0x406ac00000000000;
  uVar10 = 0x4040000000000000;
  FUN_01c4aca4();
  local_68 = uVar7;
  local_60 = uVar9;
  local_58 = uVar5;
  local_50 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar9,uVar5,uVar10,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setUserInteractionEnabled__026caad8,1);
  puVar2 = PTR__OBJC_CLASS___UISlider_026ce248;
  _objc_alloc();
  uVar7 = 0;
  uVar9 = 0x3ff0000000000000;
  uVar5 = 0x4063400000000000;
  uVar10 = 0x403e000000000000;
  FUN_01c4aca4();
  local_90 = uVar7;
  local_88 = uVar9;
  local_80 = uVar5;
  local_78 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar9,uVar5,uVar10,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_70 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setContinuous__026b4d68,1);
  puVar2 = local_70;
  uVar5 = DAT_028c6858;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar2,uVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_70;
  uVar5 = DAT_028c6860;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_40);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar2,uVar5,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_40 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(0x3e99999a,local_70,PTR_s_setMinimumValue__026b2338);
    dVar8 = 5.35679601527854e-315;
    (*(code *)PTR__objc_msgSend_02578628)(0x40a00000,local_70,PTR_s_setMaximumValue__026b2340);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(0xc2a00000,local_70,PTR_s_setMinimumValue__026b2338);
    dVar8 = 5.52257693644771e-315;
    (*(code *)PTR__objc_msgSend_02578628)(0x42a00000,local_70,PTR_s_setMaximumValue__026b2340);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_draftValueForScene_kind__026c1c50,local_38,local_40);
  puVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)((float)dVar8,local_70,PTR_s_setValue__026a51b0);
  FUN_01c4acf0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_01c4ad34();
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setThumbImage_forState__026b4d78,puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setThumbImage_forState__026b4d78,local_98,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_sliderChanged__026b8190,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_70);
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x4063c00000000000;
  uVar7 = 0x4010000000000000;
  uVar9 = 0x4049000000000000;
  uVar10 = 0x4036000000000000;
  local_a0 = puVar2;
  FUN_01c4aca4();
  local_e0 = uVar5;
  uStack_d8 = uVar7;
  local_d0 = uVar9;
  uStack_c8 = uVar10;
  local_c0 = uVar5;
  uStack_b8 = uVar7;
  local_b0 = uVar9;
  uStack_a8 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar7,uVar9,uVar10,local_a0,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTag__026caa80,DAT_0233a368);
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242b0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339b60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_e8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_e8;
  local_e8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTitleColor_forState__026caac0,local_e8);
  puVar2 = local_a0;
  puVar3 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339b98,local_e8,PTR_s_colorWithAlphaComponent__026ca578);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = DAT_023242c8;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_023242c8);
  fVar6 = (float)uVar5;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a0;
  uVar5 = DAT_028c6860;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_40);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar2,uVar5,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_a0;
  uVar5 = DAT_028c6858;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar2,uVar5,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar4 = local_28;
  lVar1 = local_40;
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_value_0269d830);
  (*(code *)PTR__objc_msgSend_02578628)
            ((double)fVar6,IVar4,PTR_s_sliderValueTextForKind_value__026c1c58,lVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitle_forState__026caab8,IVar4,0);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_valueButtonTapped__026b81a8,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_a0);
  puVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

