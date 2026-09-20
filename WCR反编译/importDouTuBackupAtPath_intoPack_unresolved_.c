// importDouTuBackupAtPath:intoPack:unresolved: @ 010959f8

/* Function Stack Size: 0x28 bytes */

long_long WCRefineLocalEmoticonStore::importDouTuBackupAtPath_intoPack_unresolved_
                    (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ID IVar9;
  long lVar10;
  undefined *local_338;
  undefined *local_330;
  undefined *local_2c8;
  undefined *local_2c0;
  cfstringStruct *local_250;
  undefined *local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined *local_190;
  ulong local_188;
  ulong local_180;
  ID local_178;
  byte local_169;
  cfstringStruct *local_168;
  undefined4 local_15c;
  undefined8 local_158;
  cfstringStruct *local_150;
  ulong local_148;
  SEL local_140;
  ID local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  local_150 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_150,param_4);
  local_158 = 0;
  _objc_storeStrong(&local_158,param_5);
  uVar1 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_130 = 0;
    local_15c = 1;
  }
  else {
    pcVar2 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_250 = &cf___ungrouped__;
    }
    else {
      local_250 = local_150;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = local_250;
    local_169 = 0;
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      local_130 = 0;
      local_15c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_beginChangeBatch_026ae358);
      local_178 = 0;
      uVar1 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_180 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_isEqualToString__0269ccc8,&cf_zip);
      if ((uVar1 & 1) == 0) {
        if ((local_169 & 1) == 0) {
          uVar1 = local_148;
          FUN_01092c58();
          if ((uVar1 & 1) == 0) {
            IVar9 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_importDouTuTextUnderPath_intoPac_026ae3e0,local_148,local_168
                       ,local_158,1);
            local_178 = IVar9;
          }
          else {
            IVar9 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_importDouTuSqliteUnderPath_intoP_026ae3d8,local_148,local_168
                       ,local_158);
            local_178 = IVar9;
          }
        }
        else {
          IVar9 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_importDouTuSqliteUnderPath_intoP_026ae3d8,local_148,local_168,
                     local_158);
          IVar6 = local_138;
          local_178 = IVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_importDouTuTextUnderPath_intoPac_026ae3e0,local_148,local_168,
                     local_158,3);
          local_178 = local_178 + IVar6;
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_1e8 = puVar3;
          FUN_0108eee4(local_148,puVar3);
          _memset(auStack_230,0,0x40);
          puVar3 = local_1e8;
          (*(code *)PTR__objc_retain_02578638)();
          local_330 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,
                     0x10);
          if (local_330 != (undefined *)0x0) {
            lVar10 = *local_220;
            local_338 = (undefined *)0x0;
            do {
              do {
                if (*local_220 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_220 - lVar10,puVar3);
                }
                local_1f0 = *(undefined8 *)(local_228 + (long)local_338 * 8);
                puVar7 = PTR__OBJC_CLASS___NSData_026ce1d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                           local_1f0);
                _objc_retainAutoreleasedReturnValue();
                local_238 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_length_0269cca0);
                IVar9 = local_138;
                puVar4 = local_238;
                if (puVar7 == (undefined *)0x0) {
                  local_15c = 5;
                }
                else {
                  uVar8 = local_1f0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_lastPathComponent_026ca780);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar9,PTR_s_importData_fileName_intoPack_err_026abfa0,puVar4,uVar8,
                             local_168,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_release_02578630)();
                  (*(code *)PTR__objc_release_02578630)(uVar8);
                  if (IVar9 != 0) {
                    local_178 = local_178 + 1;
                  }
                  local_15c = 0;
                }
                _objc_storeStrong(&local_238,0);
                local_338 = local_338 + 1;
              } while (local_338 < local_330);
              local_330 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,
                         auStack_128,0x10);
              local_338 = (undefined *)0x0;
            } while (local_330 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_1e8,0);
        }
      }
      else {
        _NSTemporaryDirectory();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_wcr_dt___)
        ;
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_188 = uVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_148;
        FUN_0108db5c(local_148,local_188);
        if ((uVar1 & 1) != 0) {
          IVar9 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_importDouTuSqliteUnderPath_intoP_026ae3d8,local_188,local_168,
                     local_158);
          IVar6 = local_138;
          local_178 = IVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_importDouTuTextUnderPath_intoPac_026ae3e0,local_188,local_168,
                     local_158,3);
          local_178 = local_178 + IVar6;
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_190 = puVar3;
          FUN_0108eee4(local_188,puVar3);
          _memset(auStack_1d8,0,0x40);
          puVar3 = local_190;
          (*(code *)PTR__objc_retain_02578638)();
          local_2c0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                     0x10);
          if (local_2c0 != (undefined *)0x0) {
            lVar10 = *local_1c8;
            local_2c8 = (undefined *)0x0;
            do {
              do {
                if (*local_1c8 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_1c8 - lVar10,puVar3);
                }
                local_198 = *(undefined8 *)(local_1d0 + (long)local_2c8 * 8);
                puVar7 = PTR__OBJC_CLASS___NSData_026ce1d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                           local_198);
                _objc_retainAutoreleasedReturnValue();
                local_1e0 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_length_0269cca0);
                IVar9 = local_138;
                puVar4 = local_1e0;
                if (puVar7 == (undefined *)0x0) {
                  local_15c = 3;
                }
                else {
                  uVar8 = local_198;
                  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_lastPathComponent_026ca780);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar9,PTR_s_importData_fileName_intoPack_err_026abfa0,puVar4,uVar8,
                             local_168,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_release_02578630)();
                  (*(code *)PTR__objc_release_02578630)(uVar8);
                  if (IVar9 != 0) {
                    local_178 = local_178 + 1;
                  }
                  local_15c = 0;
                }
                _objc_storeStrong(&local_1e0,0);
                local_2c8 = local_2c8 + 1;
              } while (local_2c8 < local_2c0);
              local_2c0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,
                         auStack_a8,0x10);
              local_2c8 = (undefined *)0x0;
            } while (local_2c0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_190,0);
        }
        _objc_storeStrong(&local_188,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_endChangeBatch_026ae360);
      local_130 = local_178;
      local_15c = 1;
      _objc_storeStrong(&local_180,0);
    }
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_130;
}

