// importHTMLURL:nightWorkId: @ 01d067b0

/* Function Stack Size: 0x20 bytes */

bool WCRefineProfileBgMaterialRepositoryViewController::importHTMLURL_nightWorkId_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  qword *pqVar5;
  qword *pqVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_368;
  cfstringStruct *local_330;
  undefined *local_2d8;
  undefined *local_2a0;
  byte local_284;
  cfstringStruct *local_270;
  qword *local_258;
  cfstringStruct *local_228;
  cfstringStruct *local_208;
  byte local_1f9;
  undefined *local_1f8;
  undefined *local_1f0;
  cfstringStruct *local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  byte local_1c9;
  undefined8 local_1c8;
  undefined *local_1c0;
  byte local_1b1;
  undefined *local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  byte local_181;
  undefined *local_180;
  byte local_171;
  undefined *local_170;
  undefined *local_168;
  byte local_159;
  cfstringStruct *local_158;
  byte local_149;
  cfstringStruct *local_148;
  byte local_139;
  cfstringStruct *local_138;
  byte local_129;
  cfstringStruct *local_128;
  byte local_11d;
  int local_11c;
  cfstringStruct *local_118;
  qword *local_110;
  qword *local_108;
  qword *local_100;
  undefined8 local_f8;
  qword *local_f0;
  cfstringStruct *local_e8;
  qword *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  qword *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  qword *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = (undefined *)0x0;
  _objc_storeStrong(&local_d0,param_4);
  pcVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_228 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_228 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_228;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  local_38 = &cf_html;
  local_30 = &cf_htm;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    pqVar5 = (qword *)PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
               local_c8,1,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_e0 = pqVar5;
    _objc_alloc();
    pqVar5 = local_e0;
    local_100 = &segment_command_00000020.vmsize;
    pqVar6 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
    local_258 = pqVar6;
    if (local_100 < pqVar6) {
      local_258 = local_100;
    }
    local_110 = local_258;
    local_a0 = 0;
    local_a8 = local_258;
    local_98 = 0;
    local_90 = local_258;
    local_f8 = 0;
    local_f0 = local_258;
    local_108 = pqVar6;
    (*(code *)PTR__objc_msgSend_02578628)(pqVar5,PTR_s_subdataWithRange__026a9e88,0,local_258);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithData_encoding__026a3378,pqVar5,4);
    local_270 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_270 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_270;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pqVar5);
    pcVar1 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_containsString__0269d0b0,&cf_<html);
    if ((((ulong)pcVar1 & 1) == 0) &&
       (pcVar1 = local_118,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_118,PTR_s_containsString__0269d0b0,&cf_<_doctypehtml),
       ((ulong)pcVar1 & 1) == 0)) {
      local_a9 = 0;
      local_11c = 1;
    }
    else {
      _objc_storeStrong(&local_d8,&cf_html);
      local_11c = 0;
    }
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    if (local_11c != 0) goto LAB_01d07968;
  }
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  local_129 = 0;
  local_139 = 0;
  local_149 = 0;
  local_159 = 0;
  local_284 = 1;
  if (puVar3 == (undefined *)0x0) {
    pcVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_129 = 1;
    local_128 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_139 = 1;
    local_138 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_284 = 1;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_149 = 1;
      local_148 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_159 = 1;
      local_158 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_284 = (byte)pcVar1;
    }
  }
  if ((local_159 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_158);
  }
  if ((local_149 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_148);
  }
  if ((local_139 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  if ((local_129 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  local_11d = local_284 & 1;
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  local_2a0 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_171 = 0;
  local_181 = 0;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_171 = 1;
    local_170 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _arc4random_uniform(10000);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_2a0,PTR_s_stringWithFormat__0269cca8,&cf_WCR_PBG_HTML__lld__u);
    _objc_retainAutoreleasedReturnValue();
    local_180 = local_2a0;
  }
  else {
    local_2a0 = local_d0;
  }
  local_181 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = local_2a0;
  if ((local_181 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_180);
  }
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  puVar3 = local_168;
  _WCRefineProfileBgHTMLWorkDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_190 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_1a1 = 0;
  local_1b1 = 0;
  local_2d8 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((local_11d & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_index___);
    _objc_retainAutoreleasedReturnValue();
    local_1b1 = 1;
    local_1b0 = local_2d8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_index_dark___);
    _objc_retainAutoreleasedReturnValue();
    local_1a1 = 1;
    local_1a0 = local_2d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = local_2d8;
  if ((local_1b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  if ((local_1a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a0);
  }
  puVar3 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_190,PTR_s_stringByAppendingPathComponent__026cab30,local_198);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_1c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_1c8 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_startAccessingSecurityScopedReso_026a22c0);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_c8;
  puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_1c0);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = local_1c8;
  puVar7 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_copyItemAtURL_toURL_error__026a22c8,pcVar1,puVar4,&local_1d8);
  _objc_storeStrong(&local_1c8,local_1d8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_1c9 = (byte)puVar7;
  if (((ulong)puVar7 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL__026a9eb0,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_writeToFile_atomically__0269f928,local_1c0,1)
    ;
    local_1c9 = (byte)puVar3;
    _objc_storeStrong(&local_1e0,0);
  }
  if ((local_1c9 & 1) == 0) {
    local_a9 = 0;
  }
  else {
    puVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    if (puVar3 == (undefined *)0x0) {
      pcVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_URLByDeletingPathExtension_026c3d28);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_330 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_330 = &cf__g_TTQ_u;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = local_330;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar2 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__dark);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_1e8;
      local_1e8 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar2 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__night,&::cf___);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_1e8;
      local_1e8 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _WCRefineProfileBgPersistHTMLLayoutForWork(0);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1f9 = 0;
      local_368 = puVar7;
      if (puVar7 == (undefined *)0x0) {
        local_368 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = local_368;
      }
      local_1f9 = puVar7 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1f0 = local_368;
      if ((local_1f9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1f8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar4 = local_1f0;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_88 = &cf_id;
      local_60 = local_168;
      local_80 = &cf_name;
      local_58 = local_1e8;
      local_78 = &cf_author;
      local_50 = &cf_WCR;
      local_70 = &cf_createdAt;
      puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = &cf_pinned;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_40 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_88,5);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_insertObject_atIndex__0269eac0,puVar9,0);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _WCRefineProfileBgEnableHideForHTMLMode();
      pcVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      _WCRefineProfileBgHTMLLayoutFromCompanionJSONAtPath();
      _objc_retainAutoreleasedReturnValue();
      local_208 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
      if (pcVar1 != (cfstringStruct *)0x0) {
        _WCRefineProfileBgSeedHTMLLayoutJSONForWork(pcVar1,local_168,local_208);
      }
      _WCRefineProfileBgApplyHTMLLayoutForWork(local_168);
      _objc_storeStrong(&local_208);
      _objc_storeStrong(&local_1f0,0);
      _objc_storeStrong(&local_1e8,0);
    }
    FUN_01cfeff4();
    local_a9 = 1;
  }
  local_11c = 1;
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_168,0);
LAB_01d07968:
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

