// setToDoCardWebHTMLRepositoryItems: @ 021727bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setToDoCardWebHTMLRepositoryItems_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined1 *puVar5;
  SEL SVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_328;
  cfstringStruct *local_308;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2a8;
  ulong local_270;
  ulong local_268;
  ulong local_250;
  bool local_231;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  byte local_219;
  cfstringStruct *local_218;
  byte local_209;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  byte local_1f1;
  cfstringStruct *local_1f0;
  byte local_1e1;
  undefined *local_1e0;
  byte local_1d1;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  int local_1a8;
  bool local_1a1;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  cfstringStruct *local_148;
  undefined1 *local_140;
  ID local_138;
  ulong local_130;
  SEL local_128;
  ID local_120;
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
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  local_128 = param_2;
  local_120 = param_1;
  _objc_storeStrong(&local_130,param_3);
  IVar2 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_138 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar3;
  _memset(auStack_188,0,0x40);
  local_250 = local_130;
  if (local_130 == 0) {
    local_250 = *(ulong *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_268 = local_250;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_250,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_268 != 0) {
    lVar7 = *local_178;
    local_270 = 0;
    do {
      do {
        if (*local_178 - lVar7 != 0) {
          _objc_enumerationMutation(*local_178 - lVar7,local_250);
        }
        pcVar8 = *(cfstringStruct **)(local_180 + local_270 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_148 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        pcVar4 = local_148;
        if (((ulong)pcVar8 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_190 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_html);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar8 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_1a1 = false;
          bVar1 = ((ulong)pcVar8 & 1) == 0;
          if (bVar1) {
            local_2a8 = &::cf___;
          }
          else {
            local_2a8 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_html);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = local_2a8;
          }
          local_1a1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_198 = local_2a8;
          if ((local_1a1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1a0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_1a8 = 3;
          }
          else {
            pcVar4 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = pcVar4;
            FUN_01fd868c();
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = pcVar4;
            FUN_01fd868c();
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = pcVar4;
            FUN_01fd868c();
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
            pcVar8 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_2e0 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
            local_1d1 = 0;
            local_1e1 = 0;
            local_1f1 = 0;
            if (((ulong)pcVar8 & 1) == 0) {
              puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
              _objc_retainAutoreleasedReturnValue();
              local_1e1 = 1;
              local_1e0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_numberWithDouble__0269d6d0);
              _objc_retainAutoreleasedReturnValue();
              local_1f1 = 1;
              local_1f0 = local_2e0;
            }
            else {
              local_2e0 = local_190;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
              _objc_retainAutoreleasedReturnValue();
              local_1d1 = 1;
              local_1d0 = local_2e0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1c8 = local_2e0;
            if ((local_1f1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1f0);
            }
            if ((local_1e1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1e0);
            }
            if ((local_1d1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1d0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
            pcVar8 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_209 = 0;
            local_219 = 0;
            if (((ulong)pcVar8 & 1) == 0) {
              local_308 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
              _objc_retainAutoreleasedReturnValue();
              local_219 = 1;
              local_218 = local_308;
            }
            else {
              local_308 = local_190;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
              _objc_retainAutoreleasedReturnValue();
              local_209 = 1;
              local_208 = local_308;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_200 = local_308;
            if ((local_219 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_218);
            }
            if ((local_209 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_208);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            pcVar8 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_231 = ((ulong)pcVar8 & 1) == 0;
            if (local_231) {
              local_328 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
            }
            else {
              local_328 = local_190;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
              _objc_retainAutoreleasedReturnValue();
              local_230 = local_328;
            }
            local_231 = !local_231;
            (*(code *)PTR__objc_retain_02578638)();
            local_228 = local_328;
            if (local_231) {
              (*(code *)PTR__objc_release_02578630)(local_230);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar8 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
            pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            if (pcVar8 == (cfstringStruct *)0x0) {
              puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              _arc4random_uniform(10000);
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar4,PTR_s_stringWithFormat__0269cca8,&cf_WCR_HTML__lld__u);
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = local_1c0;
              local_1c0 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar8);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            pcVar4 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0);
            if (pcVar4 == (cfstringStruct *)0x0) {
              _objc_storeStrong(&local_1b0,&cf__g_TTNx);
            }
            puVar5 = local_140;
            local_118 = &cf_id;
            local_e0 = local_1c0;
            local_110 = &cf_name;
            local_d8 = local_1b0;
            local_108 = &cf_author;
            local_d0 = local_1b8;
            local_100 = &cf_html;
            local_c8 = local_198;
            local_f8 = &cf_storage;
            local_c0 = local_228;
            local_f0 = &cf_createdAt;
            local_b8 = local_1c8;
            local_e8 = &cf_pinned;
            local_b0 = local_200;
            puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e0,&local_118,7);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar5 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
            if (puVar5 < &segment_command_00000020.filesize) {
              local_1a8 = 0;
            }
            else {
              local_1a8 = 2;
            }
            _objc_storeStrong(&local_228);
            _objc_storeStrong(&local_200,0);
            _objc_storeStrong(&local_1c8,0);
            _objc_storeStrong(&local_1c0,0);
            _objc_storeStrong(&local_1b8,0);
            _objc_storeStrong(&local_1b0,0);
          }
          _objc_storeStrong(&local_198);
          _objc_storeStrong(&local_190,0);
          if ((local_1a8 != 0) && (local_1a8 != 3)) goto LAB_0217347c;
        }
        local_270 = local_270 + 1;
      } while (local_270 < local_268);
      local_268 = local_250;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_250,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                 0x10);
      local_270 = 0;
    } while (local_268 != 0);
  }
  local_1a8 = 0;
LAB_0217347c:
  (*(code *)PTR__objc_release_02578630)(local_250);
  IVar2 = local_138;
  puVar5 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
  SVar6 = local_128;
  FUN_0216dcbc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar5);
  (*(code *)PTR__objc_release_02578630)(SVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

