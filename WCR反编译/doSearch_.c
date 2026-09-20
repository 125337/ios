// doSearch: @ 0152892c

/* Function Stack Size: 0x18 bytes */

void WCRCommonGroupMemberDataLogic::doSearch_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong local_178;
  ulong local_170;
  long local_130;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  long local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  lVar4 = local_c0;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cancelSearch_026b0368);
    local_cc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    _memset(auStack_120,0,0x40);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_allContacts_026b0350);
    _objc_retainAutoreleasedReturnValue();
    local_170 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != 0) {
      lVar4 = *local_110;
      local_178 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,IVar2);
          }
          lVar5 = *(long *)(local_118 + local_178 * 8);
          local_e0 = lVar5;
          FUN_01528d34();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = local_e0;
          local_128 = lVar5;
          FUN_01528f60();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = local_128;
          local_130 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_rangeOfString_options__0269d118,local_c8,1);
          if ((lVar5 != 0x7fffffffffffffff) ||
             (lVar3 = local_130,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_130,PTR_s_rangeOfString_options__0269d118,local_c8,1),
             lVar3 != 0x7fffffffffffffff)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          _objc_storeStrong(&local_130);
          _objc_storeStrong(&local_128,0);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFilteredContacts__026b0348,local_d8);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

