// wcrGrouping_currentItemMatchingItem: @ 00365d28

/* Function Stack Size: 0x18 bytes */

ID WCRGroupingSessionListViewController::wcrGrouping_currentItemMatchingItem_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  ulong local_1e0;
  ulong local_1d8;
  ID local_1c0;
  ID local_198;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ID local_118;
  byte local_109;
  ID local_108;
  byte local_f9;
  ID local_f8;
  ID local_f0;
  byte local_e1;
  ID local_e0;
  ulong local_d8;
  int local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  if (local_c8 == 0) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    IVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_e1 = 0;
    bVar1 = false;
    local_d8 = IVar2;
    if (IVar2 != 0x7fffffffffffffff) {
      IVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar2 < IVar4;
    }
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    if (bVar1) {
      IVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b0 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      local_cc = 1;
    }
    else {
      IVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 0;
      local_109 = 0;
      local_198 = IVar4;
      if (IVar4 == 0) {
        local_198 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_session_0269d000);
        _objc_retainAutoreleasedReturnValue();
        local_f9 = 1;
        local_f8 = local_198;
        FUN_00366324();
        _objc_retainAutoreleasedReturnValue();
        local_108 = local_198;
      }
      local_109 = IVar4 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = local_198;
      if ((local_109 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_108);
      }
      if ((local_f9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      IVar4 = local_c8;
      if (IVar2 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = IVar4;
        local_cc = 1;
      }
      else {
        _memset(auStack_158,0,0x40);
        IVar4 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_items_0269e4b0);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = IVar4;
        if (IVar4 == 0) {
          local_1c0 = *(ID *)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        local_1d8 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        if (local_1d8 != 0) {
          lVar3 = *local_148;
          local_1e0 = 0;
          do {
            do {
              if (*local_148 - lVar3 != 0) {
                _objc_enumerationMutation(*local_148 - lVar3,local_1c0);
              }
              IVar4 = *(ID *)(local_150 + local_1e0 * 8);
              local_118 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_username_026a2238);
              _objc_retainAutoreleasedReturnValue();
              IVar2 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar4);
              IVar4 = local_118;
              if ((IVar2 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = IVar4;
                local_cc = 1;
                goto LAB_00366284;
              }
              local_1e0 = local_1e0 + 1;
            } while (local_1e0 < local_1d8);
            local_1d8 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,
                       auStack_a8,0x10);
            local_1e0 = 0;
          } while (local_1d8 != 0);
        }
        local_cc = 0;
LAB_00366284:
        (*(code *)PTR__objc_release_02578630)(local_1c0);
        IVar4 = local_c8;
        if (local_cc == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = IVar4;
          local_cc = 1;
        }
      }
      _objc_storeStrong(&local_f0,0);
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

