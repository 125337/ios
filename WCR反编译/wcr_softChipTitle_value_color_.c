// wcr_softChipTitle:value:color: @ 01da3ae8

/* Function Stack Size: 0x28 bytes */

ID WCRefineSessionStatsBoardView::wcr_softChipTitle_value_color_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  cfstringStruct *local_170;
  ID local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ID local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0x4060800000000000;
  uVar8 = 0x4041000000000000;
  FUN_01d8ec14();
  local_70 = uVar6;
  local_68 = uVar7;
  local_60 = uVar5;
  local_58 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar7,uVar5,uVar8,puVar1,PTR_s_initWithFrame__026ca6e8);
  uVar5 = local_48;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323cc0,local_48,PTR_s_colorWithAlphaComponent__026ca578);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  puVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_28;
  uVar5 = local_38;
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_wcr_label_font_color__026c4e70,uVar5,puVar1,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_78 = IVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTextAlignment__026caa90);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setNumberOfLines__026ca9d8,1);
  uVar5 = 0x4018000000000000;
  uVar6 = 0x4000000000000000;
  uVar7 = 0x405e000000000000;
  uVar8 = 0x402a000000000000;
  FUN_01d8ec14();
  local_c0 = uVar5;
  uStack_b8 = uVar6;
  local_b0 = uVar7;
  uStack_a8 = uVar8;
  local_98 = uVar5;
  uStack_90 = uVar6;
  local_88 = uVar7;
  uStack_80 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,uVar7,uVar8,local_78,PTR_s_setFrame__026ca960);
  IVar2 = local_28;
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_170 = &::cf_format_s_;
  }
  else {
    local_170 = local_40;
  }
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  FUN_01d8f3a4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_wcr_label_font_color__026c4e70,local_170,puVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_c8 = IVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTextAlignment__026caa90);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setNumberOfLines__026ca9d8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe8000000000000,local_c8,PTR_s_setMinimumScaleFactor__026ca9d0);
  uVar5 = 0x4018000000000000;
  uVar6 = 0x402e000000000000;
  uVar7 = 0x405e000000000000;
  uVar8 = 0x4030000000000000;
  FUN_01d8ec14();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,uVar7,uVar8,local_c8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_78);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_c8);
  puVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

