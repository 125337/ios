// addMembers:toGroupId: @ 01abf2d0

/* Function Stack Size: 0x20 bytes */

void WCRGroupListViewController::addMembers_toGroupId_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_180;
  ulong local_178;
  ulong local_160;
  undefined *local_150;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
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
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  uVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (uVar5 == 0) {
    local_cc = 1;
  }
  else {
    puVar2 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_members_0269ea98);
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_150 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_orderedSetWithArray__026a4b80,local_150);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _memset(auStack_128,0,0x40);
    if (local_c0 == 0) {
      local_160 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_160 = local_c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_160,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
              );
    if (local_178 != 0) {
      lVar4 = *local_118;
      local_180 = 0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,local_160);
          }
          uVar5 = *(ulong *)(local_120 + local_180 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_e8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar5 & 1) != 0) &&
             (uVar5 = local_e8,
             (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0), uVar5 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_160,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_160);
    IVar1 = local_b0;
    puVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_replaceMembers_forGroupId__026bdf10,puVar2,local_c8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_e0);
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

