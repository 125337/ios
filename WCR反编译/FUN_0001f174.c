// FUN_0001f174 @ 0001f174

void FUN_0001f174(double param_1,double param_2,undefined8 param_3,qword *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  qword *pqVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  char *local_3c0;
  ulong local_330;
  char *local_308;
  char *local_300;
  qword *local_280;
  qword *local_278;
  char *local_258;
  bool local_1d1;
  char *local_1d0;
  char *local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  byte local_169;
  char *local_160;
  int local_154;
  char *local_150;
  ulong local_148;
  qword *local_140;
  undefined4 local_134;
  qword *local_130;
  int local_124;
  int local_120;
  uint local_11c;
  qword *local_118;
  undefined *local_110;
  byte local_101;
  char *local_100;
  char *local_f8;
  char *local_f0;
  int local_e8;
  undefined1 *local_d8;
  double local_d0;
  double local_c8;
  qword *local_c0;
  long local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d0 = param_2;
  local_c8 = param_1;
  local_c0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = local_b8;
  local_d8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  local_b0 = local_d8;
  if (lVar11 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = 1;
    goto LAB_0001ffa8;
  }
  pcVar4 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_101 = 0;
  local_f0 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
  if (((ulong)pcVar4 & 1) == 0) {
LAB_0001f394:
    local_258 = (char *)0x0;
  }
  else {
    pcVar4 = "CMessageMgr";
    _objc_getClass();
    local_258 = local_f0;
    puVar3 = PTR_s_getService__0269d170;
    if (pcVar4 == (char *)0x0) goto LAB_0001f394;
    pcVar4 = "CMessageMgr";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(local_258,puVar3,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = local_258;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_258;
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  local_110 = PTR_s_GetMsg_FromID_Limit_LeftCount__0269d230;
  if ((local_f8 == (char *)0x0) ||
     (pcVar4 = local_f8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_f8,PTR_s_respondsToSelector__026ca818,
                PTR_s_GetMsg_FromID_Limit_LeftCount__0269d230), ((ulong)pcVar4 & 1) == 0)) {
    puVar5 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar5;
  }
  else {
    if (local_c0 == (qword *)0x0) {
      local_278 = &segment_command_00000ba0.vmaddr;
    }
    else {
      local_278 = local_c0;
    }
    local_118 = local_278;
    if (&segment_command_00000ba0.vmaddr < local_278) {
      local_118 = &segment_command_00000ba0.vmaddr;
    }
    local_11c = 0;
    local_120 = 1;
    local_124 = 200;
    pqVar10 = local_c0;
    if ((local_c0 != (qword *)0x0) &&
       (pqVar10 = local_c0 + -0x19, local_c0 < section_000000b8.segname)) {
      local_130 = local_c0 + 5;
      local_134 = 0x50;
      local_280 = local_130;
      if (local_130 <= (undefined1 *)((long)&segment_command_00000020.fileoff + 7)) {
        local_280 = &segment_command_00000020.filesize;
      }
      local_140 = local_280;
      local_124 = (int)local_280;
      pqVar10 = (qword *)(ulong)(local_124 - 200U);
      if (local_124 - 200U != 0 && 199 < local_124) {
        pqVar10 = (qword *)section_000000b8.segname;
        local_124 = 200;
      }
    }
    local_148 = 0;
    pcVar4 = "CMessageWrap";
    _objc_getClass(pqVar10);
    local_150 = pcVar4;
    do {
      bVar1 = false;
      if ((local_120 != 0) && (bVar1 = false, local_148 < 0x28)) {
        puVar5 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
        bVar1 = puVar5 < local_118;
      }
      if (!bVar1) break;
      _objc_autoreleasePoolPush();
      local_148 = local_148 + 1;
      local_154 = 0;
      local_160 = (char *)0x0;
      pcVar6 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,local_110,local_b8,local_11c,local_124,&local_154);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_160;
      local_160 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_160;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((((ulong)pcVar4 & 1) == 0) ||
         (pcVar4 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0),
         pcVar4 == (char *)0x0)) {
        local_e8 = 3;
      }
      else {
        local_169 = 0;
        _memset(auStack_1b8,0,0x40);
        pcVar4 = local_160;
        (*(code *)PTR__objc_retain_02578638)();
        local_300 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        if (local_300 != (char *)0x0) {
          lVar11 = *local_1a8;
          local_308 = (char *)0x0;
          do {
            do {
              if (*local_1a8 - lVar11 != 0) {
                _objc_enumerationMutation(*local_1a8 - lVar11,pcVar4);
              }
              uVar12 = *(ulong *)(local_1b0 + (long)local_308 * 8);
              local_178 = uVar12;
              (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,local_150);
              if ((uVar12 & 1) == 0) {
                local_330 = 0;
              }
              else {
                local_330 = local_178;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1c0 = local_330;
              if (local_330 == 0) {
                lVar13 = 6;
                local_e8 = 6;
              }
              else if (((local_d0 <= 0.0) ||
                       ((*(code *)PTR__objc_msgSend_02578628)
                                  (local_330,PTR_s_m_uiCreateTime_0269d208), (int)local_330 == 0))
                      || (uVar12 = local_1c0,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_1c0,PTR_s_m_uiCreateTime_0269d208),
                         (double)(uVar12 & 0xffffffff) <= local_d0)) {
                if (((local_c8 <= 0.0) ||
                    (uVar12 = local_1c0,
                    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_m_uiCreateTime_0269d208),
                    (int)uVar12 == 0)) ||
                   (uVar12 = local_1c0,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_m_uiCreateTime_0269d208),
                   local_c8 <= (double)(uVar12 & 0xffffffff))) {
                  uVar12 = local_1c0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_m_uiMessageType_0269d0a8);
                  if ((int)uVar12 == 1) {
                    uVar12 = local_1c0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_m_nsContent_0269d0a0);
                    _objc_retainAutoreleasedReturnValue();
                    uVar7 = uVar12;
                    FUN_0001a2e4();
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(uVar7);
                    (*(code *)PTR__objc_release_02578630)(uVar12);
                    if (uVar8 == 0) {
                      lVar13 = 6;
                      local_e8 = 6;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_d8,PTR_s_addObject__0269d180,local_1c0);
                      puVar5 = local_d8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
                      lVar13 = (long)puVar5 - (long)local_118;
                      if (puVar5 < local_118) {
                        local_e8 = 0;
                      }
                      else {
                        lVar13 = 5;
                        local_e8 = 5;
                      }
                    }
                  }
                  else {
                    lVar13 = 6;
                    local_e8 = 6;
                  }
                }
                else {
                  local_169 = 1;
                  lVar13 = 5;
                  local_e8 = 5;
                }
              }
              else {
                lVar13 = 6;
                local_e8 = 6;
              }
              _objc_storeStrong(lVar13,&local_1c0,0);
              if ((local_e8 != 0) && (local_e8 != 6)) goto LAB_0001fc14;
              local_308 = local_308 + 1;
            } while (local_308 < local_300);
            local_300 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8
                       ,0x10);
            local_308 = (char *)0x0;
          } while (local_300 != (char *)0x0);
        }
        local_e8 = 0;
LAB_0001fc14:
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        if (((local_169 & 1) == 0) &&
           (puVar5 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
           puVar5 < local_118)) {
          pcVar4 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1d1 = ((ulong)pcVar6 & 1) == 0;
          if (local_1d1) {
            local_3c0 = (char *)0x0;
          }
          else {
            local_3c0 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_lastObject_0269d200);
            _objc_retainAutoreleasedReturnValue();
            local_1d0 = local_3c0;
          }
          local_1d1 = !local_1d1;
          (*(code *)PTR__objc_retain_02578638)();
          local_1c8 = local_3c0;
          if (local_1d1) {
            (*(code *)PTR__objc_release_02578630)(local_1d0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_m_uiMesLocalID_0269d238);
          uVar2 = (uint)pcVar4;
          if ((uVar2 < 2) || ((local_11c != 0 && (local_11c <= uVar2)))) {
            local_e8 = 3;
          }
          else {
            local_11c = uVar2 - 1;
            local_120 = local_154;
            local_e8 = 0;
          }
          _objc_storeStrong(&local_1c8,0);
        }
        else {
          local_e8 = 3;
        }
      }
      _objc_storeStrong(&local_160,0);
      _objc_autoreleasePoolPop();
    } while (local_e8 == 0);
    puVar5 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_reverseObjectEnumerator_0269d220);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar9;
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  local_e8 = 1;
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
LAB_0001ffa8:
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

