// startConvert @ 019f4d6c

/* Function Stack Size: 0x10 bytes */

void WCRefineFontConvertViewController::startConvert(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  dispatch_queue_t pdVar5;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_converting_026bb360);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
    pcVar3 = local_28;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sourcePaths_026bb210);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_validPathsFromArray__026bb1a0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbgHenW_SO);
      local_3c = 1;
    }
    else {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fontBasePath_026baec0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_W_SOvU__gMn_);
        local_3c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setConverting__026bb3b8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSourcePaths__026bb1f8,local_38);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_savePreferences_026bb238);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
        puVar1 = PTR_WCRefineHelper_026ce000;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&::cf___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fontBasePath_026baec0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_48 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        puVar4 = PTR_WCRiFontConvertOptions_026cee08;
        _objc_alloc_init();
        pcVar3 = local_28;
        local_50 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mappingMode_026b1028);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setMappingMode__026bb1a8,pcVar3);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_compatLayer_026b1030);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCompatLayer__026bb1b0,pcVar3);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_outputFormat_026b1038);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setOutputFormat__026bb1b8,pcVar3);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_outputTemplate_026b1040);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setOutputTemplate__026bb1c0);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_weightOffset_026b1058);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setWeightOffset__026bb218,pcVar3);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sizeOffset_026b1060);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSizeOffset__026bb220,pcVar3);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lineHeightOffset_026b1068);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLineHeightOffset__026bb228,pcVar3);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_letterSpacingOffset_026b1070);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setLetterSpacingOffset__026bb230,pcVar3);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_glyphRepairRules_026b1048);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_f8 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setGlyphRepairRules__026bb1c8,local_f8)
        ;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_glyphDrawingRules_026b1050);
        _objc_retainAutoreleasedReturnValue();
        local_108 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_108 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setGlyphDrawingRules__026bb1d0,local_108);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        _objc_initWeak(auStack_58,local_28);
        pdVar5 = _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_48;
        local_a0 = PTR___NSConcreteStackBlock_02578660;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_019f54c4;
        local_88 = &DAT_02585f70;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar2 = local_38;
        local_80 = pcVar3;
        (*(code *)PTR__objc_retain_02578638)();
        puVar4 = local_50;
        local_78 = pcVar2;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar3 = local_28;
        local_70 = puVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = pcVar3;
        _objc_copyWeak(auStack_60,auStack_58);
        _dispatch_async(pdVar5,&local_a0);
        (*(code *)PTR__objc_release_02578630)(pdVar5);
        _objc_destroyWeak(auStack_60);
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_80,0);
        _objc_destroyWeak(auStack_58);
        _objc_storeStrong(&local_50,0);
        _objc_storeStrong(&local_48,0);
        local_3c = 0;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

