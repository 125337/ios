// wcr_reportFooter @ 01db2788

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsBoardView::wcr_reportFooter(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  cfstringStruct *local_138;
  ID local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ID local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc();
  uVar6 = 0x4030000000000000;
  uVar7 = 0;
  uVar5 = 0x4072c00000000000;
  uVar8 = 0x404c000000000000;
  FUN_01d8ec14();
  local_58 = uVar6;
  local_50 = uVar7;
  local_48 = uVar5;
  local_40 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar7,uVar5,uVar8,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = (cfstringStruct *)PTR_WCRefineSessionStatsEngine_026ced48;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_footerTimeRange_026c5060);
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_windowCaptionForTimeRange_now__026c5068,IVar3);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_28;
  pcVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_138 = &cf_hQ_g0WU_;
  }
  else {
    local_138 = local_60;
  }
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_01d8f4e8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcr_label_font_color__026c4e70,local_138,puVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextAlignment__026caa90);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setNumberOfLines__026ca9d8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setLineBreakMode__026ca988,4);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTag__026caa80);
  uVar6 = 0;
  uVar7 = 0x4018000000000000;
  uVar5 = 0x4072c00000000000;
  uVar8 = 0x4032000000000000;
  FUN_01d8ec14();
  local_b0 = uVar6;
  uStack_a8 = uVar7;
  local_a0 = uVar5;
  uStack_98 = uVar8;
  local_88 = uVar6;
  uStack_80 = uVar7;
  local_78 = uVar5;
  uStack_70 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,uVar5,uVar8,local_68,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_68);
  IVar3 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4026000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_01d8f4e8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcr_label_font_color__026c4e70,&::cf_W,puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = IVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setNumberOfLines__026ca9d8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTag__026caa80,0x4e);
  uVar5 = 0;
  uVar7 = 0x4072c00000000000;
  uVar6 = 0x403a000000000000;
  uVar8 = 0x4034000000000000;
  FUN_01d8ec14();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,uVar7,uVar8,local_b8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_b8);
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

