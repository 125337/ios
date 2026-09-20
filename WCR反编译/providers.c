// providers @ 009b28bc

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIStore::providers(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *local_310;
  undefined *local_300;
  undefined *local_2f0;
  undefined *local_2b8;
  undefined *local_2a8;
  undefined *local_298;
  undefined *local_288;
  undefined *local_278;
  undefined *local_268;
  undefined *local_258;
  undefined *local_248;
  undefined *local_220;
  void *local_1f0;
  void *local_1e8;
  undefined *local_1b0;
  undefined *local_1a0;
  undefined *local_190;
  undefined *local_180;
  undefined *local_170;
  undefined *local_160;
  undefined *local_150;
  undefined *local_140;
  undefined *local_138;
  bool local_129;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  pvVar3 = _memset(auStack_110,0,0x40);
  FUN_009b37b8();
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = pvVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1e8 != (void *)0x0) {
    lVar5 = *local_100;
    local_1f0 = (void *)0x0;
    do {
      do {
        if (*local_100 - lVar5 != 0) {
          _objc_enumerationMutation(*local_100 - lVar5,pvVar3);
        }
        puVar6 = *(undefined **)(local_108 + (long)local_1f0 * 8);
        local_d0 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerID);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_c0;
        local_118 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectForKeyedSubscript__0269d098,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar6);
        local_129 = false;
        bVar1 = ((ulong)puVar4 & 1) == 0;
        if (bVar1) {
          local_220 = *(undefined **)PTR____NSDictionary0___02578288;
        }
        else {
          local_220 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_objectForKeyedSubscript__0269d098,local_118);
          _objc_retainAutoreleasedReturnValue();
          local_128 = local_220;
        }
        local_129 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = local_220;
        if ((local_129 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_128);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR_WCRefineAIProvider_026cead8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIProvider_026cead8,PTR_s_new_0269d288);
        local_138 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setProviderID__026aac88,local_118);
        puVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setName__0269e0c8);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseURL);
        _objc_retainAutoreleasedReturnValue();
        local_248 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_140 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseURL);
          _objc_retainAutoreleasedReturnValue();
          local_248 = local_140;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setBaseURL__026aac90,local_248);
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_140);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatPath);
        _objc_retainAutoreleasedReturnValue();
        local_258 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_150 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatPath);
          _objc_retainAutoreleasedReturnValue();
          local_258 = local_150;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setChatPath__026aac98,local_258);
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_150);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagePath);
        _objc_retainAutoreleasedReturnValue();
        local_268 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_160 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagePath);
          _objc_retainAutoreleasedReturnValue();
          local_268 = local_160;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setImagePath__026aaca0,local_268);
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_160);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoPath);
        _objc_retainAutoreleasedReturnValue();
        local_278 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_170 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoPath);
          _objc_retainAutoreleasedReturnValue();
          local_278 = local_170;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setVideoPath__026a54d8,local_278);
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_170);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoStatusPath);
        _objc_retainAutoreleasedReturnValue();
        local_288 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_180 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoStatusPath);
          _objc_retainAutoreleasedReturnValue();
          local_288 = local_180;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_setVideoStatusPath__026aaca8,local_288);
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_180);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatModel);
        _objc_retainAutoreleasedReturnValue();
        local_298 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_190 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatModel);
          _objc_retainAutoreleasedReturnValue();
          local_298 = local_190;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setChatModel__026aacb0,local_298);
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_190);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_imageModel);
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_1a0 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_imageModel);
          _objc_retainAutoreleasedReturnValue();
          local_2a8 = local_1a0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setImageModel__026aacb8,local_2a8);
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_1a0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoModel);
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_1b0 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoModel);
          _objc_retainAutoreleasedReturnValue();
          local_2b8 = local_1b0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setVideoModel__026aacc0,local_2b8);
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_1b0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_supportsChat);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setSupportsChat__026aacc8,puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_supportsImage);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setSupportsImage__026aacd0,puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_supportsVideo);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setSupportsVideo__026aacd8,puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatModelPresets);
        _objc_retainAutoreleasedReturnValue();
        local_2f0 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_2f0 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_setChatModelPresets__026aace0,local_2f0);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_imageModelPresets);
        _objc_retainAutoreleasedReturnValue();
        local_300 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_300 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_setImageModelPresets__026aace8,local_300);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoModelPresets);
        _objc_retainAutoreleasedReturnValue();
        local_310 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_310 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_setVideoModelPresets__026aacf0,local_310);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_138);
        _objc_storeStrong(&local_138);
        _objc_storeStrong(&local_120,0);
        _objc_storeStrong(&local_118,0);
        local_1f0 = (void *)((long)local_1f0 + 1);
      } while (local_1f0 < local_1e8);
      local_1e8 = pvVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_1f0 = (void *)0x0;
    } while (local_1e8 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar3);
  puVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

