// FUN_00f67eb0 @ 00f67eb0

void FUN_00f67eb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_310;
  undefined *local_308;
  undefined *local_2f0;
  undefined *local_288;
  undefined *local_280;
  undefined *local_268;
  undefined *local_250;
  long local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  long local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  long local_158;
  undefined *local_150;
  undefined *local_148;
  undefined4 local_13c;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined *)0x0;
  _objc_storeStrong(&local_138,param_1);
  if (local_138 == (undefined *)0x0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_13c = 1;
    local_130 = puVar1;
  }
  else {
    puVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_kind_026a27e8);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_syncMembersForGroupWithId_added__026a26b8,puVar3,0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_groupForId__026a27e0);
      _objc_retainAutoreleasedReturnValue();
      local_250 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_250 = local_138;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = local_250;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      local_150 = puVar1;
      _memset(auStack_198,0,0x40);
      puVar1 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_members_0269ea98);
      _objc_retainAutoreleasedReturnValue();
      local_268 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_268 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_280 = local_268;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_268,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                 0x10);
      if (local_280 != (undefined *)0x0) {
        lVar4 = *local_188;
        local_288 = (undefined *)0x0;
        do {
          do {
            if (*local_188 - lVar4 != 0) {
              _objc_enumerationMutation(*local_188 - lVar4,local_268);
            }
            lVar5 = *(long *)(local_190 + (long)local_288 * 8);
            local_158 = lVar5;
            FUN_00f694c4();
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if (lVar5 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1a0);
            }
            _objc_storeStrong(&local_1a0,0);
            local_288 = local_288 + 1;
          } while (local_288 < local_280);
          local_280 = local_268;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_268,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,
                     auStack_a8,0x10);
          local_288 = (undefined *)0x0;
        } while (local_280 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(local_268);
      puVar1 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_13c = 1;
      local_130 = puVar1;
      _objc_storeStrong(&local_150);
      _objc_storeStrong(&local_148,0);
    }
    else {
      local_1a8 = 0;
      puVar1 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_groupId_0269ea88);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        if (((ulong)puVar3 & 1) == 0) {
          puVar1 = *(undefined **)PTR____NSArray0___02578280;
          (*(code *)PTR__objc_retain_02578638)();
          local_13c = 1;
          local_130 = puVar1;
          goto LAB_00f68704;
        }
        local_1a8 = 2;
      }
      else {
        local_1a8 = 1;
      }
      puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar1;
      _memset(auStack_1f8,0,0x40);
      puVar1 = PTR_WCRefineGroupDataProvider_026ce540;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_2f0 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_2f0 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_308 = local_2f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2f0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                 0x10);
      if (local_308 != (undefined *)0x0) {
        lVar4 = *local_1e8;
        local_310 = (undefined *)0x0;
        do {
          do {
            if (*local_1e8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar4,local_2f0);
            }
            lVar6 = *(long *)(local_1f0 + (long)local_310 * 8);
            local_1b8 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_username_026a2238);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar6;
            FUN_00f694c4();
            _objc_retainAutoreleasedReturnValue();
            local_200 = lVar5;
            (*(code *)PTR__objc_release_02578630)(lVar6);
            lVar5 = local_200;
            (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_length_0269cca0);
            if (lVar5 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_addObject__0269d180,local_200);
            }
            _objc_storeStrong(&local_200,0);
            local_310 = local_310 + 1;
          } while (local_310 < local_308);
          local_308 = local_2f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2f0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                     auStack_128,0x10);
          local_310 = (undefined *)0x0;
        } while (local_308 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(local_2f0);
      puVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_13c = 1;
      local_130 = puVar1;
      _objc_storeStrong(&local_1b0,0);
    }
  }
LAB_00f68704:
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

