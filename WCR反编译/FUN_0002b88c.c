// FUN_0002b88c @ 0002b88c

void FUN_0002b88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *local_3d0;
  cfstringStruct *local_398;
  cfstringStruct *local_370;
  cfstringStruct *local_340;
  cfstringStruct *local_318;
  undefined *local_2f8;
  undefined *local_2b8;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  cfstringStruct *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  byte local_179;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  byte local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  byte local_139;
  cfstringStruct *local_138;
  byte local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  byte local_111;
  undefined *local_110;
  byte local_101;
  undefined *local_100;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_70,param_1);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_2);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_3);
  local_88 = (undefined *)0x0;
  _objc_storeStrong(&local_88,param_4);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_5);
  puVar6 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_WCRefineAIStore_026ce048;
  local_98 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_chatReplyCountSpec_0269d518);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_randomReplyCountFromSpec__0269d520);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar6 = local_98;
  local_b0 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_chatReplyMaxChars_0269ceb0);
  puVar7 = PTR_WCRefineAIStore_026ce048;
  puVar8 = local_88;
  local_b8 = puVar6;
  FUN_000114a8(local_88,local_98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_promptByApplyingMaxChars_toPromp_0269ceb8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar7;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar7 = local_88;
  FUN_00025d4c(local_88,local_98);
  local_d9 = 0;
  local_e9 = 0;
  puVar6 = local_88;
  local_c8 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionPrefix);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  puVar8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
  if (((ulong)puVar8 & 1) == 0) {
    local_2b8 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_chatAgentPrefix_0269d3a0);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = local_2b8;
  }
  else {
    local_2b8 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionPrefix);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = local_2b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_2b8;
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_101 = 0;
  local_111 = 0;
  puVar7 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionSuffix);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  puVar8 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar6);
  if (((ulong)puVar8 & 1) == 0) {
    local_2f8 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_chatAgentSuffix_0269d3a8);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = local_2f8;
  }
  else {
    local_2f8 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionSuffix);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = local_2f8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_2f8;
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  (*(code *)PTR__objc_release_02578630)(puVar7);
  local_129 = 0;
  local_139 = 0;
  local_318 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((long)local_b0 < 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_SQ);
    _objc_retainAutoreleasedReturnValue();
    local_139 = 1;
    local_138 = local_318;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Q);
    _objc_retainAutoreleasedReturnValue();
    local_129 = 1;
    local_128 = local_318;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_120 = local_318;
  if ((local_139 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  if ((local_129 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  local_151 = 0;
  puVar7 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (puVar7 == (undefined *)0x0) {
    local_340 = local_120;
  }
  else {
    local_340 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
    _objc_retainAutoreleasedReturnValue();
    local_151 = 1;
    local_150 = local_340;
  }
  pcVar9 = local_340;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = local_340;
  if ((local_151 & 1) != 0) {
    pcVar9 = local_150;
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_0002ceac();
  _objc_retainAutoreleasedReturnValue();
  local_168 = (cfstringStruct *)0x0;
  local_160 = pcVar9;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(pcVar9);
  pcVar10 = local_160;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_objectForKeyedSubscript__0269d098,local_78);
  _objc_retainAutoreleasedReturnValue();
  local_179 = 0;
  local_370 = pcVar10;
  if (pcVar10 == (cfstringStruct *)0x0) {
    local_370 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_178 = local_370;
  }
  local_179 = pcVar10 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = local_370;
  if ((local_179 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_178);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar10);
  pcVar10 = local_170;
  local_48 = &cf_role;
  local_38 = &cf_user;
  local_40 = &cf_content;
  if (local_70 == (cfstringStruct *)0x0) {
    local_398 = &cf___;
  }
  else {
    local_398 = local_70;
  }
  local_30 = local_398;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  while (pcVar10 = local_170, (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0),
        (cfstringStruct *)((long)&MACH_HEADER.cpusubtype + 3) <= pcVar10) {
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_removeObjectAtIndex__0269d530,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_170,local_78);
  pcVar11 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_copy_0269d150);
  pcVar10 = local_168;
  local_168 = pcVar11;
  (*(code *)PTR__objc_release_02578630)(pcVar10);
  _objc_storeStrong(&local_170,0);
  _objc_sync_exit(pcVar9);
  (*(code *)PTR__objc_release_02578630)(pcVar9);
  local_188 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_68 = &cf_role;
  local_58 = &cf_system;
  local_60 = &cf_content;
  if (local_148 == (cfstringStruct *)0x0) {
    local_3d0 = &cf___;
  }
  else {
    local_3d0 = local_148;
  }
  local_50 = local_3d0;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_58,&local_68,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_arrayWithObject__0269d538);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_addObjectsFromArray__0269d540,local_168);
  puVar6 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_currentChatProvider_0269d548);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = local_98;
  local_190 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_apiKeyForProviderID_kind__0269d488,puVar6,&cf_chat);
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar7;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  uVar4 = local_90;
  puVar1 = local_188;
  puVar8 = local_190;
  puVar6 = local_198;
  puVar7 = PTR_WCRefineAIClient_026ce080;
  local_200 = PTR___NSConcreteStackBlock_02578660;
  local_1f8 = 0xc2000000;
  local_1f4 = 0;
  local_1f0 = FUN_0002cf20;
  local_1e8 = &DAT_02579140;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar9 = local_160;
  local_1b8 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = local_78;
  local_1e0 = pcVar9;
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = local_80;
  local_1d8 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_d0;
  local_1d0 = uVar4;
  local_1b0 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_f8;
  local_1c8 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c0 = puVar2;
  local_1a8 = local_b8;
  local_1a0 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_sendMessages_provider_apiKey_chu_0269d550,puVar1,puVar8,puVar6,0,
             &local_200);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar7);
  _objc_storeStrong(&local_1c0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

