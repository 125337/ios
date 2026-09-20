// wcr_statPillTitle:count:color: @ 01da345c

/* Function Stack Size: 0x28 bytes */

ID WCRefineSessionStatsBoardView::wcr_statPillTitle_count_color_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double local_270;
  double local_268;
  ID local_80;
  ID local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  unsigned_long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar6 = 0;
  uVar5 = 0;
  local_268 = 84.0;
  uVar8 = 0x4042000000000000;
  FUN_01d8ec14();
  local_70 = uVar5;
  local_68 = uVar6;
  local_60 = local_268;
  local_58 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  uVar5 = local_48;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323f10,local_48,PTR_s_colorWithAlphaComponent__026ca578);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  puVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4028000000000000);
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
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_sizeToFit_0269ec08);
  IVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_01d8f3a4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_wcr_label_font_color__026c4e70,puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  local_80 = IVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setNumberOfLines__026ca9d8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_sizeToFit_0269ec08);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
  dVar7 = local_268;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bounds_026ca548);
  if (local_268 < dVar7) {
    local_268 = dVar7;
  }
  local_270 = local_268 + 20.0;
  if (local_270 <= 64.0) {
    local_270 = 64.0;
  }
  dVar7 = local_270 - 12.0;
  uVar5 = 0x4018000000000000;
  uVar6 = 0x4000000000000000;
  uVar8 = 0x402c000000000000;
  FUN_01d8ec14();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,dVar7,uVar8,local_78,PTR_s_setFrame__026ca960);
  uVar5 = 0x4018000000000000;
  dVar7 = local_270 - 12.0;
  uVar6 = 0x4030000000000000;
  uVar8 = 0x4032000000000000;
  FUN_01d8ec14();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,dVar7,uVar8,local_80,PTR_s_setFrame__026ca960);
  uVar6 = 0;
  uVar5 = 0;
  uVar8 = 0x4042000000000000;
  FUN_01d8ec14();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,local_270,uVar8,local_50,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_78);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_80);
  puVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

