// earliestItemWithRemark:excludingItemId: @ 010a7620

/* Function Stack Size: 0x20 bytes */

ID WCRefineMessageRepositoryStore::earliestItemWithRemark_excludingItemId_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_180;
  ulong local_178;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  ulong local_f8;
  ID local_f0;
  long local_e8;
  undefined4 local_dc;
  ID local_d8;
  long local_d0;
  undefined8 local_c8;
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
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_remarkKey__026ae588,local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_b0 = 0;
    local_dc = 1;
  }
  else {
    lVar5 = local_d0;
    FUN_010a6348();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = 0;
    local_f8 = 0;
    local_e8 = lVar5;
    _memset(auStack_140,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    local_178 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_178 != 0) {
      lVar5 = *local_130;
      local_180 = 0;
      do {
        do {
          if (*local_130 - lVar5 != 0) {
            _objc_enumerationMutation(*local_130 - lVar5,IVar1);
          }
          uVar6 = *(ulong *)(local_138 + local_180 * 8);
          local_100 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          FUN_010a6348();
          _objc_retainAutoreleasedReturnValue();
          local_148 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar7 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
          if (uVar7 == 0) {
            uVar7 = 3;
            local_dc = 3;
          }
          else {
            lVar2 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
            if ((lVar2 == 0) ||
               (uVar7 = local_148,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_148,PTR_s_isEqualToString__0269ccc8,local_e8), (uVar7 & 1) == 0)) {
              IVar3 = local_b8;
              uVar7 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_remarkKey__026ae588);
              _objc_retainAutoreleasedReturnValue();
              IVar4 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar3);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              if ((IVar4 & 1) == 0) {
                uVar7 = 3;
                local_dc = 3;
              }
              else {
                uVar6 = local_100;
                FUN_010a7abc();
                uVar7 = 0;
                if ((local_f0 == 0) || (uVar7 = uVar6 - local_f8, (long)uVar6 < (long)local_f8)) {
                  _objc_storeStrong(uVar7,&local_f0,local_100);
                  uVar7 = uVar6;
                  local_f8 = uVar6;
                }
                local_dc = 0;
              }
            }
            else {
              uVar7 = 3;
              local_dc = 3;
            }
          }
          _objc_storeStrong(uVar7,&local_148,0);
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = IVar1;
    local_dc = 1;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_b0;
}

