// applyFixedItem: @ 01e39830

/* Function Stack Size: 0x18 bytes */

void WCRefineSvgColorSchemeHistoryCell::applyFixedItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  cfstringStruct *local_110;
  cfstringStruct *local_f8;
  cfstringStruct *local_e0;
  ID local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ID local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_49 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_e0 = &cf__g_TTMr;
  }
  else {
    local_e0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_e0;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_e0;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_lightHex);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_61 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_f8 = &cf__000000;
  }
  else {
    local_f8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_lightHex);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_f8;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_f8;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkHex);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_79 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_110 = &cf__000000;
  }
  else {
    local_110 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkHex);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_110;
  }
  local_79 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_110;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameLabel_026ad1e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_e);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_detailLabel_026b68d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar5 = local_28;
  pcVar2 = local_58;
  uVar7 = 0x4046000000000000;
  uVar8 = 0;
  uVar10 = 0x4034000000000000;
  uVar9 = 0x4034000000000000;
  FUN_01e39ec4();
  local_a8 = uVar7;
  local_a0 = uVar8;
  local_98 = uVar9;
  local_90 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar8,uVar9,uVar10,IVar5,PTR_s_colorDotWithHex_frame__026c63e0,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_28;
  pcVar2 = local_70;
  uVar9 = 0;
  uVar10 = 0x4034000000000000;
  uVar8 = 0x4051000000000000;
  uVar7 = uVar10;
  local_88 = IVar5;
  FUN_01e39ec4();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,uVar9,uVar10,uVar7,IVar6,PTR_s_colorDotWithHex_frame__026c63e0,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_28;
  local_b0 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewContainer_026c63d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewContainer_026c63d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

