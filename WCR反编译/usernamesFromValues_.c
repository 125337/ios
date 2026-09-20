// usernamesFromValues: @ 01a9cae0

/* Function Stack Size: 0x18 bytes */

ID WCRGroupSessionPickerBridge::usernamesFromValues_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_198;
  ulong local_180;
  ulong local_158;
  ulong local_150;
  ulong local_138;
  ulong local_120;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  uVar4 = local_c0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar4 & 1) == 0) {
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
    lVar3 = *local_100;
    local_158 = 0;
    do {
      do {
        if (*local_100 - lVar3 != 0) {
          _objc_enumerationMutation(*local_100 - lVar3,local_138);
        }
        uVar4 = *(ulong *)(local_108 + local_158 * 8);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_d0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        bVar1 = (uVar4 & 1) == 0;
        if (bVar1) {
          local_180 = local_d0;
          FUN_01a9b024();
          _objc_retainAutoreleasedReturnValue();
          local_120 = local_180;
        }
        else {
          local_180 = local_d0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = local_180;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_120);
        }
        uVar4 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
        if (uVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
        }
        _objc_storeStrong(&local_118,0);
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
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_198 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_198;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

