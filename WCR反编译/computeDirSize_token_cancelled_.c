// computeDirSize:token:cancelled: @ 0197c284

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

unsigned_long_long
WCRFileDirSizeManager::computeDirSize_token_cancelled_
          (ID param_1,SEL param_2,ID param_3,ID param_4,bool *param_5)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  ID local_170;
  ulong local_168;
  undefined *local_160;
  undefined *local_158;
  ulong local_150;
  undefined4 local_144;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  bool *local_d0;
  ulong local_c8;
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
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_d0 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_enumeratorAtPath__026ad0c8,local_c0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_e8 = (undefined *)0x0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_dictionaryWithObject_forKey__0269fe88,puVar3,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar4 = PTR_WCRFileManagerState_026cf1c8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar4;
  _memset(auStack_140,0,0x40);
  puVar4 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
  if (local_1d8 != (undefined *)0x0) {
    lVar8 = *local_130;
    local_1e0 = (undefined *)0x0;
    do {
      do {
        if (*local_130 - lVar8 != 0) {
          _objc_enumerationMutation(*local_130 - lVar8,puVar4);
        }
        local_100 = *(undefined8 *)(local_138 + (long)local_1e0 * 8);
        uVar5 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isCancelled_026a1c20);
        if ((uVar5 & 1) != 0) {
          if (local_d0 != (bool *)0x0) {
            *(undefined1 *)local_d0 = 1;
          }
          local_144 = 2;
          goto LAB_0197c914;
        }
        uVar5 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_100);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_f8;
        local_150 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_isPathHidden__026ba1f0,uVar5);
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_fileAttributes_026ba260);
          _objc_retainAutoreleasedReturnValue();
          local_158 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileType_026ba268);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (((ulong)puVar3 & 1) == 0) {
            puVar2 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_fileType_026ba268);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (((ulong)puVar3 & 1) != 0) {
              puVar2 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_fileSize_026a1640);
              local_e8 = local_e8 + (long)puVar2;
              uVar5 = local_150;
              local_160 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_stringByDeletingLastPathComponen_0269fb90);
              _objc_retainAutoreleasedReturnValue();
              local_168 = uVar5;
              while (uVar5 = local_168, FUN_0197ca78(local_168,local_c0),
                    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038, (uVar5 & 1) != 0) {
                puVar3 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_objectForKeyedSubscript__0269d098,local_168);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                           puVar6 + (long)local_160);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_168);
                (*(code *)PTR__objc_release_02578630)(puVar2);
                (*(code *)PTR__objc_release_02578630)(puVar3);
                uVar5 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_168,PTR_s_isEqualToString__0269ccc8,local_c0);
                if ((uVar5 & 1) != 0) break;
                uVar7 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_168,PTR_s_stringByDeletingLastPathComponen_0269fb90);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = local_168;
                local_168 = uVar7;
                (*(code *)PTR__objc_release_02578630)(uVar5);
              }
              _objc_storeStrong(&local_168,0);
            }
          }
          else {
            puVar2 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0,PTR_s_objectForKeyedSubscript__0269d098,local_150);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (puVar2 == (undefined *)0x0) {
              puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_150);
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
          }
          _objc_storeStrong(&local_158,0);
          local_144 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_skipDescendants_026b0be8);
          local_144 = 3;
        }
        _objc_storeStrong(&local_150,0);
        local_1e0 = local_1e0 + 1;
      } while (local_1e0 < local_1d8);
      local_1d8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10)
      ;
      local_1e0 = (undefined *)0x0;
    } while (local_1d8 != (undefined *)0x0);
  }
  local_144 = 0;
LAB_0197c914:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar5 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isCancelled_026a1c20);
  IVar1 = local_b0;
  puVar4 = local_f0;
  if ((uVar5 & 1) == 0) {
    local_190 = PTR___NSConcreteGlobalBlock_02578658;
    local_188 = 0xd0800000;
    local_184 = 0;
    local_180 = FUN_0197cc88;
    local_178 = &DAT_025860f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_190);
    _objc_storeStrong(&local_170,0);
  }
  puVar4 = local_e8;
  local_144 = 1;
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return (unsigned_long_long)puVar4;
}

