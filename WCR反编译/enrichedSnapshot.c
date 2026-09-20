// enrichedSnapshot @ 0161bd10

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatDisplayHelper::enrichedSnapshot(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_230;
  cfstringStruct *local_218;
  undefined *local_1e8;
  undefined *local_1e0;
  bool local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  bool local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  cfstringStruct *local_f8;
  undefined *local_f0;
  undefined4 local_e4;
  undefined *local_e0;
  byte local_d2;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_runtimeSnapshot_026b19d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_c8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_superFloatContactShowRedDot_026b19e0);
  local_d1 = (byte)puVar2;
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_superFloatContactShowBadge_026b19e8);
  local_d2 = (byte)puVar2;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_d1 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_contactShowRedDot);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_d2 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_contactShowBadge);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabledActions);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_e0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
    local_e4 = 1;
    local_b0 = puVar2;
  }
  else {
    puVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    _memset(auStack_138,0,0x40);
    puVar2 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1e0 != (undefined *)0x0) {
      lVar6 = *local_128;
      local_1e8 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,puVar2);
          }
          pcVar7 = *(cfstringStruct **)(local_130 + (long)local_1e8 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_f8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar7 & 1) != 0) {
            pcVar7 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_mutableCopy_0269d8a0);
            pcVar4 = local_f8;
            local_140 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomPayload);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar7 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_151 = false;
            bVar1 = ((ulong)pcVar7 & 1) == 0;
            if (bVar1) {
              local_218 = &::cf___;
            }
            else {
              local_218 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomPayload);
              _objc_retainAutoreleasedReturnValue();
              local_150 = local_218;
            }
            local_151 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_148 = local_218;
            if ((local_151 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_150);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar7 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar4 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_169 = ((ulong)pcVar4 & 1) == 0;
            if (local_169) {
              local_230 = &::cf___;
            }
            else {
              local_230 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
              _objc_retainAutoreleasedReturnValue();
              local_168 = local_230;
            }
            local_169 = !local_169;
            (*(code *)PTR__objc_retain_02578638)();
            local_160 = local_230;
            if (local_169) {
              (*(code *)PTR__objc_release_02578630)(local_168);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            pcVar7 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_quick_chat_sidebar);
            if (((ulong)pcVar7 & 1) != 0) {
              puVar3 = PTR_WCRQuickChatRuntime_026ce698;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar3);
              pcVar7 = &cf_Oh;
              if (((ulong)puVar5 & 1) == 0) {
                pcVar7 = &cf_Oh>f;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar7,&cf_title);
              pcVar7 = &cf_icons_filled_eyes_off;
              if (((ulong)puVar5 & 1) == 0) {
                pcVar7 = &cf_icons_filled_eyes_on;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar7,&cf_icon);
            }
            pcVar7 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_hasPrefix__0269d320,&cf_chat_);
            if ((((ulong)pcVar7 & 1) == 0) &&
               (pcVar7 = local_160,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_160,PTR_s_containsString__0269d0b0,&cf_chat_),
               ((ulong)pcVar7 & 1) == 0)) {
LAB_0161c684:
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_140);
              local_e4 = 0;
            }
            else {
              pcVar7 = local_140;
              FUN_0161c9d8();
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = pcVar7;
              FUN_0161c838();
              (*(code *)PTR__objc_release_02578630)(pcVar7);
              if (((ulong)pcVar4 & 1) != 0) {
                puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                           &cf__wcrAvatar);
                (*(code *)PTR__objc_release_02578630)(puVar3);
                if (((local_d1 & 1) != 0) || ((local_d2 & 1) != 0)) {
                  pcVar7 = local_140;
                  FUN_0161c9d8();
                  _objc_retainAutoreleasedReturnValue();
                  FUN_0161cbc4();
                  (*(code *)PTR__objc_release_02578630)(pcVar7);
                  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,
                             PTR_s_numberWithUnsignedInt__0269d800,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_140,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                             &cf__wcrUnread);
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_140,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                             &cf__wcrAsRedDot);
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                }
                goto LAB_0161c684;
              }
              local_e4 = 3;
            }
            _objc_storeStrong(&local_160);
            _objc_storeStrong(&local_148,0);
            _objc_storeStrong(&local_140,0);
          }
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1e8 = (undefined *)0x0;
      } while (local_1e0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_setObject_forKeyedSubscript__0269d248,local_f0,&cf_enabledActions);
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
    local_e4 = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

