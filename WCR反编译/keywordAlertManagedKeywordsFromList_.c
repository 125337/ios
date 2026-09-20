// keywordAlertManagedKeywordsFromList: @ 00f9d924

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::keywordAlertManagedKeywordsFromList_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_2a0;
  ulong local_278;
  ulong local_270;
  ulong local_230;
  ulong local_228;
  long local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  long local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_14c;
  ulong local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  uVar1 = local_148;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_14c = 1;
    local_130 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_158 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar3;
    _memset(auStack_1a8,0,0x40);
    uVar1 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_228 != 0) {
      lVar5 = *local_198;
      local_230 = 0;
      do {
        do {
          if (*local_198 - lVar5 != 0) {
            _objc_enumerationMutation(*local_198 - lVar5,uVar1);
          }
          uVar6 = *(ulong *)(local_1a0 + local_230 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_168 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar6 & 1) != 0) {
            _memset(auStack_1f0,0,0x40);
            IVar4 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_keywordAlertManagedKeywordsFromT_026acda0,local_168,0);
            _objc_retainAutoreleasedReturnValue();
            local_270 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_270 != 0) {
              lVar7 = *local_1e0;
              local_278 = 0;
              do {
                do {
                  if (*local_1e0 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_1e0 - lVar7,IVar4);
                  }
                  lVar8 = *(long *)(local_1e8 + local_278 * 8);
                  local_1b0 = lVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_lowercaseString_0269d9c0);
                  _objc_retainAutoreleasedReturnValue();
                  local_2a0 = lVar8;
                  if (lVar8 == 0) {
                    local_2a0 = local_1b0;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1f8 = local_2a0;
                  (*(code *)PTR__objc_release_02578630)(lVar8);
                  lVar8 = local_1f8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_length_0269cca0);
                  if ((lVar8 == 0) ||
                     (puVar2 = local_160,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_160,PTR_s_containsObject__0269cbb8,local_1f8),
                     ((ulong)puVar2 & 1) != 0)) {
                    local_14c = 5;
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_160,PTR_s_addObject__0269d180,local_1f8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_158,PTR_s_addObject__0269d180,local_1b0);
                    local_14c = 0;
                  }
                  _objc_storeStrong(&local_1f8,0);
                  local_278 = local_278 + 1;
                } while (local_278 < local_270);
                local_270 = IVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                           auStack_128,0x10);
                local_278 = 0;
              } while (local_270 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_230 = 0;
      } while (local_228 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_copy_0269d150);
    local_14c = 1;
    local_130 = puVar2;
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

