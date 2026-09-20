// publishRuntimeSnapshot @ 01110b68

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::publishRuntimeSnapshot(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ID local_1f8;
  ulong local_1c8;
  ulong local_1c0;
  ID local_188;
  uint local_160;
  ID local_158;
  ID local_148;
  ID local_140;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_e8;
  bool local_d9;
  ID local_d8;
  byte local_c9;
  ID local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_c9 = 0;
  local_d9 = false;
  bVar1 = (IVar4 & 1) == 0;
  if (bVar1) {
    local_188 = *(ID *)PTR____NSArray0___02578280;
  }
  else {
    local_188 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_188;
  }
  local_d9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_188;
  if ((local_d9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  IVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithCapacity__0269e038,IVar2);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar3;
  _memset(auStack_130,0,0x40);
  IVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_1c0 != 0) {
    lVar7 = *local_120;
    local_1c8 = 0;
    do {
      do {
        if (*local_120 - lVar7 != 0) {
          _objc_enumerationMutation(*local_120 - lVar7,IVar2);
        }
        lVar8 = *(long *)(local_128 + local_1c8 * 8);
        local_f0 = lVar8;
        FUN_0110d24c();
        _objc_retainAutoreleasedReturnValue();
        local_138 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
        if (lVar8 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_138);
        }
        _objc_storeStrong(&local_138,0);
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1c0);
      local_1c0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_1c8 = 0;
    } while (local_1c0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = (IVar5 & 1) == 0;
  if (bVar1) {
    local_1f8 = *(ID *)PTR____NSDictionary0___02578288;
  }
  else {
    local_148 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_158 = local_1f8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = local_1f8;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_158);
    (*(code *)PTR__objc_release_02578630)(local_148);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _os_unfair_lock_lock();
  puVar6 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
  puVar3 = DAT_028e3520;
  DAT_028e3520 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar4 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
  IVar2 = DAT_028e3528;
  DAT_028e3528 = IVar4;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _os_unfair_lock_unlock(&DAT_028e3540);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_160 = (uint)((IVar5 & 1) != 0);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar5 & 1) != 0) {
    local_160 = local_160 | 2;
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar5 & 1) != 0) {
    local_160 = local_160 | 4;
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar5 & 1) != 0) {
    local_160 = local_160 | 8;
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar5 & 1) != 0) {
    local_160 = local_160 | 0x10;
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar5 & 1) != 0) {
    local_160 = local_160 | 0x20;
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar5 & 1) != 0) {
    local_160 = local_160 | 0x40;
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar5 & 1) != 0) {
    local_160 = local_160 | 0x100;
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar5 & 1) != 0) {
    local_160 = local_160 | 0x200;
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar5 & 1) != 0) {
    local_160 = local_160 | 0x400;
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar5 & 1) != 0) {
    local_160 = local_160 | 0x800;
  }
  puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isEntryVisibleForCurrentUser_0269e560);
  if (((ulong)puVar3 & 1) != 0) {
    local_160 = local_160 | 0x80;
  }
  DAT_028e3544 = local_160;
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

