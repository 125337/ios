// toolbarBackgroundColorPreview @ 018c9e60

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatToolbarViewController::toolbarBackgroundColorPreview(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_f8;
  undefined *local_a8;
  undefined *local_98;
  undefined *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = puVar2;
  _objc_alloc();
  uVar6 = 0;
  uVar4 = 0;
  uVar7 = 0x4046000000000000;
  uVar8 = 0x4034000000000000;
  FUN_018c86b0();
  local_60 = uVar4;
  local_58 = uVar6;
  local_50 = uVar7;
  local_48 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar6,uVar7,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_40 = puVar3;
  for (local_68 = 0; puVar2 = local_40, local_68 < 2; local_68 = local_68 + 1) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    dVar5 = (double)local_68 * 24.0;
    uVar4 = 0;
    uVar7 = 0x4034000000000000;
    uVar6 = 0x4034000000000000;
    FUN_018c86b0();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar5,uVar4,uVar6,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGray3Color_026cab68);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    bVar1 = local_68 != 0;
    local_f8 = local_38;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_chatToolbarBackgroundColorDark_0269f370);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_f8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_chatToolbarBackgroundColorLight_0269f378)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_f8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setBackgroundColor__026ca888,local_f8);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_70);
    _objc_storeStrong(&local_70,0);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

