// setKeywordAutoReplyRules: @ 01fe7eb0

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setKeywordAutoReplyRules_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  SEL SVar2;
  ID IVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_268;
  ulong local_1b8;
  ulong local_1b0;
  undefined *local_190;
  int local_184;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  byte local_159;
  ulong local_158;
  long local_150;
  ulong local_148;
  undefined *local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined1 *local_d0;
  ID local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar4;
  _memset(auStack_118,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_1b0 != 0) {
    lVar9 = *local_108;
    local_1b8 = 0;
    do {
      do {
        if (*local_108 - lVar9 != 0) {
          _objc_enumerationMutation(*local_108 - lVar9,uVar1);
        }
        uVar10 = *(ulong *)(local_110 + local_1b8 * 8);
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d8 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((uVar10 & 1) != 0) {
          uVar10 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_keyword);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar10;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_120 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar10);
          uVar10 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_replyText)
          ;
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar10;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar10);
          uVar10 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_repositoryCode);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar10;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar10);
          uVar10 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_inviteChatRoom);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar10;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_138 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar10);
          local_140 = (undefined *)0x0;
          uVar10 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_multiItems);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_148 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
          puVar4 = PTR_WCRefineHelper_026ce000;
          if ((uVar10 & 1) == 0) {
            uVar10 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKey__0269e048,&cf_multiContent);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_autoReplyNormalizedMultiItems__0269efa0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_140;
            local_140 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(uVar10);
          }
          else {
            puVar6 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_autoReplySanitizedMultiItems__026a3620,
                       local_148);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_140;
            local_140 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          local_150 = 0;
          uVar10 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_countMode)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_158 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar10,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
          if ((uVar10 & 1) != 0) {
            uVar10 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_integerValue_026ca750);
            local_150 = (long)(int)(uint)(uVar10 == 1);
          }
          local_159 = 0;
          uVar10 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_randomOneFromMulti);
          _objc_retainAutoreleasedReturnValue();
          local_168 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar10,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
          if ((uVar10 & 1) != 0) {
            uVar10 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_boolValue_026ca540);
            local_159 = (byte)uVar10;
          }
          local_170 = 0;
          uVar10 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_senderScope);
          _objc_retainAutoreleasedReturnValue();
          local_178 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar10,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
          if (((uVar10 & 1) != 0) &&
             ((uVar10 = local_178,
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_integerValue_026ca750),
              local_180 = uVar10, uVar10 == 1 || (uVar10 == 2)))) {
            local_170 = uVar10;
          }
          uVar10 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
          if (uVar10 == 0) {
            local_184 = 3;
          }
          else {
            puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
            _objc_retainAutoreleasedReturnValue();
            local_190 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_setObject_forKey__026ca9e8,local_120,&cf_keyword);
            puVar4 = local_190;
            puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                       local_150);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_setObject_forKey__026ca9e8,puVar6,&cf_countMode);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            puVar4 = local_190;
            if ((local_170 == 1) || (local_170 == 2)) {
              puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                         local_170);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_setObject_forKey__026ca9e8,puVar6,&cf_senderScope);
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            puVar4 = local_190;
            if (local_150 == 1) {
              puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                         local_159 & 1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_setObject_forKey__026ca9e8,puVar6,&cf_randomOneFromMulti);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              if (local_140 == (undefined *)0x0) {
                local_268 = *(undefined **)PTR____NSArray0___02578280;
              }
              else {
                local_268 = local_140;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_setObject_forKey__026ca9e8,local_268,&cf_multiItems);
            }
            else {
              uVar10 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
              if (uVar10 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_190,PTR_s_setObject_forKey__026ca9e8,local_128,&cf_replyText);
              }
              uVar10 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
              if (uVar10 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_190,PTR_s_setObject_forKey__026ca9e8,local_130,&cf_repositoryCode);
              }
              uVar10 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_hasSuffix__0269d018,&cf__chatroom);
              if ((uVar10 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_190,PTR_s_setObject_forKey__026ca9e8,local_138,&cf_inviteChatRoom);
              }
            }
            puVar8 = local_d0;
            puVar4 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar7 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
            puVar8 = puVar7 + -100;
            if (puVar7 < &segment_command_00000020.flags) {
              local_184 = 0;
            }
            else {
              puVar8 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
              local_184 = 2;
            }
            _objc_storeStrong(puVar8,&local_190,0);
          }
          _objc_storeStrong(&local_178);
          _objc_storeStrong(&local_168,0);
          _objc_storeStrong(&local_158,0);
          _objc_storeStrong(&local_148,0);
          _objc_storeStrong(&local_140,0);
          _objc_storeStrong(&local_138,0);
          _objc_storeStrong(&local_130,0);
          _objc_storeStrong(&local_128,0);
          _objc_storeStrong(&local_120,0);
          if ((local_184 != 0) && (local_184 != 3)) goto LAB_01fe894c;
        }
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < local_1b0);
      local_1b0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_1b8 = 0;
    } while (local_1b0 != 0);
  }
  local_184 = 0;
LAB_01fe894c:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar8 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  SVar2 = local_b8;
  IVar3 = local_c8;
  if (puVar8 == (undefined1 *)0x0) {
    FUN_01fd95c0(0,local_c8,local_b8,0);
  }
  else {
    puVar8 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    FUN_01fd95c0(IVar3,SVar2);
    (*(code *)PTR__objc_release_02578630)(puVar8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

