// FUN_0004cd90 @ 0004cd90

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0004cd90(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  uint local_2d4;
  long *local_290;
  long *local_288;
  uint local_22c;
  long *local_1c8;
  uint local_1bc;
  undefined1 auStack_1b8 [64];
  int local_178;
  uint local_174;
  ulong local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  ulong local_128;
  int local_120;
  int local_11c;
  uint local_118;
  uint local_114;
  long *local_110;
  int local_104;
  int local_100;
  undefined4 local_fc;
  char *local_f8;
  int local_ec;
  uint local_e8;
  undefined1 local_e1;
  undefined *local_e0;
  int local_d4;
  long local_d0 [3];
  long *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar3 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(plVar3,param_1);
  FUN_00051280();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = local_b0;
  local_b8 = plVar3;
  FUN_0004fa34();
  _objc_retainAutoreleasedReturnValue();
  local_d0[0] = lVar8;
  if ((local_b8 != (long *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0), lVar8 != 0)) {
    uVar2 = (uint)local_d0[0];
    FUN_000512a0();
    if ((uVar2 & 1) != 0) {
      local_e0 = PTR_s_GetMsg_FromID_Limit_LeftCount__0269d230;
      plVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_respondsToSelector__026ca818,
                 PTR_s_GetMsg_FromID_Limit_LeftCount__0269d230);
      if (((ulong)plVar3 & 1) == 0) {
        local_e0 = PTR_s_GetDownMsg_FromID_Limit_LeftCoun_0269d9d8;
      }
      plVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,local_e0);
      if (((ulong)plVar3 & 1) == 0) {
        local_d4 = 1;
      }
      else {
        local_e1 = local_e0 == PTR_s_GetMsg_FromID_Limit_LeftCount__0269d230;
        local_e8 = 0;
        local_ec = 1;
        pcVar4 = "CMessageWrap";
        _objc_getClass();
        local_fc = 0x28;
        local_100 = 0;
        local_f8 = pcVar4;
        do {
          if (local_ec == 0) break;
          _objc_autoreleasePoolPush();
          if (((DAT_028c7b7a & 1) == 0) && ((DAT_028c7b78 & 1) != 0)) {
            puVar5 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            uVar2 = (uint)puVar6;
            local_22c = 1;
            if (((ulong)puVar6 & 1) != 0) {
              FUN_0004bf04();
              local_22c = uVar2 ^ 1;
            }
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if ((local_22c & 1) == 0) {
              puVar5 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,PTR_s_isQuotaExceeded_0269d9e0
                        );
              if (((ulong)puVar5 & 1) == 0) {
                local_104 = 0;
                plVar3 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b8,local_e0,local_d0[0],local_e8,0x28,&local_104);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_110 = plVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(plVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
                if ((((ulong)plVar3 & 1) == 0) ||
                   (plVar3 = local_110,
                   (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0),
                   plVar3 == (long *)0x0)) {
                  local_d4 = 3;
                }
                else {
                  local_100 = local_100 + 1;
                  FUN_00051654();
                  FUN_000515f0(plVar3);
                  local_114 = 0;
                  local_118 = 0xffffffff;
                  local_11c = 0;
                  local_120 = 0;
                  _memset(auStack_168,0,0x40);
                  plVar3 = local_110;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_288 = plVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (plVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,
                             auStack_a8,0x10);
                  if (local_288 != (long *)0x0) {
                    lVar8 = *local_158;
                    local_290 = (long *)0x0;
                    do {
                      do {
                        if (*local_158 - lVar8 != 0) {
                          _objc_enumerationMutation(*local_158 - lVar8,plVar3);
                        }
                        uVar9 = *(ulong *)(local_160 + (long)local_290 * 8);
                        local_128 = uVar9;
                        if (((DAT_028c7b7a & 1) != 0) || ((DAT_028c7b78 & 1) == 0)) {
                          local_d4 = 4;
                          goto LAB_0004d4f0;
                        }
                        if ((local_f8 != (char *)0x0) &&
                           ((*(code *)PTR__objc_msgSend_02578628)
                                      (uVar9,PTR_s_isKindOfClass__0269cd68,local_f8),
                           uVar7 = local_128, (uVar9 & 1) != 0)) {
                          uVar9 = local_128;
                          (*(code *)PTR__objc_retain_02578638)();
                          local_170 = uVar9;
                          FUN_000516c8();
                          local_174 = (uint)uVar7;
                          uVar9 = local_170;
                          FUN_000517a8();
                          local_178 = (int)uVar9;
                          if (local_114 < local_174) {
                            local_114 = local_174;
                          }
                          if ((local_174 != 0) && (local_174 < local_118)) {
                            local_118 = local_174;
                          }
                          if (local_11c == 0) {
                            local_11c = local_178;
                          }
                          local_120 = local_178;
                          FUN_00051888(local_d0[0],local_170,1);
                          _objc_storeStrong(&local_170,0);
                        }
                        local_290 = (long *)((long)local_290 + 1);
                      } while (local_290 < local_288);
                      local_288 = plVar3;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (plVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,
                                 auStack_a8,0x10);
                      local_290 = (long *)0x0;
                    } while (local_288 != (long *)0x0);
                  }
                  local_d4 = 0;
LAB_0004d4f0:
                  (*(code *)PTR__objc_release_02578630)();
                  iVar1 = local_11c;
                  if ((local_11c != 0) || (iVar1 = local_120, local_120 != 0)) {
                    FUN_00051654(iVar1);
                    _memcpy(auStack_1b8,plVar3,0x40);
                  }
                  if (local_118 == 0xffffffff) {
                    local_2d4 = 0;
                  }
                  else {
                    local_2d4 = local_118;
                  }
                  local_1bc = local_2d4;
                  if (local_2d4 != 0) {
                    dVar10 = (double)NEON_ucvtf((ulong)local_2d4);
                    dVar11 = dVar10;
                    FUN_0005217c(local_2d4);
                    if (dVar10 < dVar11) {
                      local_d4 = 3;
                      goto LAB_0004d708;
                    }
                  }
                  plVar3 = local_110;
                  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_lastObject_0269d200);
                  _objc_retainAutoreleasedReturnValue();
                  local_1c8 = plVar3;
                  FUN_000517a8();
                  uVar2 = (uint)plVar3;
                  if (uVar2 == 0) {
                    local_d4 = 3;
                  }
                  else if ((local_e8 == 0) || (uVar2 < local_e8)) {
                    if (uVar2 < 2) {
                      local_d4 = 3;
                    }
                    else {
                      local_e8 = uVar2 - 1;
                      local_ec = local_104;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (DAT_02323c90,PTR__OBJC_CLASS___NSThread_026ce0a8,
                                 PTR_s_sleepForTimeInterval__0269d9e8);
                      local_d4 = 0;
                    }
                  }
                  else {
                    local_d4 = 3;
                  }
                  _objc_storeStrong(&local_1c8,0);
                }
LAB_0004d708:
                _objc_storeStrong(&local_110,0);
              }
              else {
                local_d4 = 3;
              }
            }
            else {
              local_d4 = 3;
            }
          }
          else {
            local_d4 = 3;
          }
          _objc_autoreleasePoolPop();
        } while (local_d4 == 0);
        local_d4 = 0;
      }
      goto LAB_0004d750;
    }
  }
  local_d4 = 1;
LAB_0004d750:
  _objc_storeStrong(local_d0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

