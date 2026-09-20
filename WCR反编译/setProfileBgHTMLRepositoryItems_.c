// setProfileBgHTMLRepositoryItems: @ 020afe7c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setProfileBgHTMLRepositoryItems_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined1 *puVar5;
  SEL SVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2b0;
  cfstringStruct *local_288;
  ulong local_218;
  ulong local_210;
  ulong local_1f8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  byte local_1b9;
  cfstringStruct *local_1b8;
  byte local_1a9;
  undefined *local_1a8;
  byte local_199;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  cfstringStruct *local_128;
  undefined1 *local_120;
  ID local_118;
  ulong local_110;
  SEL local_108;
  ID local_100;
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
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_110 = 0;
  local_108 = param_2;
  local_100 = param_1;
  _objc_storeStrong(&local_110,param_3);
  IVar2 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_118 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar3;
  _memset(auStack_168,0,0x40);
  if (local_110 == 0) {
    local_1f8 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_1f8 = local_110;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_210 = local_1f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10);
  if (local_210 != 0) {
    lVar7 = *local_158;
    local_218 = 0;
    do {
      do {
        if (*local_158 - lVar7 != 0) {
          _objc_enumerationMutation(*local_158 - lVar7,local_1f8);
        }
        pcVar8 = *(cfstringStruct **)(local_160 + local_218 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_128 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        pcVar4 = local_128;
        if (((ulong)pcVar8 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_170 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar4;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_178 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar8 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          if (pcVar8 == (cfstringStruct *)0x0) {
            puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            _arc4random_uniform(10000);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_stringWithFormat__0269cca8,&cf_WCR_PBG_HTML__lld__u);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_178;
            local_178 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          pcVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar4;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_180 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar4;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_188 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
          pcVar8 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_288 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
          local_199 = 0;
          local_1a9 = 0;
          local_1b9 = 0;
          if (((ulong)pcVar8 & 1) == 0) {
            puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            local_1a9 = 1;
            local_1a8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            local_1b9 = 1;
            local_1b8 = local_288;
          }
          else {
            local_288 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
            _objc_retainAutoreleasedReturnValue();
            local_199 = 1;
            local_198 = local_288;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_190 = local_288;
          if ((local_1b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1b8);
          }
          if ((local_1a9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1a8);
          }
          if ((local_199 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_198);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
          pcVar8 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          bVar1 = ((ulong)pcVar8 & 1) == 0;
          if (bVar1) {
            local_2b0 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
            _objc_retainAutoreleasedReturnValue();
            local_1e0 = local_2b0;
          }
          else {
            local_2b0 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
            _objc_retainAutoreleasedReturnValue();
            local_1d0 = local_2b0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1c8 = local_2b0;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_1e0);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_1d0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            _objc_storeStrong(&local_180,&cf__g_TTQ_u);
          }
          puVar5 = local_120;
          local_f8 = &cf_id;
          local_d0 = local_178;
          local_f0 = &cf_name;
          local_c8 = local_180;
          local_e8 = &cf_author;
          pcVar4 = local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_2d0 = &cf_WCR;
          }
          else {
            local_2d0 = local_188;
          }
          local_c0 = local_2d0;
          local_e0 = &cf_createdAt;
          local_b8 = local_190;
          local_d8 = &cf_pinned;
          local_b0 = local_1c8;
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar5 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
          bVar1 = &segment_command_00000020.filesize <= puVar5;
          puVar5 = puVar5 + -0x50;
          if (bVar1) {
            puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
          }
          _objc_storeStrong(puVar5,&local_1c8);
          _objc_storeStrong(&local_190,0);
          _objc_storeStrong(&local_188,0);
          _objc_storeStrong(&local_180,0);
          _objc_storeStrong(&local_178,0);
          _objc_storeStrong(&local_170,0);
          if (bVar1) goto LAB_020b0828;
        }
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,
                 0x10);
      local_218 = 0;
    } while (local_210 != 0);
  }
LAB_020b0828:
  (*(code *)PTR__objc_release_02578630)(local_1f8);
  IVar2 = local_118;
  puVar5 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_copy_0269d150);
  SVar6 = local_108;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar5);
  (*(code *)PTR__objc_release_02578630)(SVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

