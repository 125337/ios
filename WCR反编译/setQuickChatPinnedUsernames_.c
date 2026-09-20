// setQuickChatPinnedUsernames: @ 0214dff8

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setQuickChatPinnedUsernames_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_158;
  ulong local_150;
  ulong local_138;
  ID local_128;
  undefined4 local_11c;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  _memset(auStack_110,0,0x40);
  if (local_c0 == 0) {
    local_138 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_138 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_150 != 0) {
    lVar4 = *local_100;
    local_158 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,local_138);
        }
        uVar5 = *(ulong *)(local_108 + local_158 * 8);
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_d0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar2 = local_d0;
        if ((uVar5 & 1) != 0) {
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
          if (uVar2 == 0) {
            local_11c = 3;
          }
          else {
            puVar1 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsObject__0269cbb8,local_118)
            ;
            if (((ulong)puVar1 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
            }
            local_11c = 0;
          }
          _objc_storeStrong(&local_118,0);
        }
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                 0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_138);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_128 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_setObject_forKey__026ca9e8,local_c8,&cf_quickChatPinnedUsernames);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

