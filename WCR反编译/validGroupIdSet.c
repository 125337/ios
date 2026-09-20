// validGroupIdSet @ 00f2f570

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

ID WCRefineEmoticonGroupStore::validGroupIdSet(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong local_148;
  ulong local_140;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar4 = DAT_028e2d00;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  if ((DAT_028e2d00 == (undefined *)0x0) || (DAT_028e2d30 != DAT_0280e080)) {
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar4;
    _memset(auStack_110,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar5 = *local_100;
      local_148 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,IVar1);
          }
          lVar6 = *(long *)(local_108 + local_148 * 8);
          local_d0 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar6;
          FUN_00f29cf4();
          _objc_retainAutoreleasedReturnValue();
          local_118 = lVar2;
          (*(code *)PTR__objc_release_02578630)(lVar6);
          lVar2 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
          if (lVar2 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
          }
          _objc_storeStrong(&local_118,0);
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
    puVar4 = DAT_028e2d00;
    DAT_028e2d00 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    DAT_028e2d30 = DAT_0280e080;
    puVar4 = DAT_028e2d00;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar4;
    _objc_storeStrong(&local_c8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

