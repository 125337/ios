// loadPreferences @ 019eb200

/* Function Stack Size: 0x10 bytes */

void WCRefineFontConvertViewController::loadPreferences(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_e0;
  cfstringStruct *local_c8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  bool local_71;
  ID local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  SEL local_40;
  ID local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_40 = param_2;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_integerForKey__026a9600,&cf_wcr_ifont_mapping_mode);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMappingMode__026bb1a8,pcVar1);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mappingMode_026b1028);
  if (2 < (long)IVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMappingMode__026bb1a8,2);
  }
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_integerForKey__026a9600,&cf_wcr_ifont_compat_layer);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCompatLayer__026bb1b0,pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_integerForKey__026a9600,&cf_wcr_ifont_output_format);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOutputFormat__026bb1b8,pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_stringForKey__026a33a0,&cf_wcr_ifont_output_template);
  _objc_retainAutoreleasedReturnValue();
  local_90 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_90 = &cf___fontName_UI;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOutputTemplate__026bb1c0,local_90);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_stringForKey__026a33a0,&cf_wcr_ifont_glyph_repair_rules);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setGlyphRepairRules__026bb1c8,local_a0);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_stringForKey__026a33a0,&cf_wcr_ifont_glyph_drawing_rules);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_b0 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setGlyphDrawingRules__026bb1d0,local_b0);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_arrayForKey__026aac40,&cf_wcr_ifont_file_source_paths);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_48;
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_arrayForKey__026aac40,&cf_wcr_ifont_library_source_paths);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_48;
  local_58 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_arrayForKey__026aac40,&cf_wcr_ifont_source_paths);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_stringForKey__026a33a0,&cf_wcr_ifont_source_path);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      local_30 = local_68;
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_68,0);
  }
  IVar2 = local_38;
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_c8 = local_60;
  }
  else {
    local_c8 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_pathsInStagingDirectoryFromArray_026bb1d8,local_c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFileSourcePaths__026bb1e0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_38;
  pcVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_e0 = local_60;
  }
  else {
    local_e0 = local_58;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_pathsInFontLibraryFromArray__026bb1e8,local_e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setLibrarySourcePaths__026bb1f0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_validPathsFromArray__026bb1a0,local_60);
  _objc_retainAutoreleasedReturnValue();
  local_70 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
  if (IVar2 == 0) {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileSourcePaths_026bb200);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar4 == 0) {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_librarySourcePaths_026bb208);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSourcePaths__026bb1f8);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileSourcePaths_026bb200);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSourcePaths__026bb1f8);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSourcePaths__026bb1f8,local_70);
  }
  pcVar5 = local_50;
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileSourcePaths_026bb200);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isEqualToArray__0269e9b0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  pcVar3 = local_58;
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_librarySourcePaths_026bb208);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToArray__0269e9b0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  pcVar1 = local_60;
  local_71 = ((ulong)pcVar3 & 1) == 0 || ((ulong)pcVar5 & 1) == 0;
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sourcePaths_026bb210);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isEqualToArray__0269e9b0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (((ulong)pcVar1 & 1) == 0) {
    local_71 = true;
  }
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_integerForKey__026a9600,&cf_wcr_ifont_weight_offset);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setWeightOffset__026bb218,pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_integerForKey__026a9600,&cf_wcr_ifont_size_offset);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSizeOffset__026bb220,pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_integerForKey__026a9600,&cf_wcr_ifont_line_offset);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setLineHeightOffset__026bb228,pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_integerForKey__026a9600,&cf_wcr_ifont_letter_offset);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setLetterSpacingOffset__026bb230,pcVar1);
  if (local_71) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_savePreferences_026bb238);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

