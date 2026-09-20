// generateTextWithInstruction:source:systemPrompt:completion: @ 009ca124

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x30 bytes */

ID WCRefineAIClient::generateTextWithInstruction_source_systemPrompt_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,undefined4 param_7)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  cfstringStruct *local_198;
  cfstringStruct *local_180;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  long local_108;
  undefined *local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined4 local_e0;
  byte local_d9;
  cfstringStruct *local_d8;
  long local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  long local_b0;
  cfstringStruct *local_a8;
  long local_a0 [3];
  ID local_88;
  ID local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0[1] = 0;
  local_a0[2] = param_2;
  local_88 = param_1;
  _objc_storeStrong(local_a0 + 1,param_3);
  local_a0[0] = 0;
  _objc_storeStrong(local_a0,param_4);
  local_a8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a8,param_5);
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_6);
  pcVar2 = (cfstringStruct *)PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_currentChatProvider_0269d548);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_b8;
  local_c0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_apiKeyForProviderID_kind__0269d488,pcVar2,&cf_chat);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  lVar4 = local_a0[0];
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_c0;
  local_d0 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_supportsChat_026aad10);
  local_d9 = 0;
  bVar1 = true;
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_chatModel_026aadc8);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = true;
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar3 = local_c0;
      FUN_009c0574(local_c0,local_c8);
      bVar1 = true;
      if (((ulong)pcVar3 & 1) != 0) {
        lVar4 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
        bVar1 = lVar4 == 0;
      }
    }
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  lVar4 = local_b0;
  if (bVar1) {
    if (local_b0 != 0) {
      pcVar3 = &cf_HQ_W_jW_N_Mn_cST__jW;
      FUN_009c701c(&cf_HQ_W_jW_N_Mn_cST__jW,0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,0);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    local_80 = 0;
    local_e0 = 1;
  }
  else {
    pcVar3 = local_a8;
    FUN_009af3fc();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f1 = 0;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_180 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_systemPrompt_0269d0c8);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_180;
    }
    else {
      local_180 = local_a8;
    }
    local_f1 = pcVar2 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_180;
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_58 = &cf_role;
    local_48 = &cf_system;
    local_50 = &cf_content;
    if (local_e8 == (cfstringStruct *)0x0) {
      local_198 = &::cf___;
    }
    else {
      local_198 = local_e8;
    }
    local_40 = local_198;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_58,2);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_role;
    local_68 = &cf_user;
    local_70 = &cf_content;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_60 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_68,&local_78);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    IVar9 = local_88;
    lVar4 = local_b0;
    pcVar2 = local_c0;
    pcVar3 = local_c8;
    puVar5 = local_100;
    local_128 = PTR___NSConcreteStackBlock_02578660;
    local_120 = 0xc2000000;
    local_11c = 0;
    local_118 = FUN_009ca81c;
    local_110 = &DAT_025814f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar9,PTR_s_sendMessages_provider_apiKey_chu_0269d550,puVar5,pcVar2,pcVar3,0,
               &local_128);
    _objc_retainAutoreleasedReturnValue();
    local_80 = IVar9;
    _objc_storeStrong(&local_108,0);
    local_e0 = 1;
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(local_a0,0);
  _objc_storeStrong(local_a0 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_80;
}

