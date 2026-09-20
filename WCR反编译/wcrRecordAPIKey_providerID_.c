// wcrRecordAPIKey:providerID: @ 009c3c60

/* Function Stack Size: 0x20 bytes */

void WCRefineAIStore::wcrRecordAPIKey_providerID_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  undefined *puVar12;
  cfstringStruct *local_248;
  cfstringStruct *local_238;
  cfstringStruct *local_228;
  cfstringStruct *local_218;
  cfstringStruct *local_208;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d8;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined8 local_140;
  long local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined4 local_114;
  cfstringStruct *local_110;
  undefined8 local_108;
  long local_100;
  SEL local_f8;
  cfstringStruct *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  long local_70;
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
  local_100 = 0;
  local_f8 = param_2;
  local_f0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_100,param_3);
  local_108 = 0;
  _objc_storeStrong(&local_108,param_4);
  pcVar2 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_providerForID__026aad08,local_108);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_100;
  local_110 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  if ((lVar3 == 0) || (local_110 == (cfstringStruct *)0x0)) {
    local_114 = 1;
  }
  else {
    pcVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_apiKeyHistoryRecords_026aae20);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_120 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    uVar1 = local_108;
    pcVar2 = local_120;
    local_160 = PTR___NSConcreteGlobalBlock_02578658;
    local_158 = 0xd0800000;
    local_154 = 0;
    local_150 = FUN_009c43ac;
    local_148 = &DAT_02581488;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_100;
    local_140 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_110;
    local_138 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_160);
    _objc_retainAutoreleasedReturnValue();
    local_128 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_removeObjectsAtIndexes__026a2c98,pcVar2);
    pcVar2 = local_120;
    local_c8 = &cf_providerID;
    local_78 = local_108;
    local_c0 = &cf_apiKey;
    local_70 = local_100;
    local_b8 = &cf_baseURL;
    pcVar4 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_baseURL_026aade8);
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_1d8 = &::cf___;
    }
    local_68 = local_1d8;
    local_b0 = &cf_chatPath;
    pcVar5 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_chatPath_026aae00);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_1e8 = &::cf___;
    }
    local_60 = local_1e8;
    local_a8 = &cf_imagePath;
    pcVar6 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_imagePath_026aae08);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_1f8 = &::cf___;
    }
    local_58 = local_1f8;
    local_a0 = &cf_videoPath;
    pcVar7 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_videoPath_026aae10);
    _objc_retainAutoreleasedReturnValue();
    local_208 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_208 = &::cf___;
    }
    local_50 = local_208;
    local_98 = &cf_videoStatusPath;
    pcVar8 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_videoStatusPath_026aae18);
    _objc_retainAutoreleasedReturnValue();
    local_218 = pcVar8;
    if (pcVar8 == (cfstringStruct *)0x0) {
      local_218 = &::cf___;
    }
    local_48 = local_218;
    local_90 = &cf_chatModel;
    pcVar9 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_chatModel_026aadc8);
    _objc_retainAutoreleasedReturnValue();
    local_228 = pcVar9;
    if (pcVar9 == (cfstringStruct *)0x0) {
      local_228 = &::cf___;
    }
    local_40 = local_228;
    local_88 = &cf_imageModel;
    pcVar10 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_imageModel_026aadd0);
    _objc_retainAutoreleasedReturnValue();
    local_238 = pcVar10;
    if (pcVar10 == (cfstringStruct *)0x0) {
      local_238 = &::cf___;
    }
    local_38 = local_238;
    local_80 = &cf_videoModel;
    pcVar11 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_videoModel_026aad78);
    _objc_retainAutoreleasedReturnValue();
    local_248 = pcVar11;
    if (pcVar11 == (cfstringStruct *)0x0) {
      local_248 = &::cf___;
    }
    local_30 = local_248;
    puVar12 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_c8,10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_insertObject_atIndex__0269eac0,puVar12,0);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(pcVar11);
    (*(code *)PTR__objc_release_02578630)(pcVar10);
    (*(code *)PTR__objc_release_02578630)(pcVar9);
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
    pcVar2 = local_120;
    if ((cfstringStruct *)0x14 < pcVar4) {
      pcVar4 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
      local_e8 = (undefined1 *)((long)&pcVar4[-1].field1_0x8 + 4);
      local_e0 = 0x14;
      local_d8 = 0x14;
      local_d0 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_removeObjectsInRange__0269dad0,0x14,local_e8);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_wcrWriteAPIKeyHistoryRecords__026aae28,local_120);
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_120,0);
    local_114 = 0;
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

