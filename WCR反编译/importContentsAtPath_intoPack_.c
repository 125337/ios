// importContentsAtPath:intoPack: @ 01093df4

/* Function Stack Size: 0x20 bytes */

long_long WCRefineLocalEmoticonStore::importContentsAtPath_intoPack_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  cfstringStruct *local_2c0;
  cfstringStruct *local_280;
  cfstringStruct *local_278;
  undefined *local_210;
  undefined *local_208;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c0;
  undefined *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined *local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  cfstringStruct *local_128;
  undefined *local_120;
  byte local_111;
  cfstringStruct *local_110;
  byte local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  bool local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  byte local_d5;
  int local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_4);
  pcVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_c8, FUN_0107d2f4(), ((ulong)pcVar2 & 1) != 0)) {
    local_b0 = (cfstringStruct *)0x0;
    local_d4 = 1;
    goto LAB_0109494c;
  }
  local_d5 = 0;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    local_b0 = (cfstringStruct *)0x0;
    local_d4 = 1;
    goto LAB_0109494c;
  }
  local_e9 = false;
  bVar1 = (local_d5 & 1) == 0;
  if (bVar1) {
    local_1c0 = (cfstringStruct *)0x0;
  }
  else {
    local_1c0 = local_c8;
    FUN_0108de44(local_c8,2);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_1c0;
  }
  local_e9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_1c0;
  if ((local_e9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  pcVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    if ((local_d5 & 1) == 0) {
      pcVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_180 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_isEqualToString__0269ccc8,&cf_zip);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar7 = local_c8;
        FUN_01092c58();
        pcVar6 = local_b8;
        pcVar2 = local_c8;
        if (((ulong)pcVar7 & 1) == 0) {
          pcVar2 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_isEqualToString__0269ccc8,&cf_txt);
          if ((((((ulong)pcVar2 & 1) != 0) ||
               (pcVar2 = local_180,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_180,PTR_s_isEqualToString__0269ccc8,&cf_text),
               ((ulong)pcVar2 & 1) != 0)) ||
              (pcVar2 = local_180,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_isEqualToString__0269ccc8,&cf_csv),
              ((ulong)pcVar2 & 1) != 0)) ||
             (pcVar2 = local_180,
             (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0),
             pcVar2 == (cfstringStruct *)0x0)) {
            pcVar2 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_280 = &cf___ungrouped__;
            }
            else {
              local_280 = local_d0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            pcVar6 = local_b8;
            pcVar2 = local_c8;
            local_188 = local_280;
            pcVar7 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
            uVar8 = 3;
            if (pcVar7 != (cfstringStruct *)0x0) {
              uVar8 = 1;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_importDouTuTextUnderPath_intoPac_026ae3e0,pcVar2,local_280,0,
                       uVar8);
            local_190 = pcVar6;
            if ((long)pcVar6 < 1) {
              pcVar2 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
              if (pcVar2 == (cfstringStruct *)0x0) {
                local_d4 = 0;
                uVar10 = 0;
              }
              else {
                local_b0 = (cfstringStruct *)0x0;
                uVar10 = 1;
                local_d4 = 1;
              }
            }
            else {
              uVar10 = 1;
              local_d4 = 1;
              local_b0 = pcVar6;
            }
            _objc_storeStrong(uVar10,&local_188,0);
            if (local_d4 != 0) goto LAB_0109492c;
          }
          pcVar2 = local_180;
          FUN_0107b0d4();
          if (((ulong)pcVar2 & 1) == 0) {
            local_b0 = (cfstringStruct *)0x0;
            local_d4 = 1;
          }
          else {
            puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                       local_c8);
            _objc_retainAutoreleasedReturnValue();
            local_198 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
            pcVar2 = local_b8;
            puVar3 = local_198;
            if (puVar4 == (undefined *)0x0) {
              local_b0 = (cfstringStruct *)0x0;
            }
            else {
              pcVar6 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
              if (pcVar7 == (cfstringStruct *)0x0) {
                local_2c0 = &cf___ungrouped__;
              }
              else {
                local_2c0 = local_d0;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_importData_fileName_intoPack_err_026abfa0,puVar3,pcVar6,
                         local_2c0,0);
              _objc_retainAutoreleasedReturnValue();
              local_b0 = (cfstringStruct *)(long)(int)(uint)(pcVar2 != (cfstringStruct *)0x0);
              (*(code *)PTR__objc_release_02578630)();
              (*(code *)PTR__objc_release_02578630)(pcVar6);
            }
            local_d4 = 1;
            _objc_storeStrong(&local_198,0);
          }
        }
        else {
          pcVar7 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
          if (pcVar7 == (cfstringStruct *)0x0) {
            local_278 = &cf___ungrouped__;
          }
          else {
            local_278 = local_d0;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_importDouTuSqliteUnderPath_intoP_026ae3d8,pcVar2,local_278,0);
          local_d4 = 1;
          local_b0 = pcVar6;
        }
      }
      else {
        pcVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_importZipAtPath__026ae3f8,local_c8);
        local_d4 = 1;
        local_b0 = pcVar2;
      }
LAB_0109492c:
      _objc_storeStrong(&local_180,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_beginChangeBatch_026ae358);
      pcVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      local_1d0 = local_b8;
      local_101 = 0;
      local_111 = 0;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar6 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        local_101 = 1;
        local_100 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d0,PTR_s_createPackNamed_error__026a3e00,pcVar6,0);
        _objc_retainAutoreleasedReturnValue();
        local_110 = local_1d0;
      }
      else {
        local_1d0 = local_d0;
      }
      local_111 = pcVar2 == (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_1d0;
      if ((local_111 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_110);
      }
      if ((local_101 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_100);
      }
      pcVar2 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        _objc_storeStrong(&local_f8,&cf___ungrouped__);
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_120 = puVar3;
      FUN_0108eee4(local_c8,puVar3);
      local_128 = (cfstringStruct *)0x0;
      _memset(auStack_170,0,0x40);
      puVar3 = local_120;
      (*(code *)PTR__objc_retain_02578638)();
      local_208 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10)
      ;
      if (local_208 != (undefined *)0x0) {
        lVar9 = *local_160;
        local_210 = (undefined *)0x0;
        do {
          do {
            if (*local_160 - lVar9 != 0) {
              _objc_enumerationMutation(*local_160 - lVar9,puVar3);
            }
            local_130 = *(undefined8 *)(local_168 + (long)local_210 * 8);
            puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                       local_130);
            _objc_retainAutoreleasedReturnValue();
            local_178 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
            pcVar2 = local_b8;
            puVar4 = local_178;
            if (puVar5 == (undefined *)0x0) {
              local_d4 = 3;
            }
            else {
              uVar10 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_importData_fileName_intoPack_err_026abfa0,puVar4,uVar10,
                         local_f8,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              (*(code *)PTR__objc_release_02578630)(uVar10);
              if (pcVar2 != (cfstringStruct *)0x0) {
                local_128 = (cfstringStruct *)((long)local_128 + 1);
              }
              local_d4 = 0;
            }
            _objc_storeStrong(&local_178,0);
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,
                     0x10);
          local_210 = (undefined *)0x0;
        } while (local_208 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_importDouTuSqliteUnderPath_intoP_026ae3d8,local_c8,local_f8);
      local_128 = (cfstringStruct *)((long)&pcVar2->field0_0x0 + (long)local_128);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_importDouTuTextUnderPath_intoPac_026ae3e0,local_c8,local_f8,0,3);
      local_128 = (cfstringStruct *)((long)&pcVar2->field0_0x0 + (long)local_128);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_endChangeBatch_026ae360);
      local_b0 = local_128;
      local_d4 = 1;
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_f8,0);
    }
  }
  else {
    pcVar2 = local_e0;
    FUN_0108e6b0(local_e0,local_d0);
    local_d4 = 1;
    local_b0 = pcVar2;
  }
  _objc_storeStrong(&local_e0,0);
LAB_0109494c:
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return (long_long)local_b0;
}

