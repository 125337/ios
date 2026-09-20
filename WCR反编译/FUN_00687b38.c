// FUN_00687b38 @ 00687b38

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00687b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *local_388;
  undefined *local_320;
  ulong local_278;
  ulong local_270;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  long local_1a8;
  long local_1a0;
  byte local_191;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  byte local_171;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined *local_110;
  undefined *local_108;
  undefined4 local_100;
  byte local_f9;
  long *local_f8;
  long *local_f0 [3];
  long *local_d8;
  long local_d0;
  undefined *local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = (undefined *)0x0;
  _objc_storeStrong(&local_c8,param_4);
  plVar4 = &local_d0;
  local_d0 = 0;
  _objc_storeStrong(plVar4,param_5);
  FUN_00684880();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = plVar4;
  (*(code *)PTR__objc_msgSend_02578628)(plVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_sid);
  _objc_retainAutoreleasedReturnValue();
  plVar5 = local_d8;
  local_f0[0] = plVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_v);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = local_b8;
  local_f8 = plVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_caseInsensitiveCompare__0269db48,&cf_GET);
  local_f9 = lVar10 == 0;
  lVar10 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (((lVar10 == 0) ||
      (plVar5 = local_f0[0],
      (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_length_0269cca0),
      plVar5 == (long *)0x0)) || (local_d0 == 0)) {
    if (local_d0 != 0) {
      (**(code **)(local_d0 + 0x10))(local_d0,0,0);
    }
    local_100 = 1;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_110 = (undefined *)0x0;
    local_108 = puVar6;
    if ((local_f9 & 1) == 0) {
      plVar5 = local_f0[0];
      FUN_0068bb64();
      _objc_retainAutoreleasedReturnValue();
      plVar4 = local_f8;
      FUN_0068bb64();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_appendFormat__0269d148,&cf_sid____v___);
      (*(code *)PTR__objc_release_02578630)(plVar4);
      (*(code *)PTR__objc_release_02578630)(plVar5);
      puVar6 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
      local_171 = 0;
      local_320 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        local_320 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_170 = local_320;
      }
      local_171 = puVar6 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = local_320;
      if ((local_171 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_170);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_setObject_forKeyedSubscript__0269d248,local_f0[0],&cf_sid);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_setObject_forKeyedSubscript__0269d248,local_f8,&cf_v);
      puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_dataWithJSONObject_options_error_026a64a8,local_168,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_110;
      local_110 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_168,0);
    }
    else {
      plVar5 = local_f8;
      FUN_0068bb64();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_appendFormat__0269d148,&cf_v___);
      (*(code *)PTR__objc_release_02578630)(plVar5);
      _memset(auStack_158,0,0x40);
      uVar3 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_270 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
      if (local_270 != 0) {
        lVar10 = *local_148;
        local_278 = 0;
        do {
          do {
            if (*local_148 - lVar10 != 0) {
              _objc_enumerationMutation(*local_148 - lVar10,uVar3);
            }
            local_118 = *(undefined8 *)(local_150 + local_278 * 8);
            puVar8 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_objectForKeyedSubscript__0269d098,local_118);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_108;
            local_160 = puVar8;
            if (puVar8 == (undefined *)0x0) {
              local_100 = 5;
            }
            else {
              FUN_0068bc9c();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar8;
              FUN_0068bb64();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_appendFormat__0269d148,&cf_______);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar8);
              local_100 = 0;
            }
            _objc_storeStrong(&local_160,0);
            local_278 = local_278 + 1;
          } while (local_278 < local_270);
          local_270 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_278 = 0;
        } while (local_270 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar6 = local_108;
      plVar5 = local_f0[0];
      FUN_0068bb64();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_appendFormat__0269d148,&cf__sid___);
      (*(code *)PTR__objc_release_02578630)(plVar5);
    }
    puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_https____________);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    puVar7 = PTR__OBJC_CLASS___NSURL_026ce328;
    local_180 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,puVar8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_requestWithURL__026a16e0);
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    if ((local_188 == (undefined *)0x0) ||
       (((local_f9 & 1) == 0 &&
        (puVar6 = local_110, (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0),
        puVar6 == (undefined *)0x0)))) {
      (**(code **)(local_d0 + 0x10))(local_d0,0,0);
      local_100 = 1;
    }
    else {
      pcVar2 = &cf_GET;
      if ((local_f9 & 1) == 0) {
        pcVar2 = &cf_POST;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setHTTPMethod__026a64b0,pcVar2);
      puVar6 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
      if (puVar6 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setHTTPBody__026a64b8,local_110);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
                 &cf_content_type);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_wx9291fe7dadf5a574,
                 &cf_X_Appid);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_mmpaysjtaccountmp,
                 &cf_X_Module_Name);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_setValue_forHTTPHeaderField__026a16e8,
                 &cf_pages_link_qr_code_index_index,&cf_X_Page);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf__net___request);
      _objc_retainAutoreleasedReturnValue();
      local_191 = 0;
      bVar1 = (local_f9 & 1) == 0;
      if (bVar1) {
        local_388 = local_110;
        FUN_0068bef8();
        _objc_retainAutoreleasedReturnValue();
        local_190 = local_388;
      }
      else {
        local_388 = local_180;
      }
      local_191 = bVar1;
      FUN_0068be8c(puVar6,local_388);
      if ((local_191 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_190);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar8 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_188;
      local_1c8 = PTR___NSConcreteStackBlock_02578660;
      local_1c0 = 0xc2000000;
      local_1bc = 0;
      local_1b8 = FUN_0068c11c;
      local_1b0 = &DAT_0257e9c8;
      lVar10 = local_b0;
      (*(code *)PTR__objc_retain_02578638)();
      lVar9 = local_d0;
      local_1a8 = lVar10;
      (*(code *)PTR__objc_retain_02578638)();
      puVar7 = puVar8;
      local_1a0 = lVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar6,&local_1c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_storeStrong(&local_1a0);
      _objc_storeStrong(&local_1a8,0);
      local_100 = 0;
    }
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(local_f0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

