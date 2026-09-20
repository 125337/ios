// FUN_01c2b198 @ 01c2b198

/* WARNING: Removing unreachable block (ram,0x01c2b8e4) */

void FUN_01c2b198(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  long local_58;
  double local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_58 = 0;
  local_50 = param_1;
  local_48 = param_6;
  local_40 = param_5;
  local_38 = param_4;
  local_30 = param_3;
  _objc_storeStrong(&local_58,param_7);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar8 = 0;
  uVar6 = 0;
  uVar4 = 0x406ac00000000000;
  uVar9 = 0x4040000000000000;
  FUN_01c269f8();
  local_80 = uVar6;
  local_78 = uVar8;
  local_70 = uVar4;
  local_68 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar8,uVar4,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,1);
  puVar1 = PTR__OBJC_CLASS___UISlider_026ce248;
  _objc_alloc();
  uVar6 = 0;
  uVar8 = 0x3ff0000000000000;
  uVar4 = 0x4063400000000000;
  uVar9 = 0x403e000000000000;
  FUN_01c269f8();
  local_a8 = uVar6;
  local_a0 = uVar8;
  local_98 = uVar4;
  local_90 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar8,uVar4,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_88 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setContinuous__026b4d68,1);
  puVar1 = local_88;
  uVar4 = DAT_028c67d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,uVar4,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_58 != 0) {
    _objc_setAssociatedObject(local_88,DAT_028c67e0,local_58,1);
  }
  if (local_48 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(0x3e99999a,local_88,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)(0x40a00000,local_88,PTR_s_setMaximumValue__026b2340);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(0xc2a00000,local_88,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)(0x42a00000,local_88,PTR_s_setMaximumValue__026b2340);
  }
  dVar7 = local_50;
  FUN_01c34c18(local_50,local_48);
  puVar1 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)((float)dVar7,local_88,PTR_s_setValue__026a51b0);
  FUN_01c34cf4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_01c34d38();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setThumbImage_forState__026b4d78,puVar1,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setThumbImage_forState__026b4d78,local_b0,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_30,0x1000);
  if (local_38 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_38,0x40);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_38,0x80);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_38,0x100);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addSubview__026ca4c0,local_88);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x4063c00000000000;
  uVar6 = 0x4010000000000000;
  uVar8 = 0x4049000000000000;
  uVar9 = 0x4036000000000000;
  local_b8 = puVar1;
  FUN_01c269f8();
  local_100 = uVar4;
  uStack_f8 = uVar6;
  local_f0 = uVar8;
  uStack_e8 = uVar9;
  local_d8 = uVar4;
  uStack_d0 = uVar6;
  local_c8 = uVar8;
  uStack_c0 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar6,uVar8,uVar9,local_b8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTag__026caa80,DAT_0233a360);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242b0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339b60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_108 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_108;
  local_108 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTitleColor_forState__026caac0,local_108,0)
  ;
  puVar1 = local_b8;
  puVar2 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339b98,local_108,PTR_s_colorWithAlphaComponent__026ca578);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitleColor_forState__026caac0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = DAT_023242c8;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_023242c8);
  fVar5 = (float)uVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_b8;
  uVar4 = DAT_028c67d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,uVar4,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_58 != 0) {
    _objc_setAssociatedObject(local_b8,DAT_028c67e0,local_58,1);
  }
  lVar3 = local_48;
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_value_0269d830);
  FUN_01c2b000((double)fVar5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle_forState__026caab8,lVar3,0);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_40,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addSubview__026ca4c0,local_b8);
  puVar1 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

