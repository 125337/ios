// relativePathForMd5: @ 0108266c

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::relativePathForMd5_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  long local_d8;
  int local_cc;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar4 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar4 == 0x20) {
    lVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = lVar4;
    _memset(auStack_120,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_listAllItemsSortMode__026ae2b0,0);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar4 = *local_110;
      local_148 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,IVar1);
          }
          uVar5 = *(ulong *)(local_118 + local_148 * 8);
          local_e0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_md5_026a3da0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if ((uVar3 & 1) != 0) {
            uVar2 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_relativePath_026ac370);
            _objc_retainAutoreleasedReturnValue();
            local_cc = 1;
            local_b0 = uVar2;
            goto LAB_010828f4;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_cc = 0;
LAB_010828f4:
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_cc == 0) {
      local_b0 = 0;
      local_cc = 1;
    }
    _objc_storeStrong(&local_d8,0);
  }
  else {
    local_b0 = 0;
    local_cc = 1;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

