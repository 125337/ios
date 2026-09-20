// showFloatingCaptureButton:promptTitle: @ 01d82778

/* Function Stack Size: 0x20 bytes */

void WCRefineSearchSettingsViewController::showFloatingCaptureButton_promptTitle_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double in_d2;
  double dVar12;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  ID local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  ID local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  undefined *local_d0 [4];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_80;
  double local_78;
  double local_70;
  uint local_64;
  undefined *local_60;
  undefined *local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideFloatingCaptureButton_026c4c18);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSearchSettingsViewController_026cefb8,
             PTR_s_setCurrentCapturingKey__026c4c20,local_38);
  puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (local_58[0] == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if (puVar4 != (undefined *)0x0) {
      puVar5 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_58[0];
      local_58[0] = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _objc_storeStrong(&local_60,0);
  }
  bVar1 = local_58[0] != (undefined *)0x0;
  if (bVar1) {
    local_70 = 100.0;
    dVar7 = 50.0;
    local_78 = 50.0;
    puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a0 = dVar7;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    local_80 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b0 = dVar7;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    local_a8 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = (local_80 - local_70) - 20.0;
    dVar10 = local_a8 / 2.0 - local_78 / 2.0;
    dVar7 = local_70;
    dVar12 = local_78;
    local_d0[0] = puVar4;
    FUN_01d7a104();
    local_110 = dVar8;
    dStack_108 = dVar10;
    local_100 = dVar7;
    dStack_f8 = dVar12;
    local_f0 = dVar8;
    dStack_e8 = dVar10;
    local_e0 = dVar7;
    dStack_d8 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar8,dVar10,dVar7,dVar12,local_d0[0],PTR_s_setFrame__026ca960);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,DAT_02323f80,0x3ff0000000000000,DAT_02323c60,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_d0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
    puVar5 = local_d0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar9 = 0;
    uVar11 = 0x4000000000000000;
    FUN_01d8335c();
    puVar4 = local_d0[0];
    local_120 = uVar9;
    uStack_118 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uStack_118;
    local_130 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,uStack_118);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_d0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3f000000);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_d0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4010000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_setTitle_forState__026caab8,&cf_Uc,0);
    puVar4 = local_d0[0];
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_boldSystemFontOfSize__0269cf28);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_d0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_d0[0];
    puVar5 = PTR_WCRefineSearchSettingsViewController_026cefb8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineSearchSettingsViewController_026cefb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_addTarget_action_forControlEvent_026ca4c8,puVar5,
               PTR_s_onGlobalFloatingCaptureButtonTap_026c4c28,0x40);
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_addSubview__026ca4c0,local_d0[0]);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineSearchSettingsViewController_026cefb8,
               PTR_s_setGlobalFloatingButton__026c4c30,local_d0[0]);
    puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
    _objc_alloc();
    puVar5 = PTR_WCRefineSearchSettingsViewController_026cefb8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineSearchSettingsViewController_026cefb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_initWithTarget_action__026ca718,puVar5,PTR_s_handleGlobalPan__026c4c38);
    local_138 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_addGestureRecognizer__026ca4a8,puVar4);
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar9 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Mn_);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    local_160 = PTR___NSConcreteStackBlock_02578660;
    local_158 = 0xc2000000;
    local_154 = 0;
    local_150 = FUN_01d83388;
    local_148 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_28;
    local_140 = IVar2;
    local_188 = puVar4;
    local_180 = 0xc2000000;
    local_17c = 0;
    local_178 = FUN_01d833f0;
    local_170 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,puVar6,&cf_eQ__v,&cf_Sm,
               &local_160,&cf_wSN,&local_188,uVar9);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(local_d0,0);
  }
  local_64 = (uint)!bVar1;
  _objc_storeStrong(local_58,0);
  if (local_64 == 0) {
    local_64 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

