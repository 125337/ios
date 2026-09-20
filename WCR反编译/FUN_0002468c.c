// FUN_0002468c @ 0002468c

void FUN_0002468c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_1e0;
  undefined *local_1a0;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  byte local_b9;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  long local_58;
  undefined4 local_50;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  puVar3 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isChatProviderConfigured_0269ce90);
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_W_jW_N__b__jWMn_);
    local_50 = 1;
  }
  else {
    lVar4 = local_28;
    FUN_00025118(local_28,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                 &cf_HQ__ueW_b_WSNTRNmrvQ_);
      local_50 = 1;
    }
    else {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_effectiveSessionOptionsForID__0269cea0,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar3;
      FUN_00025d4c(puVar3,local_40);
      puVar5 = local_40;
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_chatReplyMaxChars_0269ceb0);
      local_81 = 0;
      local_91 = 0;
      puVar3 = local_60;
      local_70 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionPrefix);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        local_1a0 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_chatAgentPrefix_0269d3a0);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_1a0;
      }
      else {
        local_1a0 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionPrefix);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_1a0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_1a0;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_a9 = 0;
      local_b9 = 0;
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionSuffix);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        local_1e0 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_chatAgentSuffix_0269d3a8);
        _objc_retainAutoreleasedReturnValue();
        local_b9 = 1;
        local_b8 = local_1e0;
      }
      else {
        local_1e0 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionSuffix);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = local_1e0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_1e0;
      if ((local_b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar7 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_Wmr_)
      ;
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_58;
      puVar6 = local_70;
      puVar5 = PTR_WCRefineAIClient_026ce080;
      puVar3 = PTR_WCRefineAIStore_026ce048;
      puVar8 = local_60;
      local_c8 = puVar7;
      FUN_000114a8(local_60,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_promptByApplyingMaxChars_toPromp_0269ceb8,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_c8;
      local_120 = PTR___NSConcreteStackBlock_02578660;
      local_118 = 0xc2000000;
      local_114 = 0;
      local_110 = FUN_00026094;
      local_108 = &DAT_02578fd0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_30;
      local_100 = puVar6;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_38;
      local_f8 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      puVar7 = local_78;
      local_f0 = uVar1;
      local_d8 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      puVar6 = local_a0;
      local_e8 = puVar7;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = puVar6;
      local_d0 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_generateTextWithInstruction_sour_0269d0d0,&cf_mrNbeW_OcSavcQmr_g,lVar4
                 ,puVar3,&local_120);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_60,0);
      local_50 = 0;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

