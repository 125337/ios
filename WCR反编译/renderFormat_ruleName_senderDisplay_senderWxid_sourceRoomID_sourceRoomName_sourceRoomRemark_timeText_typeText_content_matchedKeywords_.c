// renderFormat:ruleName:senderDisplay:senderWxid:sourceRoomID:sourceRoomName:sourceRoomRemark:timeText:typeText:content:matchedKeywords: @ 010afc28

/* Function Stack Size: 0x68 bytes */

ID WCRefineMessageSyncRule::
   renderFormat_ruleName_senderDisplay_senderWxid_sourceRoomID_sourceRoomName_sourceRoomRemark_timeText_typeText_content_matchedKeywords_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10,ID param_11,ID param_12,ID param_13)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  cfstringStruct *pcVar12;
  long lVar13;
  undefined8 uVar14;
  cfstringStruct *local_430;
  cfstringStruct *local_3f8;
  cfstringStruct *local_3f0;
  cfstringStruct *local_3a0;
  cfstringStruct *local_390;
  long local_350;
  cfstringStruct *local_318;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  undefined8 local_278;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  long local_260;
  long local_258;
  long local_250;
  undefined8 local_248;
  cfstringStruct *local_240;
  undefined *local_238;
  byte local_229;
  cfstringStruct *local_228;
  long local_220;
  cfstringStruct *local_218;
  long local_210;
  cfstringStruct *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  long local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  cfstringStruct *local_1c0;
  SEL local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c0 = (cfstringStruct *)0x0;
  local_1b8 = param_2;
  local_1b0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_1c0,param_3);
  local_1c8 = 0;
  _objc_storeStrong(&local_1c8,param_4);
  local_1d0 = 0;
  _objc_storeStrong(&local_1d0,param_5);
  local_1d8 = 0;
  _objc_storeStrong(&local_1d8,param_6);
  local_1e0 = 0;
  _objc_storeStrong(&local_1e0,param_7);
  local_1e8 = 0;
  _objc_storeStrong(&local_1e8,param_8);
  local_1f0 = 0;
  _objc_storeStrong(&local_1f0,param_9);
  local_1f8 = 0;
  _objc_storeStrong(&local_1f8,param_10);
  local_200 = 0;
  _objc_storeStrong(&local_200,param_11);
  local_208 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_208,param_12);
  local_210 = 0;
  _objc_storeStrong(&local_210,param_13);
  pcVar4 = local_1c0;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    local_318 = &::cf___;
  }
  else {
    local_318 = local_1c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_218 = local_318;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_318,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__n,&::cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_218;
  local_218 = local_318;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_218;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  if (pcVar5 == (cfstringStruct *)0x0) {
    pcVar5 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_defaultFormat_026ca5e8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_218;
    local_218 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  lVar13 = local_210;
  FUN_010ac744();
  _objc_retainAutoreleasedReturnValue();
  local_220 = lVar13;
  (*(code *)PTR__objc_msgSend_02578628)(lVar13,PTR_s_count_0269cfe0);
  pcVar4 = local_218;
  local_229 = 0;
  bVar2 = false;
  if (lVar13 != 0) {
    pcVar5 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_defaultFormat_026ca5e8);
    _objc_retainAutoreleasedReturnValue();
    local_229 = 1;
    local_228 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isEqualToString__0269ccc8);
    bVar2 = false;
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar4 = local_218;
      puVar3 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_rangeOfString__0269d838,&::cf__);
      bVar2 = pcVar4 == (cfstringStruct *)0x7fffffffffffffff;
      local_240 = pcVar4;
      local_238 = puVar3;
    }
  }
  if ((local_229 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_228);
  }
  if (bVar2) {
    pcVar5 = local_218;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_218,PTR_s_stringByAppendingString__0269d398,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_218;
    local_218 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  uVar14 = local_1d0;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = local_1e8;
  local_248 = uVar14;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = local_1f0;
  local_250 = lVar13;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_258 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_350 = local_250;
  }
  else {
    local_350 = local_258;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_260 = local_350;
  local_128 = &::cf__;
  local_a8 = local_248;
  local_120 = &cf__S;
  local_a0 = local_248;
  local_118 = &::cf__;
  local_98 = local_248;
  local_110 = &::cf__;
  local_90 = local_248;
  local_108 = &cf__wxid;
  uVar14 = local_1d8;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_100 = &::cf__;
  local_80 = local_260;
  local_f8 = &::cf__;
  local_78 = local_250;
  local_f0 = &::cf__;
  local_70 = local_258;
  local_e8 = &::cf__;
  uVar7 = local_1e0;
  local_88 = uVar14;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = &::cf__;
  uVar8 = local_1f8;
  local_68 = uVar7;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = &cf__T;
  uVar9 = local_1f8;
  local_60 = uVar8;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = &::cf__;
  uVar10 = local_200;
  local_58 = uVar9;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = &::cf__;
  if (local_208 == (cfstringStruct *)0x0) {
    local_390 = &::cf___;
  }
  else {
    local_390 = local_208;
  }
  local_48 = local_390;
  local_c0 = &cf__C;
  if (local_208 == (cfstringStruct *)0x0) {
    local_3a0 = &::cf___;
  }
  else {
    local_3a0 = local_208;
  }
  local_40 = local_3a0;
  local_b8 = &::cf__;
  lVar13 = local_220;
  local_50 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_componentsJoinedByString__0269d140,&::cf_0);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = &::cf__;
  uVar11 = local_1c8;
  local_38 = lVar13;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_a8,&local_128);
  _objc_retainAutoreleasedReturnValue();
  local_268 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(uVar11);
  (*(code *)PTR__objc_release_02578630)(lVar13);
  (*(code *)PTR__objc_release_02578630)(uVar10);
  (*(code *)PTR__objc_release_02578630)(uVar9);
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  (*(code *)PTR__objc_release_02578630)(uVar14);
  pcVar4 = local_268;
  (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_270 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  _memset(auStack_2b8,0,0x40);
  pcVar4 = local_270;
  (*(code *)PTR__objc_retain_02578638)();
  local_3f0 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_1a8,0x10);
  if (local_3f0 != (cfstringStruct *)0x0) {
    lVar13 = *local_2a8;
    local_3f8 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_2a8 - lVar13 != 0) {
          _objc_enumerationMutation(*local_2a8 - lVar13,pcVar4);
        }
        pcVar5 = local_218;
        uVar14 = *(undefined8 *)(local_2b0 + (long)local_3f8 * 8);
        pcVar12 = local_268;
        local_278 = uVar14;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_268,PTR_s_objectForKeyedSubscript__0269d098,uVar14);
        _objc_retainAutoreleasedReturnValue();
        local_430 = pcVar12;
        if (pcVar12 == (cfstringStruct *)0x0) {
          local_430 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,uVar14,local_430);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_218;
        local_218 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar12);
        local_3f8 = (cfstringStruct *)((long)&local_3f8->field0_0x0 + 1);
      } while (local_3f8 < local_3f0);
      local_3f0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_1a8,0x10
                );
      local_3f8 = (cfstringStruct *)0x0;
    } while (local_3f0 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_218;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_270);
  _objc_storeStrong(&local_268,0);
  _objc_storeStrong(&local_260,0);
  _objc_storeStrong(&local_258,0);
  _objc_storeStrong(&local_250,0);
  _objc_storeStrong(&local_248,0);
  _objc_storeStrong(&local_220,0);
  _objc_storeStrong(&local_218,0);
  _objc_storeStrong(&local_210,0);
  _objc_storeStrong(&local_208,0);
  _objc_storeStrong(&local_200,0);
  _objc_storeStrong(&local_1f8,0);
  _objc_storeStrong(&local_1f0,0);
  _objc_storeStrong(&local_1e8,0);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)pcVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

