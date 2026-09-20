// memberCountForGroupId: @ 00f2c700

/* Function Stack Size: 0x18 bytes */

long_long WCRefineEmoticonGroupStore::memberCountForGroupId_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  long_long local_e8;
  ID local_e0;
  undefined4 local_d4;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  long_long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf___all__);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = local_d0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_d0,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__), (uVar1 & 1) == 0)) {
      IVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_membership_026abf38);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = 0;
      local_e0 = IVar2;
      _memset(auStack_130,0,0x40);
      IVar2 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      if (local_150 != 0) {
        lVar5 = *local_120;
        local_158 = 0;
        do {
          do {
            if (*local_120 - lVar5 != 0) {
              _objc_enumerationMutation(*local_120 - lVar5,IVar2);
            }
            local_f0 = *(undefined8 *)(local_128 + local_158 * 8);
            IVar3 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectForKeyedSubscript__0269d098,local_f0);
            _objc_retainAutoreleasedReturnValue();
            IVar4 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar3);
            if ((IVar4 & 1) != 0) {
              local_e8 = local_e8 + 1;
            }
            local_158 = local_158 + 1;
          } while (local_158 < local_150);
          local_150 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_158 = 0;
        } while (local_150 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_b0 = local_e8;
      local_d4 = 1;
      _objc_storeStrong(&local_e0,0);
    }
    else {
      local_b0 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

