// FUN_00025320 @ 00025320

void FUN_00025320(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  uint local_64;
  long local_60;
  undefined *local_58 [3];
  undefined *local_40;
  byte local_32;
  byte local_31;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar2 = PTR_WCRefineAIStore_026ce048;
  local_32 = param_4;
  local_31 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  if ((local_31 & 1) == 0) {
    if ((local_32 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_chatVideoCommand_0269d368);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      local_a8 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      lVar4 = local_30;
      puVar2 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_substringFromIndex__0269d120,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      local_b0 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      lVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      if (lVar4 != 0) {
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_currentVideoProvider_0269d498);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_40;
        local_b8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_providerID_0269d480);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_apiKeyForProviderID_kind__0269d488,puVar3,&cf_video);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR_WCRefineAIStore_026ce048;
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_videoDurationSeconds_0269d4a0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_resolvedVideoDurationSeconds_for_0269d4a8,puVar2,local_b8);
        puVar2 = PTR_WCRefineHelper_026ce000;
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_c8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_ck_WubbGr_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showStickyStatusText__0269d4b0);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        uVar1 = local_28;
        lVar5 = local_b0;
        puVar6 = local_b8;
        puVar3 = local_c0;
        puVar2 = PTR_WCRefineAIClient_026ce080;
        local_f0 = PTR___NSConcreteStackBlock_02578660;
        local_e8 = 0xc2000000;
        local_e4 = 0;
        local_e0 = FUN_000294a4;
        local_d8 = &DAT_025790f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_generateVideoWithPrompt_provider_0269d4c0,lVar5,puVar6,puVar3,
                   &PTR___NSConcreteGlobalBlock_025790a0,&local_f0);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
        _objc_storeStrong(&local_d0);
        _objc_storeStrong(&local_c0,0);
        _objc_storeStrong(&local_b8,0);
      }
      local_64 = (uint)(lVar4 == 0);
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_a8,0);
      if (local_64 != 0) goto LAB_00025cdc;
    }
    local_64 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_chatImageCommand_0269d358);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar4 = local_30;
    puVar2 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_substringFromIndex__0269d120,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    lVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      local_64 = 1;
    }
    else {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_currentImageProvider_0269d478);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_40;
      local_70 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_providerID_0269d480);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_apiKeyForProviderID_kind__0269d488,puVar3,&cf_image);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar1 = local_28;
      lVar4 = local_60;
      puVar6 = local_70;
      puVar3 = local_78;
      puVar2 = PTR_WCRefineAIClient_026ce080;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_00028d44;
      local_88 = &DAT_02579050;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_generateImageWithPrompt_provider_0269d490,lVar4,puVar6,puVar3,
                 &local_a0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
      local_64 = 1;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(local_58,0);
  }
LAB_00025cdc:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

