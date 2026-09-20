// FUN_0001ea48 @ 0001ea48

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0001ea48(double param_1,double param_2,undefined8 param_3,qword *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong local_1d8;
  ulong local_1a0;
  ulong local_198;
  qword *local_178;
  int local_13c;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  qword *local_e8;
  undefined1 *local_d0;
  double local_c8;
  double local_c0;
  qword *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = param_2;
  local_c0 = param_1;
  local_b8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  if (local_b8 == (qword *)0x0) {
    local_178 = &segment_command_00000ba0.vmaddr;
  }
  else {
    local_178 = local_b8;
  }
  local_e8 = local_178;
  if (&segment_command_00000ba0.vmaddr < local_178) {
    local_e8 = &segment_command_00000ba0.vmaddr;
  }
  local_d0 = puVar1;
  _memset(auStack_130,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reverseObjectEnumerator_0269d220);
  _objc_retainAutoreleasedReturnValue();
  local_198 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_198 != 0) {
    lVar8 = *local_120;
    local_1a0 = 0;
    do {
      do {
        if (*local_120 - lVar8 != 0) {
          _objc_enumerationMutation(*local_120 - lVar8,uVar2);
        }
        uVar9 = *(ulong *)(local_128 + local_1a0 * 8);
        pcVar3 = "CMessageWrap";
        local_f0 = uVar9;
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,pcVar3);
        if ((uVar9 & 1) == 0) {
          local_1d8 = 0;
        }
        else {
          local_1d8 = local_f0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_138 = local_1d8;
        if ((local_1d8 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_m_uiMessageType_0269d0a8),
           (int)local_1d8 != 1)) {
          lVar10 = 3;
          local_13c = 3;
        }
        else if (((local_c8 <= 0.0) ||
                 (uVar9 = local_138,
                 (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_m_uiCreateTime_0269d208),
                 (int)uVar9 == 0)) ||
                (uVar9 = local_138,
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_m_uiCreateTime_0269d208),
                (double)(uVar9 & 0xffffffff) <= local_c8)) {
          if (((local_c0 <= 0.0) ||
              (uVar9 = local_138,
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_m_uiCreateTime_0269d208),
              (int)uVar9 == 0)) ||
             (uVar9 = local_138,
             (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_m_uiCreateTime_0269d208),
             local_c0 <= (double)(uVar9 & 0xffffffff))) {
            uVar9 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_m_nsContent_0269d0a0);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar9;
            FUN_0001a2e4();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            if (uVar5 == 0) {
              lVar10 = 3;
              local_13c = 3;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_138);
              puVar6 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
              lVar10 = (long)puVar6 - (long)local_e8;
              if (puVar6 < local_e8) {
                local_13c = 0;
              }
              else {
                lVar10 = 2;
                local_13c = 2;
              }
            }
          }
          else {
            lVar10 = 2;
            local_13c = 2;
          }
        }
        else {
          lVar10 = 3;
          local_13c = 3;
        }
        _objc_storeStrong(lVar10,&local_138,0);
        if ((local_13c != 0) && (local_13c != 3)) goto LAB_0001f018;
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_1a0 = 0;
    } while (local_198 != 0);
  }
LAB_0001f018:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_reverseObjectEnumerator_0269d220);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

