// FUN_008e7cc8 @ 008e7cc8

void FUN_008e7cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  undefined8 uVar12;
  undefined *local_458;
  undefined *local_450;
  cfstringStruct *local_420;
  undefined *local_3e8;
  undefined *local_3b0;
  cfstringStruct *local_378;
  undefined *local_360;
  undefined *local_348;
  cfstringStruct *local_300;
  undefined *local_2f8;
  undefined *local_2f0;
  undefined8 local_2e8;
  cfstringStruct *local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  int local_2a4;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  cfstringStruct *local_248;
  long local_240;
  byte local_231;
  cfstringStruct *local_230;
  byte local_221;
  undefined *local_220;
  byte local_211;
  undefined *local_210;
  byte local_201;
  cfstringStruct *local_200;
  byte local_1f1;
  undefined *local_1f0;
  byte local_1e1;
  undefined *local_1e0;
  undefined *local_1c8;
  undefined8 *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  undefined8 local_190;
  undefined8 local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [128];
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1a8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1a8,param_1);
  local_1b0 = (undefined *)0x0;
  _objc_storeStrong(&local_1b0,param_2);
  local_1b8 = (undefined *)0x0;
  _objc_storeStrong(&local_1b8,param_3);
  local_1c0 = param_4;
  if (param_4 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_1c0 = &cf___;
  }
  local_1e1 = 0;
  bVar2 = local_1b8 == (undefined *)0x0;
  if (bVar2) {
    local_348 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = local_348;
  }
  else {
    local_348 = local_1b8;
  }
  local_58 = local_348;
  local_1f1 = 0;
  bVar1 = local_1b0 == (undefined *)0x0;
  local_1e1 = bVar2;
  if (bVar1) {
    local_360 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = local_360;
  }
  else {
    local_360 = local_1b0;
  }
  local_50 = local_360;
  local_201 = 0;
  bVar2 = local_1a8 == (cfstringStruct *)0x0;
  local_1f1 = bVar1;
  if (bVar2) {
    local_378 = (cfstringStruct *)PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_200 = local_378;
  }
  else {
    local_378 = local_1a8;
  }
  puVar4 = local_1b8;
  local_48 = local_378;
  local_70 = &cf_tingItem;
  local_68 = &cf_shareListenItem;
  local_60 = &cf_audioContentView;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_201 = bVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_008ebfa0();
  _objc_retainAutoreleasedReturnValue();
  local_211 = 0;
  local_3b0 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_3b0 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_210 = local_3b0;
  }
  puVar6 = local_1b0;
  local_40 = local_3b0;
  local_98 = &cf_tingItem;
  local_90 = &cf_shareListenItem;
  local_88 = &cf_shareCategoryItem;
  local_80 = &cf_shareChatRoomItem;
  local_78 = &cf_shareLyricsItem;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_211 = puVar4 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_98,5);
  _objc_retainAutoreleasedReturnValue();
  FUN_008ebfa0();
  _objc_retainAutoreleasedReturnValue();
  local_221 = 0;
  local_3e8 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    local_3e8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_220 = local_3e8;
  }
  pcVar8 = local_1a8;
  local_38 = local_3e8;
  local_b8 = &cf_tingListenItem;
  local_b0 = &cf_tingCategoryItem;
  local_a8 = &cf_tingChatRoomItem;
  local_a0 = &cf_tingLyricsItem;
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_221 = puVar6 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,4);
  _objc_retainAutoreleasedReturnValue();
  FUN_008ebfa0();
  _objc_retainAutoreleasedReturnValue();
  local_231 = 0;
  local_420 = pcVar8;
  if (pcVar8 == (cfstringStruct *)0x0) {
    local_420 = (cfstringStruct *)PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_230 = local_420;
  }
  local_30 = local_420;
  puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_231 = pcVar8 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = puVar9;
  if ((local_231 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_230);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  if ((local_221 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_220);
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if ((local_211 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_210);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((local_201 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_200);
  }
  if ((local_1f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1f0);
  }
  if ((local_1e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1e0);
  }
  local_240 = 0;
  _memset(auStack_288,0,0x40);
  puVar4 = local_1c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_450 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_138,0x10);
  if (local_450 != (undefined *)0x0) {
    lVar10 = *local_278;
    local_458 = (undefined *)0x0;
    do {
      do {
        if (*local_278 - lVar10 != 0) {
          _objc_enumerationMutation(*local_278 - lVar10,puVar4);
        }
        pcVar11 = *(cfstringStruct **)(local_280 + (long)local_458 * 8);
        local_240 = local_240 + 1;
        pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSNull_026ce0e8;
        local_248 = pcVar11;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (pcVar11 != pcVar8) {
          (*(code *)PTR__objc_retain_02578638)();
          pcVar8 = local_248;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_290 = &cf___;
          pcVar11 = local_248;
          (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_ting_lu___);
          _objc_retainAutoreleasedReturnValue();
          local_2a0 = local_290;
          FUN_008eea48(pcVar8,puVar3,&local_2a0);
          _objc_retainAutoreleasedReturnValue();
          _objc_storeStrong(&local_290,local_2a0);
          local_298 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar11);
          pcVar11 = local_298;
          (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_length_0269cca0);
          pcVar8 = local_290;
          if (pcVar11 == (cfstringStruct *)0x0) {
            local_2a4 = 0;
            uVar12 = 0;
          }
          else {
            if (local_1c0 != (undefined8 *)0x0) {
              _objc_retainAutorelease();
              *local_1c0 = pcVar8;
            }
            pcVar8 = local_298;
            (*(code *)PTR__objc_retain_02578638)();
            local_1a0 = pcVar8;
            uVar12 = 1;
            local_2a4 = 1;
          }
          _objc_storeStrong(uVar12,&local_298);
          _objc_storeStrong(&local_290,0);
          if (local_2a4 != 0) goto LAB_008e89ac;
        }
        local_458 = local_458 + 1;
      } while (local_458 < local_450);
      local_450 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_138,0x10
                );
      local_458 = (undefined *)0x0;
    } while (local_450 != (undefined *)0x0);
  }
  local_2a4 = 0;
LAB_008e89ac:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar8 = local_1a8;
  if (local_2a4 != 0) goto LAB_008e90bc;
  local_148 = &cf_m_nsContent;
  local_140 = &cf_content;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_148,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  FUN_008eb4dc();
  _objc_retainAutoreleasedReturnValue();
  pcVar11 = pcVar8;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  local_2b0 = pcVar11;
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_retain_02578638)();
  pcVar8 = local_2b0;
  local_2b8 = &cf___;
  local_178 = &cf_audioUrl;
  local_170 = &cf_audiourl;
  local_168 = &cf_playurl;
  local_160 = &cf_url;
  local_158 = &cf_dataurl;
  local_150 = &cf_songurl;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_178,6)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_2c8 = local_2b8;
  FUN_008ef444(pcVar8,puVar4,&local_2c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_2b8,local_2c8);
  local_2c0 = pcVar8;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar8 = local_2c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
  if (pcVar8 == (cfstringStruct *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_https_______s<>____,0,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = local_2b0;
    pcVar11 = local_2b0;
    local_2d0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_length_0269cca0);
    local_190 = 0;
    local_188 = 0;
    local_2e8 = 0;
    local_2e0 = pcVar11;
    local_198 = pcVar11;
    local_180 = pcVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_firstMatchInString_options_range_0269ef48,pcVar8,0,0,pcVar11);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    local_2d8 = puVar4;
    if (puVar4 != (undefined *)0x0) {
      puVar3 = PTR_s_range_0269ef50;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = puVar4 != (undefined *)0x7fffffffffffffff;
      local_2f8 = puVar4;
      local_2f0 = puVar3;
    }
    pcVar8 = local_2b0;
    if (bVar2) {
      puVar4 = local_2d8;
      puVar3 = PTR_s_range_0269ef50;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_substringWithRange__0269d138,puVar4,puVar3)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar11 = pcVar8;
      FUN_008efb90();
      _objc_retainAutoreleasedReturnValue();
      local_300 = pcVar11;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      pcVar8 = local_300;
      (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_length_0269cca0);
      if (pcVar8 == (cfstringStruct *)0x0) {
        local_2a4 = 0;
        uVar12 = 0;
      }
      else {
        if (local_1c0 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_1c0 = &cf_ting_content_http;
        }
        pcVar8 = local_300;
        (*(code *)PTR__objc_retain_02578638)();
        local_1a0 = pcVar8;
        uVar12 = 1;
        local_2a4 = 1;
      }
      _objc_storeStrong(uVar12,&local_300,0);
      if (local_2a4 == 0) goto LAB_008e8ff4;
    }
    else {
LAB_008e8ff4:
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = &cf___;
      local_2a4 = 1;
    }
    _objc_storeStrong(&local_2d8);
    _objc_storeStrong(&local_2d0,0);
  }
  else {
    if (local_1c0 != (undefined8 *)0x0) {
      pcVar8 = &cf_ting_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_ting_,PTR_s_stringByAppendingString__0269d398,local_2b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_1c0 = pcVar8;
    }
    pcVar8 = local_2c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = pcVar8;
    local_2a4 = 1;
  }
  _objc_storeStrong(&local_2c0);
  _objc_storeStrong(&local_2b8,0);
  _objc_storeStrong(&local_2b0,0);
LAB_008e90bc:
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1b0,0);
  _objc_storeStrong(&local_1a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

