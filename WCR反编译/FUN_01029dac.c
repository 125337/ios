// FUN_01029dac @ 01029dac

void FUN_01029dac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_340;
  cfstringStruct *local_330;
  undefined *local_318;
  undefined *local_308;
  undefined *local_298;
  cfstringStruct *local_280;
  byte local_254;
  byte local_244;
  undefined *local_238;
  undefined *local_220;
  undefined *local_208;
  ulong local_1f8;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined *local_160;
  byte local_151;
  undefined *local_150;
  undefined *local_148;
  int local_13c;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined8 local_110;
  byte local_101;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  byte local_d1;
  undefined *local_d0;
  byte local_c1;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  bool local_a1;
  undefined *local_a0;
  undefined *local_98;
  ulong local_90;
  long local_88;
  undefined *local_80;
  ulong local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  local_68 = param_1;
  _objc_storeStrong(&local_70);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_3);
  local_80 = (undefined *)0x0;
  _objc_storeStrong(&local_80,param_4);
  uVar3 = local_78;
  puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  local_88 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_1f8 = 0;
  }
  else {
    local_1f8 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_1f8;
  lVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  local_a1 = false;
  if (lVar4 == 0) {
    local_208 = (undefined *)0x0;
  }
  else {
    local_208 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_70,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_208;
  }
  local_a1 = lVar4 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_208;
  if ((local_a1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  puVar2 = local_98;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)puVar2 & 1) == 0) {
    local_220 = (undefined *)0x0;
  }
  else {
    local_220 = local_98;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_220;
  (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
  _objc_retainAutoreleasedReturnValue();
  local_c1 = 0;
  local_238 = local_220;
  if (local_220 == (undefined *)0x0) {
    local_238 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_status);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = local_238;
  }
  local_c1 = local_220 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = local_238;
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  (*(code *)PTR__objc_release_02578630)(local_220);
  puVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_description_026ca5f8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_244 = 0;
  if (local_b8 != (undefined *)0x0) {
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_0);
    local_254 = 1;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_200);
      local_254 = 1;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_ok);
        local_254 = 1;
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_isEqualToString__0269ccc8,&cf_success);
          local_254 = (byte)puVar2;
        }
      }
    }
    local_244 = local_254 ^ 1;
  }
  local_d1 = local_244 & 1;
  if ((((local_80 == (undefined *)0x0) &&
       (uVar3 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_statusCode_026a1578),
       199 < (long)uVar3)) &&
      (uVar3 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_statusCode_026a1578),
      (long)uVar3 < 300)) && ((local_98 != (undefined *)0x0 && ((local_d1 & 1) == 0)))) {
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_151 = 0;
    local_308 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_result);
      _objc_retainAutoreleasedReturnValue();
      local_151 = 1;
      local_318 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        local_318 = local_98;
      }
      local_308 = local_318;
      local_150 = puVar5;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = local_308;
    if ((local_151 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
    local_160 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setPlatform__026adde8,*(undefined8 *)(param_1 + 0x38));
    local_330 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_330 == (cfstringStruct *)0x0) {
      local_330 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setSourceURL__026addf0,local_330);
    local_340 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_340 == (cfstringStruct *)0x0) {
      local_340 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setResolvedURL__026addf8,local_340);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_fillCustomAPIResult_fromPayload__026ade00,
               local_160,local_148);
    puVar7 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_hasMedia_026ada58);
    puVar5 = PTR__OBJC_CLASS___NSError_026ce470;
    puVar2 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar7 & 1) == 0) {
      local_60 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_58 = &cf__INgcS_gVSSZSO;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
                 0xffffffffffffffea);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_198 = PTR___NSConcreteStackBlock_02578660;
      local_190 = 0xc2000000;
      local_18c = 0;
      local_188 = FUN_0102aba0;
      local_180 = &DAT_0257ca68;
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_168;
      local_170 = uVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = puVar5;
      _dispatch_async(puVar2,&local_198);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_13c = 1;
      _objc_storeStrong(&local_178);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_168,0);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = PTR___NSConcreteStackBlock_02578660;
      local_1c0 = 0xc2000000;
      local_1bc = 0;
      local_1b8 = FUN_0102abf4;
      local_1b0 = &DAT_0257ca68;
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_160;
      local_1a0 = uVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8 = puVar5;
      _dispatch_async(puVar2,&local_1c8);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_1a8);
      _objc_storeStrong(&local_1a0,0);
      local_13c = 0;
    }
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_148,0);
  }
  else {
    puVar2 = local_b0;
    pcVar8 = *(cfstringStruct **)(param_1 + 0x30);
    local_40 = &cf_msg;
    local_38 = &cf_message;
    local_30 = &cf_error;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar8,PTR_s_customStringFromDictionary_keys__026adda0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_280 = pcVar8;
    if (pcVar8 == (cfstringStruct *)0x0) {
      local_280 = &cf__INgcS1Y_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_280;
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_298 = PTR__OBJC_CLASS___NSError_026ce470;
    local_f1 = 0;
    local_101 = 0;
    bVar1 = local_80 == (undefined *)0x0;
    if (bVar1) {
      local_50 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_48 = local_e0;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_50,1);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_298,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
                 0xffffffffffffffeb);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_298;
    }
    else {
      local_298 = local_80;
    }
    local_101 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_298;
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_138 = PTR___NSConcreteStackBlock_02578660;
    local_130 = 0xc2000000;
    local_12c = 0;
    local_128 = FUN_0102ab4c;
    local_120 = &DAT_0257ca68;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_e8;
    local_110 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = puVar5;
    _dispatch_async(puVar2,&local_138);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_13c = 1;
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  if (local_13c == 0) {
    local_13c = 0;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

