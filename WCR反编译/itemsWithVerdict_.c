// itemsWithVerdict: @ 00f7eb1c

/* Function Stack Size: 0x18 bytes */

ID WCRefineFriendRelationStore::itemsWithVerdict_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *local_248;
  ulong local_200;
  ulong local_1f8;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined **local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined *local_118;
  ID local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined **local_f8;
  undefined *local_f0;
  undefined *local_e8;
  ID local_e0;
  ID local_d8;
  ID local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar1 = local_c0;
  FUN_00f7e630();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_b0;
  local_c8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_snapshot_026a25c0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_b0;
  local_d0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_queueFromSnapshot__026aca68,IVar2);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_b0;
  local_d8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_resultsFromSnapshot__026acb00,local_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_e8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &local_138;
  local_138 = PTR___NSConcreteStackBlock_02578660;
  local_130 = 0xc2000000;
  local_12c = 0;
  local_128 = FUN_00f7effc;
  local_120 = &DAT_02583708;
  local_f0 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_e0;
  local_118 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_c8;
  local_110 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar4 = local_e8;
  local_108 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = puVar4;
  _objc_retainBlock();
  local_f8 = ppuVar6;
  _memset(auStack_180,0,0x40);
  IVar2 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1f8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_1f8 != 0) {
    lVar7 = *local_170;
    local_200 = 0;
    do {
      do {
        if (*local_170 - lVar7 != 0) {
          _objc_enumerationMutation(*local_170 - lVar7,IVar2);
        }
        local_140 = *(undefined8 *)(local_178 + local_200 * 8);
        (*(code *)local_f8[2])(local_f8,local_140);
        local_200 = local_200 + 1;
      } while (local_200 < local_1f8);
      local_1f8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
      local_200 = 0;
    } while (local_1f8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_e0;
  ppuVar6 = local_f8;
  local_1a8 = PTR___NSConcreteGlobalBlock_02578658;
  local_1a0 = 0xd0800000;
  local_19c = 0;
  local_198 = FUN_00f7f4d0;
  local_190 = &DAT_02583738;
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = ppuVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_1a8);
  puVar4 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
  local_248 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_248 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_188);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_248;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

