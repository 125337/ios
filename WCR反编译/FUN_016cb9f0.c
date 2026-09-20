// FUN_016cb9f0 @ 016cb9f0

void FUN_016cb9f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong local_3a8;
  ulong local_330;
  ulong local_2a8;
  uint local_1c4;
  ulong local_1a0;
  undefined1 local_191;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  byte local_161;
  ulong local_160;
  byte local_151;
  ulong local_150;
  byte local_141;
  ulong local_140;
  byte local_131;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  undefined4 local_108;
  byte local_101;
  undefined *local_100;
  undefined8 *local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  ulong local_88;
  cfstringStruct *local_80;
  ulong local_78;
  ulong local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_2);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_3);
  local_101 = 0;
  uVar1 = local_d8;
  local_e8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  local_1c4 = 1;
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1c4 = (uint)puVar2 ^ 1;
  }
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
  if ((local_1c4 & 1) == 0) {
    uVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_016be9f0();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
    if ((uVar3 & 1) == 0) {
      if (local_e8 != (undefined8 *)0x0) {
        local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
        local_40 = &cf_S_MRN_f;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineToDoHTML,2);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *local_e8 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      local_d0 = (undefined *)0x0;
      local_108 = 1;
    }
    else {
      uVar1 = local_d8;
      FUN_016cd8d4();
      _objc_retainAutoreleasedReturnValue();
      local_110 = uVar1;
      FUN_016cdb78();
      _objc_retainAutoreleasedReturnValue();
      local_118 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
      if (uVar1 == 0) {
        if (local_e8 != (undefined8 *)0x0) {
          local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
          local_50 = &cf_H;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_58,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineToDoHTML,3);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *local_e8 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        local_d0 = (undefined *)0x0;
        local_108 = 1;
      }
      else {
        uVar1 = local_118;
        FUN_016cdfec();
        _objc_retainAutoreleasedReturnValue();
        local_131 = 0;
        local_141 = 0;
        local_151 = 0;
        local_161 = 0;
        uVar3 = local_e0;
        local_120 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          local_2a8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_151 = 1;
          local_150 = local_2a8;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_161 = 1;
          local_160 = local_2a8;
        }
        else {
          local_2a8 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_131 = 1;
          local_130 = local_2a8;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_141 = 1;
          local_140 = local_2a8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = local_2a8;
        if ((local_161 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_160);
        }
        if ((local_151 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_150);
        }
        if ((local_141 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_140);
        }
        if ((local_131 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_130);
        }
        uVar1 = local_128;
        puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
        ;
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_128;
        local_128 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar1 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          _objc_storeStrong(&local_128,&cf__g_TTNx);
        }
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        param_1 = param_1 * 1000.0;
        _arc4random_uniform(10000);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_WCR_HTML__lld__u);
        _objc_retainAutoreleasedReturnValue();
        local_170 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_c8 = &cf_id;
        local_90 = local_170;
        local_c0 = &cf_name;
        local_88 = local_128;
        local_b8 = &cf_author;
        local_80 = &cf_WCR;
        local_b0 = &cf_html;
        local_78 = local_118;
        local_a8 = &cf_storage;
        if (local_120 == 0) {
          local_330 = *(ulong *)PTR____NSDictionary0___02578288;
        }
        else {
          local_330 = local_120;
        }
        local_70 = local_330;
        local_a0 = &cf_createdAt;
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar2,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_98 = &cf_pinned;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_68 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_60 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_90,&local_c8,7);
        _objc_retainAutoreleasedReturnValue();
        local_178 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar2 = local_170;
        FUN_016ce4fc();
        _objc_retainAutoreleasedReturnValue();
        local_180 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringByAppendingPathComponent__026cab30,&cf_index_html);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_180;
        local_188 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_stringByAppendingPathComponent__026cab30,&cf_runtime_plist);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_118;
        local_190 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118,PTR_s_writeToFile_atomically_encoding__026a33a8,local_188,1,4,local_e8)
        ;
        local_191 = (undefined1)uVar1;
        if ((uVar1 & 1) == 0) {
          local_d0 = (undefined *)0x0;
          local_108 = 1;
        }
        else {
          if (local_120 == 0) {
            local_3a8 = *(ulong *)PTR____NSDictionary0___02578288;
          }
          else {
            local_3a8 = local_120;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3a8,PTR_s_writeToFile_atomically__0269f928,local_190,1);
          uVar1 = local_d8;
          _WCRefineToDoHTMLLayoutFromCompanionJSONAtPath();
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
          if (uVar1 != 0) {
            _WCRefineToDoSeedHTMLLayoutJSONForWork(uVar1,local_170,local_1a0);
          }
          puVar2 = local_178;
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = puVar2;
          local_108 = 1;
          _objc_storeStrong(&local_1a0,0);
        }
        _objc_storeStrong(&local_190);
        _objc_storeStrong(&local_188,0);
        _objc_storeStrong(&local_180,0);
        _objc_storeStrong(&local_178,0);
        _objc_storeStrong(&local_170,0);
        _objc_storeStrong(&local_128,0);
        _objc_storeStrong(&local_120,0);
      }
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_110,0);
    }
  }
  else {
    if (local_e8 != (undefined8 *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_eNNX__W;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineToDoHTML,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_e8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_d0 = (undefined *)0x0;
    local_108 = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_d0);
  return;
}

