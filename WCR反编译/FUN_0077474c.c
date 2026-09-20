// FUN_0077474c @ 0077474c

uint FUN_0077474c(uint param_1,byte param_2)

{
  long lVar1;
  u_int32_t uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  double dVar7;
  double dVar8;
  cfstringStruct *local_3c0;
  long local_3b0;
  long local_398;
  long local_388;
  cfstringStruct *local_358;
  cfstringStruct *local_348;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2c0;
  cfstringStruct *local_270;
  cfstringStruct *local_240;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  double local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  cfstringStruct *local_158;
  undefined *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined4 local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined4 local_b4;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  byte local_29;
  uint local_28;
  uint local_24;
  
  pcVar6 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_29 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar6;
  FUN_00775860();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_38;
  local_40 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stepCountLastReportDate_026a7ec0);
  _objc_retainAutoreleasedReturnValue();
  local_240 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_240 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58[0] = local_240;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stepCountLastReported_026a7ec8);
  pcVar3 = local_58[0];
  local_60 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_isEqualToString__0269ccc8,local_40);
  if (((ulong)pcVar3 & 1) == 0) {
    local_60 = (cfstringStruct *)0x0;
  }
  pcVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stepCountTodayPlanDate_026a7ed0);
  _objc_retainAutoreleasedReturnValue();
  local_270 = pcVar6;
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_270 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_isEqualToString__0269ccc8,local_40);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  if (((ulong)local_270 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setStepCountTodayFinal__026a7ed8,0);
  }
  pcVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stepCountInitial_026a7ee0);
  FUN_00775ae8();
  pcVar3 = local_38;
  local_68 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stepCountIncrementMin_026a7ee8);
  FUN_00775ae8();
  pcVar6 = local_38;
  local_70 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stepCountIncrementMax_026a7ef0);
  FUN_00775ae8();
  local_78 = pcVar6;
  if ((long)pcVar6 < (long)local_70) {
    local_80 = local_70;
    local_78 = local_70;
    local_70 = pcVar6;
  }
  pcVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stepCountTargetModeEnabled_026a7ef8);
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = (cfstringStruct *)(ulong)local_28;
    FUN_00775ae8();
    local_a0 = local_68;
    local_2c0 = pcVar6;
    if ((long)pcVar6 < (long)local_68) {
      local_2c0 = local_68;
    }
    local_a8 = local_2c0;
    local_90 = local_2c0;
    local_b0 = local_2c0;
    local_98 = pcVar6;
    local_88 = pcVar6;
    if (0 < (long)local_78) {
      local_b4 = 1;
      local_c0 = local_70;
      if ((long)local_70 < 2) {
        local_2d0 = (cfstringStruct *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        local_2d0 = local_70;
      }
      local_c8 = local_2d0;
      FUN_00775b44(local_2d0,local_78);
      pcVar6 = (cfstringStruct *)((long)&local_2d0->field0_0x0 + (long)&local_2c0->field0_0x0);
      FUN_00775ae8();
      local_b0 = pcVar6;
    }
    pcVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stepCountMaxCap_026a7f00);
    FUN_00775ae8();
    if ((0 < (long)pcVar6) && ((long)pcVar6 < (long)local_b0)) {
      local_b0 = pcVar6;
    }
    local_d0 = pcVar6;
    if ((local_29 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setStepCountLastReported__026a7f08,local_b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setStepCountLastReportDate__026a7f10,local_40);
    }
    local_24 = (uint)local_b0;
    local_d4 = 1;
  }
  else {
    pcVar6 = local_38;
    FUN_00775c04(local_38,local_40);
    local_e0 = pcVar6;
    if ((long)pcVar6 < 1) {
      local_24 = local_28;
      local_d4 = 1;
    }
    else if ((long)local_68 < (long)pcVar6) {
      if ((long)local_60 < (long)pcVar6) {
        local_e8 = local_68;
        if ((long)local_68 < (long)local_60) {
          local_e8 = local_60;
        }
        if (((long)local_e8 < (long)(ulong)local_28) && ((long)(ulong)local_28 < (long)pcVar6)) {
          local_e8 = (cfstringStruct *)(ulong)local_28;
        }
        if ((long)local_e8 < (long)pcVar6) {
          puVar4 = PTR__OBJC_CLASS___NSCalendar_026ce070;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
          local_f0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_components_fromDate__026a44c0,0x60);
          _objc_retainAutoreleasedReturnValue();
          local_f8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_hour_026a44c8);
          puVar5 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_minute_026a44d0);
          dVar7 = (double)(long)puVar4 + (double)(long)puVar5 / 60.0;
          FUN_00776054();
          pcVar6 = local_68;
          dVar8 = (double)(long)puVar5;
          if (dVar7 < dVar8) {
            if ((long)local_78 < 1) {
              if (8.0 < dVar7) {
                local_160 = puVar5 + -8;
                if ((long)local_160 < 1) {
                  local_160 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
                }
                puVar4 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_hour_026a44c8);
                local_168 = puVar4 + -8;
                if ((long)local_168 < 0) {
                  local_168 = (undefined1 *)0x0;
                }
                if ((long)local_160 <= (long)local_168) {
                  local_168 = local_160 + -1;
                }
                puVar4 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_minute_026a44d0);
                local_170 = ((double)(long)local_168 + (double)(long)puVar4 / 60.0) /
                            (double)(long)local_160;
                if (local_170 < 0.0) {
                  local_170 = 0.0;
                }
                if (1.0 < local_170) {
                  local_170 = 1.0;
                }
                local_158 = (cfstringStruct *)
                            ((long)&local_68->field0_0x0 +
                            (long)((double)((long)local_e0 - (long)local_68) * local_170));
                local_388 = 0;
                if (local_160 != (undefined1 *)0x0) {
                  local_388 = ((long)local_e0 - (long)local_68) / (long)local_160;
                }
                if (local_388 < 2) {
                  local_388 = 1;
                }
                pcVar6 = (cfstringStruct *)
                         ((long)&local_68->field0_0x0 + (long)local_168 * local_388);
                if ((long)local_158 < (long)pcVar6) {
                  local_158 = pcVar6;
                }
                if ((long)local_e0 < (long)local_158) {
                  local_158 = local_e0;
                }
              }
              else {
                uVar2 = _arc4random_uniform(0x50);
                local_158 = (cfstringStruct *)((long)&pcVar6->field0_0x0 + (ulong)uVar2);
                if ((long)local_e0 < (long)local_158) {
                  local_158 = local_e0;
                }
              }
              if ((local_29 & 1) == 0) {
                local_1a8 = local_e8;
                if ((long)local_e8 < (long)local_158) {
                  local_1a8 = local_158;
                }
                if ((long)local_e0 < (long)local_1a8) {
                  local_1a8 = local_e0;
                }
                local_24 = (uint)local_1a8;
              }
              else {
                local_1b0 = local_e8;
                if ((long)local_e8 < (long)local_158) {
                  local_1b8 = (cfstringStruct *)((long)&local_e8->field0_0x0 + 1);
                  if ((dVar7 < dVar8 - 0.5) && (0x78 < (long)local_158 - (long)local_e8)) {
                    local_398 = (long)((double)((long)local_158 - (long)local_e8) * 0.35);
                    if (local_398 < 2) {
                      local_398 = 1;
                    }
                    local_1b8 = (cfstringStruct *)((long)&local_e8->field0_0x0 + local_398);
                  }
                  pcVar6 = (cfstringStruct *)((long)local_1b8 - (long)local_158);
                  if ((cfstringStruct *)((long)local_1b8 - (long)local_158) != (cfstringStruct *)0x0
                      && (long)local_158 <= (long)local_1b8) {
                    local_1b8 = local_158;
                    pcVar6 = local_158;
                  }
                  FUN_00775b44(pcVar6,local_1b8,local_158);
                  local_1b0 = local_1b8;
                }
                if ((dVar8 - 1.0 <= dVar7) && ((long)local_1b0 < (long)local_e0)) {
                  if (dVar7 < dVar8 - 0.25) {
                    lVar1 = (long)local_e0 - (long)local_1b0;
                    local_3b0 = lVar1 / 4 + 1;
                    if (local_3b0 < 2) {
                      local_3b0 = 1;
                    }
                    uVar2 = _arc4random_uniform((u_int32_t)local_3b0);
                    local_3c0 = (cfstringStruct *)
                                ((long)&local_1b0->field0_0x0 + lVar1 / 2 + (ulong)uVar2);
                    if ((long)local_e0 < (long)local_3c0) {
                      local_3c0 = local_e0;
                    }
                    local_1b0 = local_3c0;
                  }
                  else {
                    local_1b0 = local_e0;
                  }
                }
                if ((long)local_1b0 < (long)local_e8) {
                  local_1b0 = local_e8;
                }
                if ((long)local_e0 < (long)local_1b0) {
                  local_1b0 = local_e0;
                }
                if (0x181f0 < (long)local_1b0) {
                  local_1b0 = (cfstringStruct *)0x181f0;
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_38,PTR_s_setStepCountLastReported__026a7f08,local_1b0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_38,PTR_s_setStepCountLastReportDate__026a7f10,local_40);
                local_24 = (uint)local_1b0;
              }
            }
            else if ((local_29 & 1) == 0) {
              local_24 = (uint)local_e8;
            }
            else {
              if ((long)local_70 < 2) {
                local_348 = (cfstringStruct *)((long)&MACH_HEADER.magic + 1);
              }
              else {
                local_348 = local_70;
              }
              FUN_00775b44(local_348,local_78);
              local_358 = (cfstringStruct *)
                          ((long)&local_348->field0_0x0 + (long)&local_e8->field0_0x0);
              if ((long)local_e0 < (long)local_358) {
                local_358 = local_e0;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_setStepCountLastReported__026a7f08,local_358);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_setStepCountLastReportDate__026a7f10,local_40);
              local_24 = (uint)local_358;
            }
          }
          else {
            if ((local_29 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_setStepCountLastReported__026a7f08,local_e0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_setStepCountLastReportDate__026a7f10,local_40);
            }
            local_24 = (uint)local_e0;
          }
          local_d4 = 1;
          _objc_storeStrong(&local_f8);
          _objc_storeStrong(&local_f0,0);
        }
        else {
          if ((local_29 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_setStepCountLastReported__026a7f08,pcVar6);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_setStepCountLastReportDate__026a7f10,local_40);
          }
          local_24 = (uint)local_e0;
          local_d4 = 1;
        }
      }
      else {
        if ((local_29 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setStepCountLastReported__026a7f08,pcVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setStepCountLastReportDate__026a7f10,local_40);
        }
        local_24 = (uint)local_e0;
        local_d4 = 1;
      }
    }
    else {
      if ((local_29 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setStepCountLastReported__026a7f08,pcVar6);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setStepCountLastReportDate__026a7f10,local_40);
      }
      local_24 = (uint)local_e0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return local_24;
}

