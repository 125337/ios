// convertFontAtPath:options:error: @ 015dd3f4

/* Function Stack Size: 0x28 bytes */

ID WCRiFontConverter::convertFontAtPath_options_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  cfstringStruct *local_290;
  cfstringStruct *local_280;
  cfstringStruct *local_270;
  cfstringStruct *local_248;
  uint local_1dc;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  long local_1b0;
  undefined *local_1a8;
  ID *local_1a0;
  ID *local_198;
  ID local_190;
  ID local_188;
  bool local_179;
  cfstringStruct *local_178;
  undefined *local_170;
  undefined *local_168;
  long local_160;
  byte local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined *local_140;
  undefined4 local_138;
  byte local_131;
  undefined *local_130;
  ID *local_128;
  cfstringStruct *local_120;
  long local_118;
  SEL local_110;
  ID local_108;
  ID local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_118 = 0;
  local_110 = param_2;
  local_108 = param_1;
  _objc_storeStrong(&local_118,param_3);
  local_120 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_120,param_4);
  lVar3 = local_118;
  local_128 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
  local_131 = 0;
  local_1dc = 1;
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_131 = 1;
    local_130 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1dc = (uint)puVar4 ^ 1;
  }
  if ((local_131 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_130);
  }
  puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
  if ((local_1dc & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_118);
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
    puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
    if (puVar6 == (undefined *)0x0) {
      if (local_128 != (ID *)0x0) {
        local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
        local_40 = &cf_elSnW_SO;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRiFont,5);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *local_128 = (ID)puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      IVar5 = *(ID *)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_138 = 1;
      local_100 = IVar5;
    }
    else {
      local_151 = 0;
      bVar1 = local_120 == (cfstringStruct *)0x0;
      if (bVar1) {
        local_248 = (cfstringStruct *)PTR_WCRiFontConvertOptions_026cee08;
        _objc_alloc_init();
        local_150 = local_248;
      }
      else {
        local_248 = local_120;
      }
      local_151 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = local_248;
      if ((local_151 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_150);
      }
      IVar5 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_prepareEngine__026b1020,local_128);
      if ((IVar5 & 1) == 0) {
        IVar5 = *(ID *)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_138 = 1;
        local_100 = IVar5;
      }
      else {
        lVar3 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_140;
        local_160 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_base64EncodedStringWithOptions__026a1df8,0);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = &cf_mode;
        pcVar7 = local_148;
        local_168 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_mappingMode_026b1028);
        FUN_015ddfbc();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = &cf_compatLayer;
        pcVar8 = local_148;
        local_80 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_compatLayer_026b1030);
        local_78 = &cf_ios18;
        if (pcVar8 != (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
          local_78 = &cf_ios9;
        }
        local_a8 = &cf_outputFormat;
        pcVar8 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_outputFormat_026b1038);
        local_70 = &cf_ttf;
        if (pcVar8 != (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
          local_70 = &cf_ttc;
        }
        local_a0 = &cf_outputTemplate;
        pcVar8 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_outputTemplate_026b1040);
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_179 = false;
        if (pcVar9 == (cfstringStruct *)0x0) {
          local_270 = &cf___fontName_UI;
        }
        else {
          local_270 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_outputTemplate_026b1040);
          _objc_retainAutoreleasedReturnValue();
          local_178 = local_270;
        }
        local_179 = pcVar9 != (cfstringStruct *)0x0;
        local_68 = local_270;
        local_98 = &cf_glyphRepairRules;
        pcVar9 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_glyphRepairRules_026b1048);
        _objc_retainAutoreleasedReturnValue();
        local_280 = pcVar9;
        if (pcVar9 == (cfstringStruct *)0x0) {
          local_280 = &::cf___;
        }
        local_60 = local_280;
        local_90 = &cf_glyphDrawingRules;
        pcVar10 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_glyphDrawingRules_026b1050);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_290 = pcVar10;
        if (pcVar10 == (cfstringStruct *)0x0) {
          local_290 = &::cf___;
        }
        local_58 = local_290;
        local_88 = &cf_offsets;
        local_f8 = &cf_weightOffset;
        pcVar11 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_weightOffset_026b1058);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInteger__0269e080,pcVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_f0 = &cf_sizeOffset;
        pcVar11 = local_148;
        local_d8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_sizeOffset_026b1060);
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_numberWithInteger__0269e080,pcVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_e8 = &cf_lineHeightOffset;
        pcVar11 = local_148;
        local_d0 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_lineHeightOffset_026b1068);
        (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_numberWithInteger__0269e080,pcVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_e0 = &cf_letterSpacingOffset;
        pcVar11 = local_148;
        local_c8 = puVar12;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_letterSpacingOffset_026b1070);
        (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_numberWithInteger__0269e080,pcVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_c0 = puVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_f8,4);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_50 = puVar14;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_80,&local_b8,7);
        _objc_retainAutoreleasedReturnValue();
        local_170 = puVar15;
        (*(code *)PTR__objc_release_02578630)(puVar14);
        (*(code *)PTR__objc_release_02578630)(puVar13);
        (*(code *)PTR__objc_release_02578630)(puVar12);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        if ((local_179 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_178);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        IVar5 = *(ID *)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        puVar4 = local_168;
        uVar2 = DAT_028e3b98;
        local_1a0 = &local_190;
        local_190 = 0;
        local_1d8 = PTR___NSConcreteGlobalBlock_02578658;
        local_1d0 = 0xd0800000;
        local_1cc = 0;
        local_1c8 = FUN_015de07c;
        local_1c0 = &DAT_025874d8;
        local_188 = IVar5;
        (*(code *)PTR__objc_retain_02578638)();
        lVar3 = local_160;
        local_1b8 = puVar4;
        (*(code *)PTR__objc_retain_02578638)();
        puVar4 = local_170;
        local_1b0 = lVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_1a8 = puVar4;
        local_198 = &local_188;
        _dispatch_sync(uVar2,&local_1d8);
        IVar5 = local_190;
        if ((local_128 != (ID *)0x0) && (local_190 != 0)) {
          _objc_retainAutorelease();
          *local_128 = IVar5;
        }
        IVar5 = local_188;
        (*(code *)PTR__objc_retain_02578638)();
        local_100 = IVar5;
        local_138 = 1;
        _objc_storeStrong(&local_1a8);
        _objc_storeStrong(&local_1b0,0);
        _objc_storeStrong(&local_1b8,0);
        _objc_storeStrong(&local_190,0);
        _objc_storeStrong(&local_188,0);
        _objc_storeStrong(&local_170,0);
        _objc_storeStrong(&local_168,0);
        _objc_storeStrong(&local_160,0);
      }
      _objc_storeStrong(&local_148,0);
    }
    _objc_storeStrong(&local_140,0);
  }
  else {
    if (local_128 != (ID *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_nW_SONX__W;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRiFont,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_128 = (ID)puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    IVar5 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = 1;
    local_100 = IVar5;
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_100;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

