// FUN_0032a650 @ 0032a650

cfstringStruct * FUN_0032a650(undefined8 param_1,byte param_2)

{
  ulong *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  cfstringStruct *local_1f8;
  ulong local_198;
  ulong local_190;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  byte local_131;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  cfstringStruct *local_e0;
  ulong *local_c8;
  int local_c0;
  byte local_b9;
  ulong local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = &local_b8;
  local_b8 = 0;
  _objc_storeStrong(puVar1,param_1);
  local_b9 = param_2;
  if (local_b8 == 0) {
    local_b0 = (cfstringStruct *)0xffffffffffffffff;
  }
  else {
    FUN_0032ad44();
    local_c8 = puVar1;
    if (puVar1 == (ulong *)0x0) {
      local_b0 = (cfstringStruct *)0xffffffffffffffff;
    }
    else {
      local_e0 = (cfstringStruct *)0xffffffffffffffff;
      _memset(auStack_128,0,0x40);
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_190 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_190 != 0) {
        lVar5 = *local_118;
        local_198 = 0;
        do {
          do {
            if (*local_118 - lVar5 != 0) {
              _objc_enumerationMutation(*local_118 - lVar5,uVar2);
            }
            uVar6 = *(ulong *)(local_120 + local_198 * 8);
            local_e8 = uVar6;
            FUN_0032adb8();
            if ((uVar6 & 1) != 0) {
              pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                         local_e8);
              _objc_retainAutoreleasedReturnValue();
              local_131 = 0;
              local_130 = pcVar3;
              do {
                pcVar3 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
                if (pcVar3 == (cfstringStruct *)0x0) break;
                pcVar3 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_firstObject_0269d1f8);
                _objc_retainAutoreleasedReturnValue();
                local_140 = pcVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_130,PTR_s_removeObjectAtIndex__0269d530,0);
                pcVar4 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_isKindOfClass__0269cd68,local_c8);
                pcVar3 = local_140;
                if (((ulong)pcVar4 & 1) == 0) {
LAB_0032ab18:
                  pcVar3 = local_130;
                  pcVar4 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addObjectsFromArray__0269d540);
                  (*(code *)PTR__objc_release_02578630)(pcVar4);
                  local_c0 = 0;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_148 = pcVar3;
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_text_0269ce68);
                  _objc_retainAutoreleasedReturnValue();
                  local_1f8 = pcVar3;
                  if (pcVar3 == (cfstringStruct *)0x0) {
                    local_1f8 = &cf___;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_150 = local_1f8;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                  pcVar3 = local_150;
                  FUN_0032af00();
                  if (((ulong)pcVar3 & 1) == 0) {
                    local_c0 = 0;
                  }
                  else {
                    pcVar3 = local_150;
                    FUN_0032b128();
                    local_e0 = pcVar3;
                    if ((local_b9 & 1) != 0) {
                      pcVar3 = local_148;
                      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_superview_026cab50);
                      _objc_retainAutoreleasedReturnValue();
                      local_158 = pcVar3;
                      if (pcVar3 != (cfstringStruct *)0x0) {
                        FUN_0031bdd8(pcVar3);
                      }
                      if ((long)local_158 - local_e8 != 0) {
                        FUN_0031bdd8((long)local_158 - local_e8,local_e8);
                      }
                      _objc_storeStrong(&local_158,0);
                    }
                    local_131 = 1;
                    local_c0 = 5;
                  }
                  _objc_storeStrong(&local_150);
                  _objc_storeStrong(&local_148,0);
                  if (local_c0 == 0) goto LAB_0032ab18;
                }
                _objc_storeStrong(&local_140,0);
              } while (local_c0 == 0);
              if ((local_131 & 1) == 0) {
                local_c0 = 0;
              }
              else {
                local_c0 = 2;
              }
              _objc_storeStrong(&local_130,0);
              if (local_c0 != 0) goto LAB_0032ac88;
            }
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_198 = 0;
        } while (local_190 != 0);
      }
      local_c0 = 0;
LAB_0032ac88:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_b0 = local_e0;
    }
  }
  local_c0 = 1;
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

