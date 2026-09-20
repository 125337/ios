// setQuickChatTopUsernames: @ 0214e7a0

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setQuickChatTopUsernames_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  ulong local_148;
  ulong local_140;
  ulong local_128;
  ID local_118;
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
    local_128 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_128 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_128,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar3 = *local_100;
    local_148 = 0;
    do {
      do {
        if (*local_100 - lVar3 != 0) {
          _objc_enumerationMutation(*local_100 - lVar3,local_128);
        }
        uVar4 = *(ulong *)(local_108 + local_148 * 8);
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_d0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((((uVar4 & 1) != 0) &&
            (uVar4 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0)
            , uVar4 != 0)) &&
           (puVar1 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsObject__0269cbb8,local_d0),
           ((ulong)puVar1 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d0);
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                 0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_128);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_118 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_setObject_forKey__026ca9e8,local_c8,&cf_quickChatTopUsernames);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

