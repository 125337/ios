// FUN_005a6b94 @ 005a6b94

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005a6b94(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  long lVar7;
  cfstringStruct *local_250;
  ulong local_1a8;
  ulong local_1a0;
  long local_160;
  long local_158;
  byte local_149;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  long local_108;
  undefined *local_f0;
  long local_e8;
  cfstringStruct *local_e0;
  undefined1 local_d1;
  long local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = (cfstringStruct *)0x0;
  local_d1 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar1;
  _memset(auStack_148,0,0x40);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_1a0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
  if (local_1a0 != 0) {
    lVar6 = *local_138;
    local_1a8 = 0;
    do {
      do {
        if (*local_138 - lVar6 != 0) {
          _objc_enumerationMutation(*local_138 - lVar6,uVar2);
        }
        lVar7 = *(long *)(local_140 + local_1a8 * 8);
        local_108 = lVar7;
        FUN_005a71f0();
        local_149 = (byte)lVar7;
        lVar7 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_valueForKey__0269d128,&cf_type);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar7);
        lVar7 = local_108;
        local_158 = lVar3;
        if ((local_149 & 1) == 0) {
          if ((lVar3 == 2) || (lVar3 + -5 == 0)) {
            local_c8 = &cf_getFormatVideoPath;
            local_c0 = &cf_pathForSightData;
            local_b8 = &cf_pathForData;
            local_b0 = &cf_pathForExistData;
            puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_c8,4);
            _objc_retainAutoreleasedReturnValue();
            FUN_00599978();
            _objc_retainAutoreleasedReturnValue();
            local_160 = lVar7;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            lVar7 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
            if (lVar7 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_108);
            }
            _objc_storeStrong(&local_160,0);
          }
          else {
            FUN_005a7354(lVar3 + -5);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (lVar7 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_108);
            }
          }
        }
        else {
          FUN_005a7354();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar7 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_108);
          }
        }
        local_1a8 = local_1a8 + 1;
      } while (local_1a8 < local_1a0);
      local_1a0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      local_1a8 = 0;
    } while (local_1a0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar4 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (puVar4 == (undefined *)0x0) {
    pcVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_250 = &cf_ZSON_1Y_elOX_;
    }
    else {
      local_250 = local_e0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_250);
  }
  else {
    FUN_005a74a8(local_f0,0,0);
  }
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

