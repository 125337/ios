// keywordAlertAppendManagedKeywordsFromText:toKeywords:maxCount:maxLength:skipped:errorMessage: @ 00f9debc

/* Function Stack Size: 0x40 bytes */

unsigned_long_long
WCRefineHelper::
keywordAlertAppendManagedKeywordsFromText_toKeywords_maxCount_maxLength_skipped_errorMessage_
          (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,
          unsigned_long_long param_6,unsigned_long_long *param_7,ID *param_8)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_328;
  ulong local_300;
  ulong local_2f8;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  unsigned_long_long local_1f8;
  unsigned_long_long local_1f0;
  ulong local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  undefined *local_198;
  undefined8 local_190;
  ID local_188;
  ID local_180;
  undefined4 local_174;
  ID *local_170;
  unsigned_long_long *local_168;
  unsigned_long_long local_160;
  unsigned_long_long local_158;
  ulong local_150;
  undefined8 local_148;
  SEL local_140;
  ID local_138;
  unsigned_long_long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_4);
  uVar6 = local_150;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_170 = param_8;
  local_168 = param_7;
  local_160 = param_6;
  local_158 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar6 & 1) == 0) {
    if (local_168 != (unsigned_long_long *)0x0) {
      *local_168 = 0;
    }
    local_130 = 0;
    local_174 = 1;
  }
  else {
    local_180 = 0;
    local_190 = 0;
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_keywordAlertManagedKeywordsFromT_026acda0,local_148,&local_190);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_180,local_190);
    local_188 = IVar2;
    if ((local_170 != (ID *)0x0) &&
       (IVar3 = local_180, (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0),
       IVar2 = local_180, IVar3 != 0)) {
      _objc_retainAutorelease();
      *local_170 = IVar2;
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_198 = puVar1;
    _memset(auStack_1e0,0,0x40);
    uVar6 = local_150;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b0 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,0x10);
    if (local_2b0 != 0) {
      lVar4 = *local_1d0;
      local_2b8 = 0;
      do {
        do {
          if (*local_1d0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1d0 - lVar4,uVar6);
          }
          uVar5 = *(ulong *)(local_1d8 + local_2b8 * 8);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1a0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar5 & 1) != 0) {
            uVar5 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_1e8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
            if (uVar5 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_addObject__0269d180,local_1e8);
            }
            _objc_storeStrong(&local_1e8,0);
          }
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,0x10
                  );
        local_2b8 = 0;
      } while (local_2b0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar6);
    local_1f0 = 0;
    local_1f8 = 0;
    _memset(auStack_240,0,0x40);
    IVar2 = local_188;
    (*(code *)PTR__objc_retain_02578638)();
    local_2f8 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,0x10);
    if (local_2f8 != 0) {
      lVar4 = *local_230;
      local_300 = 0;
      do {
        do {
          if (*local_230 - lVar4 != 0) {
            _objc_enumerationMutation(*local_230 - lVar4,IVar2);
          }
          uVar6 = *(ulong *)(local_238 + local_300 * 8);
          local_200 = uVar6;
          if ((local_160 == 0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0), uVar6 <= local_160
             )) {
            if ((local_158 == 0) ||
               (uVar6 = local_150,
               (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0),
               uVar6 < local_158)) {
              uVar6 = local_200;
              (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              local_328 = uVar6;
              if (uVar6 == 0) {
                local_328 = local_200;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_248 = local_328;
              (*(code *)PTR__objc_release_02578630)(uVar6);
              uVar6 = local_248;
              (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
              if ((uVar6 == 0) ||
                 (puVar1 = local_198,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_198,PTR_s_containsObject__0269cbb8,local_248),
                 ((ulong)puVar1 & 1) != 0)) {
                local_1f8 = local_1f8 + 1;
                local_174 = 5;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_200)
                ;
                (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_addObject__0269d180,local_248)
                ;
                local_1f0 = local_1f0 + 1;
                local_174 = 0;
              }
              _objc_storeStrong(&local_248,0);
            }
            else {
              local_1f8 = local_1f8 + 1;
            }
          }
          else {
            local_1f8 = local_1f8 + 1;
          }
          local_300 = local_300 + 1;
        } while (local_300 < local_2f8);
        local_2f8 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,
                   0x10);
        local_300 = 0;
      } while (local_2f8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_168 != (unsigned_long_long *)0x0) {
      *local_168 = local_1f8;
    }
    local_130 = local_1f0;
    local_174 = 1;
    _objc_storeStrong(&local_198);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

