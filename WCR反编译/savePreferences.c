// savePreferences @ 019ebbb8

/* Function Stack Size: 0x10 bytes */

void WCRefineFontConvertViewController::savePreferences(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  cfstringStruct *local_b8;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  undefined *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mappingMode_026b1028);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setInteger_forKey__026a9610,pcVar2,&cf_wcr_ifont_mapping_mode);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_compatLayer_026b1030);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setInteger_forKey__026a9610,pcVar2,&cf_wcr_ifont_compat_layer);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_outputFormat_026b1038);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setInteger_forKey__026a9610,pcVar2,&cf_wcr_ifont_output_format);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_outputTemplate_026b1040);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_70 = &cf___fontName_UI;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKey__026ca9e8,local_70,&cf_wcr_ifont_output_template);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_glyphRepairRules_026b1048);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_88 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKey__026ca9e8,local_88,&cf_wcr_ifont_glyph_repair_rules);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_glyphDrawingRules_026b1050);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKey__026ca9e8,local_a0,&cf_wcr_ifont_glyph_drawing_rules);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sourcePaths_026bb210);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_b8 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKey__026ca9e8,local_b8,&cf_wcr_ifont_source_paths);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fileSourcePaths_026bb200);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_d0 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKey__026ca9e8,local_d0,&cf_wcr_ifont_file_source_paths);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_librarySourcePaths_026bb208);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_e8 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKey__026ca9e8,local_e8,&cf_wcr_ifont_library_source_paths);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_weightOffset_026b1058);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setInteger_forKey__026a9610,pcVar2,&cf_wcr_ifont_weight_offset);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sizeOffset_026b1060);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setInteger_forKey__026a9610,pcVar2,&cf_wcr_ifont_size_offset);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lineHeightOffset_026b1068);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setInteger_forKey__026a9610,pcVar2,&cf_wcr_ifont_line_offset);
  puVar1 = local_38;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_letterSpacingOffset_026b1070);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setInteger_forKey__026a9610,pcVar2,&cf_wcr_ifont_letter_offset);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_synchronize_026a0798);
  _objc_storeStrong(&local_38,0);
  return;
}

