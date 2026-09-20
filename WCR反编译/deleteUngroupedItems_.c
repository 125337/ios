// deleteUngroupedItems: @ 01087900

/* Function Stack Size: 0x18 bytes */

bool WCRefineLocalEmoticonStore::deleteUngroupedItems_(ID param_1,SEL param_2,ID *param_3)

{
  byte bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_150;
  ulong local_148;
  undefined *local_128;
  byte local_119;
  ID local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  byte local_c1;
  ID *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_beginChangeBatch_026ae358);
  local_c1 = 0;
  _memset(auStack_110,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_listUngroupedItemsSortMode__026ae338,0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != 0) {
    lVar7 = *local_100;
    local_150 = 0;
    do {
      do {
        if (*local_100 - lVar7 != 0) {
          _objc_enumerationMutation(*local_100 - lVar7,IVar2);
        }
        IVar3 = local_b0;
        uVar8 = *(undefined8 *)(local_108 + local_150 * 8);
        local_d0 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_relativePath_026ac370);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_deleteRelativePath_error__026a3a78,uVar8,local_c0);
        (*(code *)PTR__objc_release_02578630)(uVar8);
        if ((IVar3 & 1) != 0) {
          local_c1 = 1;
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_absolutePathFromRelative__026ae2c0,&cf__gR_);
  _objc_retainAutoreleasedReturnValue();
  local_119 = 0;
  puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_118 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = 0;
  if (((ulong)puVar5 & 1) != 0) {
    bVar1 = local_119;
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((bVar1 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_packOrderMutable_026ae278);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_c1 = 1;
  }
  puVar4 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_128 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_128;
  FUN_01085b64();
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_endChangeBatch_026ae360);
  uVar6 = (uint)local_c1;
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return uVar6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

