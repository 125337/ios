// memberIndex @ 01aadcd8

/* Function Stack Size: 0x10 bytes */

ID WCRGroupCreateViewController::memberIndex(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  if (*(long *)(param_1 + (long)_memberIndexByUsername) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cachedAllMembers_026bdd30);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_c0 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dictionaryWithCapacity__026a1ad0,param_1);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    _memset(auStack_110,0,0x40);
    IVar6 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar4 = *local_100;
      local_160 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,IVar6);
          }
          lVar5 = *(long *)(local_108 + local_160 * 8);
          local_d0 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_username_026a2238);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar2 = local_c8;
          bVar1 = false;
          if (lVar3 != 0) {
            lVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_username_026a2238);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKeyedSubscript__0269d098);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = puVar2 == (undefined *)0x0;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(lVar3);
          }
          (*(code *)PTR__objc_release_02578630)(lVar5);
          puVar2 = local_c8;
          lVar3 = local_d0;
          if (bVar1) {
            lVar5 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_username_026a2238);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,lVar3);
            (*(code *)PTR__objc_release_02578630)(lVar5);
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar6);
    _objc_storeStrong(local_b0 + (long)_memberIndexByUsername,local_c8);
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
  }
  IVar6 = *(ID *)(local_b0 + (long)_memberIndexByUsername);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_retainAutoreleaseReturnValue(0);
  return IVar6;
}

