// importDouTuBackupFromDeviceIntoPack:unresolved: @ 010969a4

/* Function Stack Size: 0x20 bytes */

long_long WCRefineLocalEmoticonStore::importDouTuBackupFromDeviceIntoPack_unresolved_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long_long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong local_188;
  ulong local_180;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ID local_d8;
  long_long local_d0;
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
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_beginChangeBatch_026ae358);
  local_d0 = 0;
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_discoverDouTuBackupPaths_026ae410);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = IVar2;
  _memset(auStack_120,0,0x40);
  IVar2 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_180 != 0) {
    lVar6 = *local_110;
    local_188 = 0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,IVar2);
        }
        local_e0 = *(undefined8 *)(local_118 + local_188 * 8);
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_importDouTuBackupAtPath_intoPack_026ae400,local_e0,local_c0,
                   local_c8);
        local_d0 = local_d0 + IVar3;
        local_188 = local_188 + 1;
      } while (local_188 < local_180);
      local_180 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_188 = 0;
    } while (local_180 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_128 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_130 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_128;
  puVar4 = local_130;
  local_158 = PTR___NSConcreteGlobalBlock_02578658;
  local_150 = 0xd0800000;
  local_14c = 0;
  local_148 = FUN_01096d88;
  local_140 = &DAT_02579a30;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_158);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_importDouTuRecords_intoPack_unre_026ae3f0,local_128,local_c0,local_c8);
  local_d0 = local_d0 + IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_endChangeBatch_026ae360);
  lVar1 = local_d0;
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

