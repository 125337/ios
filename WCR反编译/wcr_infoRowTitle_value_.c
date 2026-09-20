// wcr_infoRowTitle:value: @ 01da2f2c

/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsBoardView::wcr_infoRowTitle_value_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double local_1e8;
  double local_1e0;
  ID local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 uStack_78;
  ID local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
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
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar7 = 0;
  uVar5 = 0;
  uVar4 = 0x4070c00000000000;
  uVar8 = 0x403c000000000000;
  FUN_01d8ec14();
  local_68 = uVar5;
  local_60 = uVar7;
  local_58 = uVar4;
  local_50 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar7,uVar4,uVar8,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,0x55);
  IVar3 = local_28;
  uVar4 = local_38;
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_01d8f4e8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcr_label_font_color__026c4e70,uVar4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_70 = IVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setNumberOfLines__026ca9d8);
  uVar4 = 0;
  uVar5 = 0x4010000000000000;
  local_1e0 = 96.0;
  uVar7 = 0x4034000000000000;
  FUN_01d8ec14();
  local_b0 = uVar4;
  uStack_a8 = uVar5;
  local_a0 = local_1e0;
  uStack_98 = uVar7;
  local_90 = uVar4;
  uStack_88 = uVar5;
  local_80 = local_1e0;
  uStack_78 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,local_70,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_70);
  IVar3 = local_28;
  uVar4 = local_40;
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_01d8f4e8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcr_label_font_color__026c4e70,uVar4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = IVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTextAlignment__026caa90,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setNumberOfLines__026ca9d8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setLineBreakMode__026ca988,4);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_sizeToFit_0269ec08);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
  local_1e0 = local_1e0 + 2.0;
  if (local_1e0 <= 24.0) {
    local_1e0 = 24.0;
  }
  if (local_1e0 <= 170.0) {
    local_1e8 = local_1e0;
  }
  else {
    local_1e8 = 170.0;
  }
  dVar6 = 268.0 - local_1e8;
  uVar4 = 0x4008000000000000;
  uVar5 = 0x4036000000000000;
  FUN_01d8ec14();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar6,uVar4,local_1e8,uVar5,local_b8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTag__026caa80,0x4b);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_b8);
  puVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

