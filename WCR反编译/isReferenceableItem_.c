// isReferenceableItem: @ 010a67e4

/* Function Stack Size: 0x18 bytes */

bool WCRefineMessageRepositoryStore::isReferenceableItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  int local_1a4;
  ulong local_188;
  ulong local_180;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  ID local_f8;
  ID local_f0;
  int local_e8;
  byte local_e1;
  ulong local_e0;
  byte local_d1;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar5 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_d1 = 0;
  local_e1 = 0;
  bVar1 = true;
  if ((uVar5 & 1) != 0) {
    uVar5 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = uVar5;
    FUN_010a6348();
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar5 == 0;
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  if (bVar1) {
    local_a9 = 0;
    local_e8 = 1;
  }
  else {
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isCompositeItem__0269d720,local_c8);
    if ((IVar3 & 1) == 0) {
      uVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_valid);
      _objc_retainAutoreleasedReturnValue();
      local_148 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
      if ((uVar5 & 1) == 0) {
        local_1a4 = 1;
      }
      else {
        uVar5 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_boolValue_026ca540);
        local_1a4 = (int)uVar5;
      }
      local_a9 = local_1a4 != 0;
      local_e8 = 1;
      _objc_storeStrong(&local_148,0);
    }
    else {
      IVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_messageItemsForItem__026ae578,local_c8);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_count_0269cfe0);
      if (IVar3 == 0) {
        local_a9 = 0;
        local_e8 = 1;
      }
      else {
        FUN_010a6cc8();
        _objc_retainAutoreleasedReturnValue();
        local_f8 = IVar3;
        _memset(auStack_140,0,0x40);
        IVar3 = local_f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_180 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        if (local_180 != 0) {
          lVar4 = *local_130;
          local_188 = 0;
          do {
            do {
              if (*local_130 - lVar4 != 0) {
                _objc_enumerationMutation(*local_130 - lVar4,IVar3);
              }
              uVar5 = *(ulong *)(local_138 + local_188 * 8);
              local_100 = uVar5;
              FUN_010a6dd0(uVar5,local_f8);
              if ((uVar5 & 1) == 0) {
                local_a9 = 0;
                local_e8 = 1;
                goto LAB_010a6b78;
              }
              local_188 = local_188 + 1;
            } while (local_188 < local_180);
            local_180 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                       0x10);
            local_188 = 0;
          } while (local_180 != 0);
        }
        local_e8 = 0;
LAB_010a6b78:
        (*(code *)PTR__objc_release_02578630)(IVar3);
        if (local_e8 == 0) {
          local_a9 = 1;
          local_e8 = 1;
        }
        _objc_storeStrong(&local_f8,0);
      }
      _objc_storeStrong(&local_f0,0);
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

