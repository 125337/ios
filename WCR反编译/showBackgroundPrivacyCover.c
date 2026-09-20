// showBackgroundPrivacyCover @ 00004668

/* Function Stack Size: 0x10 bytes */

void EncryptionLock::showBackgroundPrivacyCover(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_d0;
  double dVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_b8 [5];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundPrivacyWindow_0269cb20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    FUN_00004e6c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = param_1;
    if (param_1 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIWindow_026cdf68;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,in_d2,in_d3,puVar3,PTR_s_initWithFrame__026ca6e8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setBackgroundPrivacyWindow__0269cb28,puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIWindow_026cdf68;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithWindowScene__026ca730,local_38);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setBackgroundPrivacyWindow__0269cb28,puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_coordinateSpace_0269cb30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar2 = local_28;
      local_68 = in_d0;
      uStack_60 = in_d1;
      local_58 = in_d2;
      uStack_50 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundPrivacyWindow_0269cb20);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = uStack_60;
      local_90 = local_68;
      uStack_78 = uStack_50;
      local_80 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,uStack_60,local_58,uStack_50);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundPrivacyWindow_0269cb20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundPrivacyWindow_0269cb20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    dVar5 = *(double *)PTR__UIWindowLevelStatusBar_02578240;
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundPrivacyWindow_0269cb20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar5 + 1001.0);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    _objc_alloc_init();
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_b8[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_b8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundPrivacyWindow_0269cb20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(local_b8);
    _objc_storeStrong(&local_38,0);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundPrivacyWindow_0269cb20);
  _objc_retainAutoreleasedReturnValue();
  FUN_00005250();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

