// applyRandomItem: @ 01e39f10

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineSvgColorSchemeHistoryCell::applyRandomItem_
          (WCRefineSvgColorSchemeHistoryCell *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  float in_s0;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  cfstringStruct *local_170;
  cfstringStruct *local_118;
  cfstringStruct *local_100;
  undefined *local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ID local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined4 local_8c;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  double local_78;
  double local_70;
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
    local_100 = &cf__g_TTMr;
  }
  else {
    local_100 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_100;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_100;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_paletteHexes);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_61 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_118 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  else {
    local_118 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_paletteHexes);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_118;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_118;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_alpha);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar5 = local_28;
  local_70 = (double)in_s0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameLabel_026ad1e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_zzr_g);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_detailLabel_026b68d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_detailLabel_026b68d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  local_78 = 0.0;
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
  local_8c = 4;
  local_170 = pcVar2;
  if ((cfstringStruct *)0x3 < pcVar2) {
    local_170 = (cfstringStruct *)0x4;
  }
  local_98 = local_170;
  local_80 = local_170;
  local_88 = pcVar2;
  for (local_a0 = (cfstringStruct *)0x0; IVar5 = local_28, local_a0 < local_80;
      local_a0 = (cfstringStruct *)((long)&local_a0->field0_0x0 + 1)) {
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_a0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x4000000000000000;
    uVar9 = 0x4032000000000000;
    uVar8 = 0x4032000000000000;
    dVar6 = local_78;
    FUN_01e39ec4();
    local_c8 = dVar6;
    local_c0 = uVar7;
    local_b8 = uVar8;
    local_b0 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar6,uVar7,uVar8,uVar9,IVar5,PTR_s_colorDotWithHex_frame__026c63e0,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = IVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewContainer_026c63d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    local_78 = local_78 + 20.0;
    _objc_storeStrong(&local_a8,0);
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
  if (local_80 < pcVar2) {
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar7 = 0;
    uVar9 = 0x4038000000000000;
    uVar8 = 0x4038000000000000;
    dVar6 = local_78;
    FUN_01e39ec4();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar6,uVar7,uVar8,uVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setText__026caa88,&cf__);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewContainer_026c63d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

