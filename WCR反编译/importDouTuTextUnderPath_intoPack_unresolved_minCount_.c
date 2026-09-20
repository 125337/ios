// importDouTuTextUnderPath:intoPack:unresolved:minCount: @ 010901ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x30 bytes */

long_long WCRefineLocalEmoticonStore::importDouTuTextUnderPath_intoPack_unresolved_minCount_
                    (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  undefined *local_220;
  long_long local_210;
  long_long local_208;
  undefined *local_1e0;
  undefined *local_1d8;
  long_long local_1b8;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  long_long local_108;
  long_long local_100;
  byte local_f1;
  undefined *local_f0;
  undefined4 local_e4;
  long_long local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  long_long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_5);
  lVar6 = local_c8;
  local_e0 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_b0 = 0;
    local_e4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 0;
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_f0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_b0 = 0;
    }
    else {
      if ((local_f1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_c8);
      }
      else {
        FUN_01090784(local_c8,local_f0,0);
      }
      local_100 = 0;
      if ((long)local_e0 < 1) {
        local_1b8 = 1;
      }
      else {
        local_1b8 = local_e0;
      }
      local_108 = local_1b8;
      _memset(auStack_150,0,0x40);
      puVar2 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      if (local_1d8 != (undefined *)0x0) {
        lVar6 = *local_140;
        local_1e0 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar6 != 0) {
              _objc_enumerationMutation(*local_140 - lVar6,puVar2);
            }
            local_110 = *(undefined8 *)(local_148 + (long)local_1e0 * 8);
            puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,
                       PTR_s_dataWithContentsOfFile_options_e_026a09f0,local_110,1,0);
            _objc_retainAutoreleasedReturnValue();
            if ((local_f1 & 1) == 0) {
              local_210 = local_108;
            }
            else {
              if ((long)local_108 < 4) {
                local_208 = 3;
              }
              else {
                local_208 = local_108;
              }
              local_210 = local_208;
            }
            local_158 = puVar3;
            FUN_01090c8c(puVar3,local_210);
            _objc_retainAutoreleasedReturnValue();
            local_160 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
            puVar4 = local_160;
            if (puVar3 != (undefined *)0x0) {
              puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
              bVar1 = ((ulong)puVar4 & 1) == 0;
              if (bVar1) {
                local_220 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_mutableCopy_0269d8a0);
                local_170 = local_220;
              }
              else {
                local_220 = local_160;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_168 = local_220;
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_170);
              }
              if (local_d8 != 0) {
                FUN_0109165c(local_168);
              }
              IVar5 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_importDouTuRecords_intoPack_unre_026ae3f0,local_168,local_d0
                         ,local_d8);
              local_100 = local_100 + IVar5;
              _objc_storeStrong(&local_168,0);
            }
            _objc_storeStrong(&local_160);
            _objc_storeStrong(&local_158,0);
            local_1e0 = local_1e0 + 1;
          } while (local_1e0 < local_1d8);
          local_1d8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_1e0 = (undefined *)0x0;
        } while (local_1d8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_b0 = local_100;
    }
    local_e4 = 1;
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

