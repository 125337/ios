// dissolvePackKeepingItems:error: @ 01089868

/* Function Stack Size: 0x20 bytes */

bool WCRefineLocalEmoticonStore::dissolvePackKeepingItems_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_1a0;
  ulong local_198;
  undefined *local_168;
  undefined8 local_160;
  ID local_158;
  byte local_14a;
  undefined1 local_149;
  undefined *local_148;
  byte local_139;
  ID local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_e8;
  ID local_e0;
  undefined4 local_d4;
  ID *local_d0;
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
  uVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_d0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_a9 = 0;
    local_d4 = 1;
  }
  else {
    uVar2 = local_c8;
    FUN_01085b64();
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_beginChangeBatch_026ae358);
      IVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_listItemsInPack_sortMode__026ae348,local_c8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_e0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar1;
      _memset(auStack_130,0,0x40);
      IVar3 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_198 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      if (local_198 != 0) {
        lVar6 = *local_120;
        local_1a0 = 0;
        do {
          do {
            if (*local_120 - lVar6 != 0) {
              _objc_enumerationMutation(*local_120 - lVar6,IVar3);
            }
            lVar7 = *(long *)(local_128 + local_1a0 * 8);
            local_f0 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_relativePath_026ac370);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar7);
            puVar1 = local_e8;
            if (lVar4 != 0) {
              lVar4 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_relativePath_026ac370);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(lVar4);
            }
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1a0 = 0;
        } while (local_198 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar1 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
      if (puVar1 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_moveRelativePaths_toPack__026a3b18,local_e8,&cf___ungrouped__);
      }
      IVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_absolutePathFromRelative__026ae2c0,local_c8);
      _objc_retainAutoreleasedReturnValue();
      local_139 = 0;
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_138 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_148 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_138,&local_139);
      local_149 = SUB81(puVar1,0);
      local_14a = 1;
      if ((((ulong)puVar1 & 1) != 0) && ((local_139 & 1) != 0)) {
        local_158 = 0;
        local_160 = 0;
        puVar1 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_removeItemAtPath_error__0269f910,local_138,&local_160);
        _objc_storeStrong(&local_158,local_160);
        IVar3 = local_158;
        if (((ulong)puVar1 & 1) == 0) {
          if (local_d0 != (ID *)0x0) {
            _objc_retainAutorelease();
            *local_d0 = IVar3;
          }
          local_14a = 0;
        }
        _objc_storeStrong(&local_158,0);
      }
      if ((local_14a & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_removeIndexKeysForRel__026ae370,local_c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_saveIndex_026ae268);
        puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_168 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_isEqualToString__0269ccc8,local_c8);
        if (((ulong)puVar1 & 1) != 0) {
          puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        _objc_storeStrong(&local_168,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_endChangeBatch_026ae360);
      local_a9 = local_14a & 1;
      local_d4 = 1;
      _objc_storeStrong(&local_148);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_e0,0);
    }
    else {
      IVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_deleteUngroupedItems__026a3ab0,local_d0);
      local_a9 = (byte)IVar3 & 1;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

