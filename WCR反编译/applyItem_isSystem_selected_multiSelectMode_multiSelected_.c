// applyItem:isSystem:selected:multiSelectMode:multiSelected: @ 019cb830

/* Function Stack Size: 0x28 bytes */

void WCRefineFontListCell::applyItem_isSystem_selected_multiSelectMode_multiSelected_
               (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5,bool param_6,
               bool param_7)

{
  qword qVar1;
  ID IVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_218;
  undefined *local_1e8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  cfstringStruct *local_e8;
  byte local_d9;
  undefined *local_d8;
  byte local_c9;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct local_b8;
  undefined *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  undefined1 local_39;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (undefined1)param_4;
  local_3a = (byte)param_5;
  local_3b = (byte)param_6;
  local_3c = (byte)param_7;
  if ((param_4 & 1) != 0) {
    uVar3 = *(undefined8 *)(local_28 + (long)_nameLabel);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setText__026caa88,&cf___W_SO);
    FUN_019cb1bc(0x4030000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_28 + (long)_sampleLabel),PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_28 + (long)_checkmark),PTR_s_setHidden__026ca970,1);
    local_40 = 1;
    goto LAB_019cc678;
  }
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_postScriptName);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = local_38;
  local_48 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_38;
  local_50 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = local_38;
  local_58 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  local_59 = (byte)pcVar4;
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_rowType);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  local_5a = (byte)pcVar5;
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_expanded);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  local_5b = (byte)pcVar5;
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_expandable);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  local_5c = (byte)pcVar5;
  pcVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  local_78 = (undefined *)0x0;
  local_70 = pcVar4;
  if ((local_5a & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) goto LAB_019cbc14;
    pcVar5 = local_70;
    FUN_019cc694(pcVar4);
    if (((ulong)pcVar5 & 1) != 0) goto LAB_019cbc14;
    _objc_storeStrong(&local_78,local_70);
  }
  else {
LAB_019cbc14:
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_1a8 = local_70;
    }
    else {
      local_1a8 = local_58;
    }
    _objc_storeStrong(&local_78,local_1a8);
  }
  puVar6 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (puVar6 == (undefined *)0x0) {
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_1b0 = &cf__g_TTW_SO;
    }
    else {
      local_1b0 = local_48;
    }
    _objc_storeStrong(&local_78,local_1b0);
  }
  pcVar4 = local_50;
  FUN_019cc844();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_78;
  local_80 = pcVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = puVar6;
  if ((local_5a & 1) == 0) {
    pcVar4 = local_50;
    FUN_019ccaa4();
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
    if (pcVar4 != (cfstringStruct *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_88;
      local_88 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    _objc_storeStrong(&local_90,0);
  }
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (((local_59 & 1) != 0) && ((local_5c & 1) != 0)) {
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_faceCount);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_88;
    local_88 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_98,0);
  }
  if ((local_5a & 1) != 0) {
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_88;
    local_88 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  pcVar4 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  local_b8.field2_0x10._7_1_ = 0;
  if ((pcVar4 == (cfstringStruct *)0x0) || ((local_5a & 1) != 0)) {
    local_1e8 = local_88;
  }
  else {
    local_1e8 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_b8.field2_0x10._7_1_ = 1;
    local_b8.field3_0x18 = (long)local_1e8;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_nameLabel),PTR_s_setText__026caa88,local_1e8);
  if ((local_b8.field2_0x10._7_1_ & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8.field3_0x18);
  }
  pcVar4 = local_50;
  FUN_019ccb98(0x4030000000000000,local_50,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_b8.field1_0x8 = (qword)pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    pcVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    pcVar4 = (cfstringStruct *)0x0;
    if (pcVar5 != (cfstringStruct *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_currentThread_026a11e0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = &local_b8;
      local_b8.field0_0x0 = (qword)puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8.field0_0x0,PTR_s_setObject_forKeyedSubscript__0269d248);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_fontWithName_size__026a1cd0,local_48);
      _objc_retainAutoreleasedReturnValue();
      qVar1 = local_b8.field1_0x8;
      local_b8.field1_0x8 = (qword)pcVar5;
      (*(code *)PTR__objc_release_02578630)(qVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8.field0_0x0,PTR_s_removeObjectForKey__0269d700,
                 &cf_wcr_fontBeautify_factoryBypass);
      _objc_storeStrong(pcVar4,0);
    }
  }
  if ((cfstringStruct *)local_b8.field1_0x8 == (cfstringStruct *)0x0) {
    FUN_019cb1bc(0x4030000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158);
    _objc_retainAutoreleasedReturnValue();
    qVar1 = local_b8.field1_0x8;
    local_b8.field1_0x8 = (qword)pcVar4;
    (*(code *)PTR__objc_release_02578630)(qVar1);
  }
  uVar3 = *(undefined8 *)(local_28 + (long)_sampleLabel);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setFont__026ca958,local_b8.field1_0x8);
  IVar2 = local_28;
  if ((local_3b & 1) == 0) {
    if ((local_5c & 1) == 0) {
      if ((local_3a & 1) != 0) {
        uVar9 = 0x4034000000000000;
        uVar8 = 0x4034000000000000;
        FUN_019cd070();
        FUN_019cb5a4();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar8,uVar9,0x4031000000000000,IVar2,
                   PTR_s_updateAccessorySymbol_size_point_026badb8,&cf_checkmark_circle_fill,2);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_28 + (long)_checkmark),PTR_s_setHidden__026ca970,
                 (local_3a ^ 1) & 1);
      local_40 = 0;
    }
    else {
      pcVar4 = &cf_chevron_down;
      if ((local_5b & 1) == 0) {
        pcVar4 = &cf_chevron_right;
      }
      (*(code *)PTR__objc_retain_02578638)();
      IVar2 = local_28;
      uVar8 = 0x4034000000000000;
      uVar3 = 0x4034000000000000;
      local_100 = pcVar4;
      FUN_019cd070();
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,uVar8,0x4030000000000000,IVar2,
                 PTR_s_updateAccessorySymbol_size_point_026badb8,pcVar4,2);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_28 + (long)_checkmark),PTR_s_setHidden__026ca970,0);
      local_40 = 1;
      _objc_storeStrong(&local_100,0);
    }
  }
  else {
    local_218 = *(undefined **)(local_28 + (long)_checkmark);
    (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_setHidden__026ca970,0);
    local_c9 = 0;
    local_d9 = 0;
    if ((local_3c & 1) == 0) {
      local_218 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
      _objc_retainAutoreleasedReturnValue();
      local_d9 = 1;
      local_d8 = local_218;
    }
    else {
      FUN_019cb5a4();
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_c8 = local_218;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_218;
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    pcVar4 = &cf_checkmark_circle_fill;
    if ((local_3c & 1) == 0) {
      pcVar4 = &cf_circle;
    }
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_28;
    uVar8 = 0x4034000000000000;
    uVar3 = 0x4034000000000000;
    local_e8 = pcVar4;
    FUN_019cd070();
    local_f8 = uVar3;
    local_f0 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,uVar8,0x4031000000000000,IVar2,PTR_s_updateAccessorySymbol_size_point_026badb8,
               pcVar4,2,local_c0);
    local_40 = 1;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_b8.field1_0x8);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
LAB_019cc678:
  _objc_storeStrong(&local_38,0);
  return;
}

