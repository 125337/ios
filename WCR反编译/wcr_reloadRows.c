// wcr_reloadRows @ 01d8a9a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineSessionStatsActivityViewController::wcr_reloadRows
          (WCRefineSessionStatsActivityViewController *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  double in_d0;
  undefined8 uVar8;
  cfstringStruct *local_240;
  ulong local_1e0;
  ulong local_1d8;
  uint local_1b4;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  ID local_138;
  byte local_12d;
  uint local_12c;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  uint local_d0;
  uint local_cc;
  undefined *local_c8;
  uint local_bc;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_result_026c4d20);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR_WCRefineSessionStatsEngine_026ced48;
  if ((IVar1 & 1) != 0) {
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_result_026c4d20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fillPeopleSnapshot__026c4d58);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  puVar2 = PTR_WCRefineSessionStatsEngine_026ced48;
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_result_026c4d20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_activityRowsForSession__026c4d60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setAllRows__026c4d68);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_bc = (int)in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar8 = NEON_ucvtf((ulong)local_bc);
  puVar2 = PTR_WCRefineSessionStatsEngine_026ced48;
  local_c8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,PTR_WCRefineSessionStatsEngine_026ced48,
             PTR_s_windowStartForTimeRange_now__026af740,puVar3);
  local_cc = (uint)puVar2;
  if ((local_cc == 0) || (local_bc <= local_cc)) {
    local_1b4 = 0xffffffff;
  }
  else {
    local_1b4 = local_bc - local_cc;
  }
  local_d0 = local_1b4;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  _memset(auStack_120,0,0x40);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_allRows_026c4d70);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1d8 != 0) {
    lVar6 = *local_110;
    local_1e0 = 0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,IVar1);
        }
        uVar7 = *(ulong *)(local_118 + local_1e0 * 8);
        local_e0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        uVar7 = local_e0;
        local_128 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_last);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        local_12d = 1;
        IVar5 = local_b0;
        local_12c = (uint)uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filter_026c4d50);
        if (IVar5 == 1) {
          local_12d = local_128 == 0;
        }
        else {
          IVar5 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filter_026c4d50);
          if (IVar5 == 2) {
            local_12d = local_128 < 5;
          }
          else {
            IVar5 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filter_026c4d50);
            if (IVar5 == 3) {
              local_12d = local_128 < 10;
            }
            else {
              IVar5 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filter_026c4d50);
              if (IVar5 == 4) {
                if (local_12c == 0) {
                  local_12d = 0x93a7f < local_d0;
                }
                else {
                  local_12d = local_12c < local_bc && 0x93a7f < local_bc - local_12c;
                }
              }
              else {
                IVar5 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filter_026c4d50);
                if (IVar5 == 5) {
                  if (local_12c == 0) {
                    local_12d = 0x278cff < local_d0;
                  }
                  else {
                    local_12d = local_12c < local_bc && 0x278cff < local_bc - local_12c;
                  }
                }
              }
            }
          }
        }
        if ((local_12d & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
        }
        local_1e0 = local_1e0 + 1;
      } while (local_1e0 < local_1d8);
      local_1d8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1e0 = 0;
    } while (local_1d8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setVisibleRows__026c4d78,local_d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_styleChips_026c4d80);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_kickable_026c4d88);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_138 = IVar5;
  if (IVar5 == 0) {
    local_240 = &::cf___;
  }
  else {
    local_240 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf___);
    _objc_retainAutoreleasedReturnValue();
    local_148 = local_240;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = local_240;
  if (IVar5 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_148);
  }
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_kickButton_026c4d00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_kickButton_026c4d00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  uVar8 = 0x3ff0000000000000;
  if (local_138 == 0) {
    uVar8 = DAT_02323c78;
  }
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_kickButton_026c4d00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar8);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_table_026c4cf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_applyTitle_026c4cb0);
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

