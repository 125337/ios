// gradientPreviewForStyle: @ 01de82e0

/* Function Stack Size: 0x18 bytes */

ID WCRefineSpecialTextListViewController::gradientPreviewForStyle_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_170;
  long local_168;
  undefined *local_d0;
  byte local_c1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0x4046000000000000;
  local_48 = 0x4036000000000000;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar7 = 0;
  uVar6 = 0;
  uVar8 = local_40;
  uVar9 = local_48;
  FUN_01de8294();
  local_70 = uVar6;
  local_68 = uVar7;
  local_60 = uVar8;
  local_58 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setClipsToBounds__026ca8c8,1);
  puVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x3fe0000000000000;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGray4Color_026b8728);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
  local_c0 = uVar6;
  uStack_b8 = uVar7;
  local_b0 = uVar8;
  uStack_a8 = uVar9;
  local_98 = uVar6;
  uStack_90 = uVar7;
  local_88 = uVar8;
  uStack_80 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,uVar8,uVar9,local_78,PTR_s_setFrame__026ca960);
  local_c1 = 0;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_c1 = IVar4 == 2;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = PTR_WCRefineGradientPalette_026ce910;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_colorsFromStyle_dark__026a7d68,local_38,
             local_c1 & 1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_38;
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientDirection);
  _objc_retainAutoreleasedReturnValue();
  local_168 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar5);
  if (5 < local_168) {
    local_168 = 5;
  }
  if (local_168 < 1) {
    local_170 = 0;
  }
  else {
    local_170 = local_168;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_configureLayer_colors_direction__026accc0,
             local_78,local_d0,local_170);
  puVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

