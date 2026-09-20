// wcr_sanitizeContactUsernames: @ 01c0b9ac

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsViewController::wcr_sanitizeContactUsernames_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_150;
  ulong local_148;
  ulong local_130;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  _memset(auStack_110,0,0x40);
  if (local_c0 == 0) {
    local_130 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_130 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_148 != 0) {
    lVar3 = *local_100;
    local_150 = 0;
    do {
      do {
        if (*local_100 - lVar3 != 0) {
          _objc_enumerationMutation(*local_100 - lVar3,local_130);
        }
        uVar4 = *(ulong *)(local_108 + local_150 * 8);
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_d0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar2 = local_d0;
        if ((uVar4 & 1) != 0) {
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_118 = uVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar2 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
          if ((uVar2 != 0) &&
             (uVar2 = local_118,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_118,PTR_s_hasSuffix__0269d018,&cf__chatroom), (uVar2 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
          }
          _objc_storeStrong(&local_118,0);
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                 0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_130);
  puVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

