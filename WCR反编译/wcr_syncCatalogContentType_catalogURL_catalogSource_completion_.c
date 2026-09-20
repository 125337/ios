// wcr_syncCatalogContentType:catalogURL:catalogSource:completion: @ 015967e8

/* Function Stack Size: 0x30 bytes */

void WCRefineVoiceCloneHelper::wcr_syncCatalogContentType_catalogURL_catalogSource_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  bool bVar1;
  dispatch_group_t pdVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  undefined *puVar10;
  long lVar11;
  dispatch_queue_t pdVar12;
  cfstringStruct *local_320;
  undefined *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  code *local_2b0;
  undefined *local_2a8;
  undefined **local_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  ID local_278;
  undefined *local_270;
  undefined4 local_268;
  undefined4 local_264;
  code *local_260;
  undefined *local_258;
  dispatch_group_t local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  code *local_218;
  undefined *local_210;
  dispatch_group_t local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  dispatch_group_t local_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  code *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  code *local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  undefined8 local_108;
  cfstringStruct *local_100;
  undefined **local_f8;
  ID local_f0;
  byte local_e8;
  undefined **local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  uint local_c4;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  cfstringStruct *local_70;
  SEL local_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = (cfstringStruct *)0x0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_4);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_5);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_6);
  uVar4 = local_88;
  ppuVar6 = &local_b8;
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_015970ac;
  local_a0 = &DAT_02586c88;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = uVar4;
  _objc_retainBlock();
  pcVar8 = local_70;
  puVar7 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_90 = ppuVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar9 = pcVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar9;
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  local_58 = &cf_all;
  local_50 = &cf_celebrity;
  local_48 = &cf_human;
  local_40 = &cf_anime;
  local_38 = &cf_clone;
  local_30 = &cf_uncategorized;
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar7);
  if (((ulong)puVar10 & 1) == 0) {
    (*(code *)local_90[2])(local_90,0,&cf_eHerR__);
    local_c4 = 1;
  }
  else {
    pcVar8 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isEqualToString__0269ccc8,&cf_all);
    if (((ulong)pcVar8 & 1) == 0) {
      local_320 = local_c0;
    }
    else {
      local_320 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_320;
    lVar11 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    ppuVar3 = local_90;
    local_d1 = lVar11 == 0;
    ppuVar6 = &local_128;
    local_128 = PTR___NSConcreteStackBlock_02578660;
    local_120 = 0xc2000000;
    local_11c = 0;
    local_118 = FUN_01597240;
    local_110 = &DAT_02586ce8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_80;
    local_f8 = ppuVar3;
    local_f0 = local_60;
    local_e8 = local_d1 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar8 = local_c0;
    local_108 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = pcVar8;
    _objc_retainBlock();
    bVar1 = (local_d1 & 1) != 0;
    local_e0 = ppuVar6;
    if (bVar1) {
      local_158 = 0;
      local_148 = 0x32000000;
      local_144 = 0x30;
      local_140 = FUN_015991ac;
      local_138 = FUN_01599200;
      local_130 = 0;
      local_180 = &local_188;
      local_188 = 0;
      local_178 = 0x32000000;
      local_174 = 0x30;
      local_170 = FUN_015991ac;
      local_168 = FUN_01599200;
      local_160 = 0;
      local_1b8 = 0;
      local_1a8 = 0x32000000;
      local_1a4 = 0x30;
      local_1a0 = FUN_015991ac;
      local_198 = FUN_01599200;
      local_190 = 0;
      local_1e0 = &local_1e8;
      local_1e8 = 0;
      local_1d8 = 0x32000000;
      local_1d4 = 0x30;
      local_1d0 = FUN_015991ac;
      local_1c8 = FUN_01599200;
      local_1c0 = 0;
      local_1b0 = &local_1b8;
      local_150 = &local_158;
      local_1f0 = _dispatch_group_create();
      _dispatch_group_enter(local_1f0);
      IVar5 = local_60;
      pcVar8 = local_d0;
      pdVar2 = local_1f0;
      local_228 = PTR___NSConcreteStackBlock_02578660;
      local_220 = 0xc2000000;
      local_21c = 0;
      local_218 = FUN_0159922c;
      local_210 = &DAT_02586d18;
      local_200 = &local_158;
      local_1f8 = &local_1b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_208 = pdVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_wcr_fetchCatalogContentType_cata_026b0aa0,pcVar8,&::cf___,&local_228);
      _dispatch_group_enter(local_1f0);
      IVar5 = local_60;
      pcVar8 = local_d0;
      pdVar2 = local_1f0;
      local_270 = PTR___NSConcreteStackBlock_02578660;
      local_268 = 0xc2000000;
      local_264 = 0;
      local_260 = FUN_015992d8;
      local_258 = &DAT_02586d18;
      local_248 = &local_188;
      local_240 = &local_1e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_250 = pdVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_wcr_fetchServerVoiceCatalogConte_026b0aa8,pcVar8,&local_270);
      pdVar2 = local_1f0;
      pdVar12 = _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = local_e0;
      local_2c0 = PTR___NSConcreteStackBlock_02578660;
      local_2b8 = 0xc2000000;
      local_2b4 = 0;
      local_2b0 = FUN_01599384;
      local_2a8 = &DAT_02586d48;
      local_298 = &local_158;
      local_290 = &local_188;
      (*(code *)PTR__objc_retain_02578638)();
      local_2a0 = ppuVar6;
      local_278 = local_60;
      local_288 = &local_1b8;
      local_280 = &local_1e8;
      _dispatch_group_notify(pdVar2,pdVar12,&local_2c0);
      (*(code *)PTR__objc_release_02578630)(pdVar12);
      _objc_storeStrong(&local_2a0);
      _objc_storeStrong(&local_250,0);
      _objc_storeStrong(&local_208,0);
      _objc_storeStrong(&local_1f0,0);
      __Block_object_dispose(&local_1e8,8);
      _objc_storeStrong(&local_1c0,0);
      __Block_object_dispose(&local_1b8,8);
      _objc_storeStrong(&local_190,0);
      __Block_object_dispose(&local_188,8);
      _objc_storeStrong(&local_160,0);
      __Block_object_dispose(&local_158,8);
      _objc_storeStrong(&local_130,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_wcr_fetchCatalogContentType_cata_026b0aa0,local_d0,local_78,ppuVar6)
      ;
    }
    local_c4 = (uint)!bVar1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

