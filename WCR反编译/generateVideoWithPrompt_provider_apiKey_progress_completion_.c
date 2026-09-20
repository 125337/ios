// generateVideoWithPrompt:provider:apiKey:progress:completion: @ 009d0368

/* Function Stack Size: 0x38 bytes */

ID WCRefineAIClient::generateVideoWithPrompt_provider_apiKey_progress_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,undefined4 param_7,
             ID param_8,undefined4 param_9)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint local_314;
  cfstringStruct *local_2a0;
  cfstringStruct *local_290;
  cfstringStruct *local_270;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  cfstringStruct *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  byte local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined *local_130;
  undefined4 local_124;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined8 local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  byte local_e1;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  SEL local_a8;
  ID local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  local_a8 = param_2;
  local_a0 = param_1;
  _objc_storeStrong(&local_b0,param_3);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_4);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_5);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_6);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_7);
  pcVar6 = local_b8;
  pcVar5 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_videoPath_026aae10);
  _objc_retainAutoreleasedReturnValue();
  FUN_009c9ac8();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar6;
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  pcVar6 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_supportsVideo_026aad20);
  local_e1 = 0;
  local_f1 = 0;
  bVar4 = true;
  if ((((ulong)pcVar6 & 1) != 0) && (bVar4 = true, local_d8 != (cfstringStruct *)0x0)) {
    pcVar6 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_videoModel_026aad78);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar4 = true;
    if (pcVar6 != (cfstringStruct *)0x0) {
      pcVar6 = local_b8;
      FUN_009c0574(local_b8,local_c0);
      bVar4 = true;
      if (((ulong)pcVar6 & 1) != 0) {
        pcVar6 = local_b0;
        FUN_009af3fc();
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        local_f0 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar4 = pcVar6 == (cfstringStruct *)0x0;
      }
    }
  }
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  puVar9 = PTR_WCRefineAIStore_026ce048;
  puVar7 = PTR___dispatch_main_q_02578680;
  if (bVar4) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_d0;
    local_120 = PTR___NSConcreteStackBlock_02578660;
    local_118 = 0xc2000000;
    local_114 = 0;
    local_110 = FUN_009d1418;
    local_108 = &DAT_025814c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = uVar2;
    _dispatch_async(puVar7,&local_120);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_98 = (undefined *)0x0;
    local_124 = 1;
    _objc_storeStrong(&local_100,0);
  }
  else {
    puVar7 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar9,PTR_s_resolvedVideoDurationSeconds_for_0269d4a8,puVar8,local_b8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_130 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = local_b8;
    local_138 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_videoModel_026aad78);
    _objc_retainAutoreleasedReturnValue();
    local_270 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_270 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,local_270,&cf_model);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    local_140 = 0;
    local_148 = (cfstringStruct *)0x0;
    pcVar5 = local_b8;
    FUN_009d1488();
    uVar2 = local_c0;
    pcVar6 = local_d8;
    if (((ulong)pcVar5 & 1) == 0) {
      pcVar6 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_providerID_0269d480);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar6 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_providerID_0269d480);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        if (((ulong)pcVar5 & 1) == 0) {
          pcVar6 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_providerID_0269d480);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_151 = 0;
          local_314 = 1;
          if (((ulong)pcVar5 & 1) == 0) {
            pcVar5 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_providerID_0269d480);
            _objc_retainAutoreleasedReturnValue();
            local_151 = 1;
            local_150 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_314 = (uint)pcVar5;
          }
          if ((local_151 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_150);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          if ((local_314 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,&cf_prompt);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_1280x720,
                       &cf_image_size);
            puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                       local_130);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,&cf_duration);
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,&cf_prompt);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_16_9,
                       &cf_aspect_ratio);
            puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                       local_130);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,&cf_duration);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_720p,&cf_resolution
                      );
          }
        }
        else {
          local_90 = &cf_type;
          local_80 = &cf_text;
          local_88 = &cf_text;
          local_78 = local_b0;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_80,&local_90,2);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_70 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_70,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_content);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_16_9,&cf_ratio);
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_130
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,&cf_duration);
          (*(code *)PTR__objc_release_02578630)(puVar7);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,&cf_prompt);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_16_9,&cf_aspect_ratio);
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lds);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,&cf_duration);
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      local_160 = local_140;
      pcVar5 = local_d8;
      FUN_009c9de0(local_d8,local_c0,local_138,&local_160);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_140,local_160);
      pcVar6 = local_148;
      local_148 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
    }
    else {
      local_68 = &cf_model;
      pcVar5 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_videoModel_026aad78);
      _objc_retainAutoreleasedReturnValue();
      local_290 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_290 = &::cf___;
      }
      local_48 = local_290;
      local_60 = &cf_prompt;
      if (local_b0 == (cfstringStruct *)0x0) {
        local_2a0 = &::cf___;
      }
      else {
        local_2a0 = local_b0;
      }
      local_40 = local_2a0;
      local_58 = &cf_seconds;
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
      _objc_retainAutoreleasedReturnValue();
      local_50 = &cf_size;
      local_30 = &cf_1280x720;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_38 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
      _objc_retainAutoreleasedReturnValue();
      FUN_009d1524(pcVar6,uVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_148;
      local_148 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    puVar7 = PTR___dispatch_main_q_02578680;
    if (local_148 == (cfstringStruct *)0x0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_d0;
      local_190 = PTR___NSConcreteStackBlock_02578660;
      local_188 = 0xc2000000;
      local_184 = 0;
      local_180 = FUN_009d197c;
      local_178 = &DAT_0257ca68;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_140;
      local_168 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = uVar2;
      _dispatch_async(puVar7,&local_190);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      local_98 = (undefined *)0x0;
      local_124 = 1;
      _objc_storeStrong(&local_170);
      _objc_storeStrong(&local_168,0);
    }
    else {
      puVar7 = PTR_WCRefineAIRequest_026ceae8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIRequest_026ceae8,PTR_s_new_0269d288);
      puVar9 = PTR__OBJC_CLASS___NSDate_026cdf88;
      local_198 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setStartedAt__026aaf58);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_198,PTR_s_setLastProgressAttempt__026aaf60,0xfffffffffffffffd);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_198,PTR_s_setCurrentProgressState__026aaf68,&cf_submitted);
      FUN_009d1a44(local_198,local_c8);
      puVar9 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_148;
      puVar7 = local_198;
      local_1e0 = PTR___NSConcreteStackBlock_02578660;
      local_1d8 = 0xc2000000;
      local_1d4 = 0;
      local_1d0 = FUN_009d1ea0;
      local_1c8 = &DAT_02581588;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_d0;
      local_1c0 = puVar7;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_c8;
      local_1a8 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar5 = local_b8;
      local_1a0 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_c0;
      local_1b8 = pcVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = uVar2;
      puVar7 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar9,PTR_s_dataTaskWithRequest_completionHa_026a5f60,pcVar6,&local_1e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setTask__026aaf18);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      puVar7 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_task_026a1510);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar7 = local_198;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = puVar7;
      local_124 = 1;
      _objc_storeStrong(&local_1b0);
      _objc_storeStrong(&local_1b8,0);
      _objc_storeStrong(&local_1a0,0);
      _objc_storeStrong(&local_1a8,0);
      _objc_storeStrong(&local_1c0,0);
      _objc_storeStrong(&local_198,0);
    }
    _objc_storeStrong(&local_148);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_138,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_98;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

