// FUN_002553c8 @ 002553c8

/* WARNING: Removing unreachable block (ram,0x0025557c) */
/* WARNING: Removing unreachable block (ram,0x00255618) */
/* WARNING: Removing unreachable block (ram,0x0025563c) */
/* WARNING: Removing unreachable block (ram,0x00255660) */
/* WARNING: Removing unreachable block (ram,0x00255674) */
/* WARNING: Removing unreachable block (ram,0x002557ec) */
/* WARNING: Removing unreachable block (ram,0x00255824) */
/* WARNING: Removing unreachable block (ram,0x00255788) */
/* WARNING: Removing unreachable block (ram,0x00255928) */
/* WARNING: Removing unreachable block (ram,0x00255954) */
/* WARNING: Removing unreachable block (ram,0x0025594c) */
/* WARNING: Removing unreachable block (ram,0x00255958) */
/* WARNING: Removing unreachable block (ram,0x00255974) */
/* WARNING: Removing unreachable block (ram,0x002559bc) */
/* WARNING: Removing unreachable block (ram,0x002559c0) */
/* WARNING: Removing unreachable block (ram,0x00255a8c) */
/* WARNING: Removing unreachable block (ram,0x00255b98) */

void FUN_002553c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_660;
  ulong local_610;
  ulong local_608;
  cfstringStruct *local_5e0;
  ulong local_508;
  ulong local_500;
  cfstringStruct *local_4d8;
  long local_3b8;
  ulong local_358;
  ulong local_350;
  undefined1 auStack_348 [8];
  long local_340;
  long *local_338;
  ulong local_308;
  char *local_300;
  char *local_2f8;
  byte local_2e9;
  long local_2e8;
  long local_2e0;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  long *local_2c8;
  long local_298;
  char *local_290;
  char *local_288;
  undefined *local_1e0;
  undefined4 local_1d8;
  long local_1c8;
  long local_1c0;
  ulong local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1b0,param_1);
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_2);
  local_1c0 = 0;
  _objc_storeStrong(&local_1c0,param_3);
  lVar8 = local_1c0;
  FUN_00256860();
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = lVar8;
  if (lVar8 == 0) {
    local_1d8 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_1e0 = puVar3;
    if (puVar3 + -1 == (undefined *)0x0) {
      if (local_1c0 == 0) {
        local_3b8 = local_1c8;
      }
      else {
        local_3b8 = local_1c0;
      }
      FUN_00256f00(local_1b0,local_1b8,local_3b8);
      local_1d8 = 1;
    }
    else {
      pcVar4 = "WCUIActionSheet";
      _objc_getClass(puVar3 + -1);
      local_288 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "WCActionSheet";
        _objc_getClass();
        local_2f8 = pcVar4;
        if (pcVar4 == (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_QUS);
          local_1d8 = 1;
        }
        else {
          _objc_alloc();
          if (local_1b0 == (cfstringStruct *)0x0) {
            local_5e0 = &cf___;
          }
          else {
            local_5e0 = local_1b0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithTitle__0269d2f8,local_5e0);
          local_300 = pcVar4;
          _memset(auStack_348,0,0x40);
          uVar1 = local_1b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_608 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,auStack_1a8,
                     0x10);
          if (local_608 != 0) {
            lVar8 = *local_338;
            local_610 = 0;
            do {
              do {
                if (*local_338 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_338 - lVar8,uVar1);
                }
                uVar10 = *(ulong *)(local_340 + local_610 * 8);
                local_308 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = local_308;
                local_350 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_308,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = local_308;
                local_358 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_308,PTR_s_objectForKeyedSubscript__0269d098,&cf_destructive);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar10);
                uVar10 = local_350;
                (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_length_0269cca0);
                if (uVar10 == 0) {
                  local_1d8 = 7;
                }
                else {
                  if ((uVar6 & 1) == 0) {
                    local_660 = PTR_s_addButtonWithTitle_eventAction__026a0f60;
                  }
                  else {
                    local_660 = PTR_s_addDestructiveButtonWithTitle_ev_026a0f58;
                  }
                  pcVar7 = local_300;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_300,PTR_s_respondsToSelector__026ca818,local_660);
                  pcVar4 = local_300;
                  uVar6 = local_350;
                  if (((ulong)pcVar7 & 1) != 0) {
                    uVar10 = local_358;
                    _objc_retainBlock();
                    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,local_660,uVar6);
                    (*(code *)PTR__objc_release_02578630)(uVar10);
                  }
                  local_1d8 = 0;
                }
                _objc_storeStrong(&local_358);
                _objc_storeStrong(&local_350,0);
                local_610 = local_610 + 1;
              } while (local_610 < local_608);
              local_608 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,
                         auStack_1a8,0x10);
              local_610 = 0;
            } while (local_608 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar1);
          pcVar4 = local_300;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_300,PTR_s_respondsToSelector__026ca818,
                     PTR_s_setCancelButtonTitle_eventAction_026a0f68);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_300,PTR_s_setCancelButtonTitle_eventAction_026a0f68,&cf_Sm,0);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_showInView__0269d310,local_1c8);
          _objc_storeStrong(&local_300,0);
          local_1d8 = 0;
        }
      }
      else {
        _objc_alloc();
        if (local_1b0 == (cfstringStruct *)0x0) {
          local_4d8 = &cf___;
        }
        else {
          local_4d8 = local_1b0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithTitle__0269d2f8,local_4d8);
        local_290 = pcVar4;
        _memset(auStack_2d8,0,0x40);
        uVar1 = local_1b8;
        (*(code *)PTR__objc_retain_02578638)();
        local_500 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_128,
                   0x10);
        if (local_500 != 0) {
          lVar8 = *local_2c8;
          local_508 = 0;
          do {
            do {
              if (*local_2c8 - lVar8 != 0) {
                _objc_enumerationMutation(*local_2c8 - lVar8,uVar1);
              }
              lVar9 = *(long *)(local_2d0 + local_508 * 8);
              local_298 = lVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (lVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = local_298;
              local_2e0 = lVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_298,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
              _objc_retainAutoreleasedReturnValue();
              lVar9 = local_298;
              local_2e8 = lVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_298,PTR_s_objectForKeyedSubscript__0269d098,&cf_destructive);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(lVar9);
              local_2e9 = (byte)lVar5;
              lVar5 = local_2e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0);
              if (lVar5 == 0) {
                local_1d8 = 5;
              }
              else {
                if (((local_2e9 & 1) == 0) ||
                   (pcVar7 = local_290,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_290,PTR_s_respondsToSelector__026ca818,
                              PTR_s_addDestructiveButtonTitle_handle_0269ffb0), pcVar4 = local_290,
                   lVar5 = local_2e0, puVar2 = PTR_s_addDestructiveButtonTitle_handle_0269ffb0,
                   ((ulong)pcVar7 & 1) == 0)) {
                  pcVar7 = local_290;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_290,PTR_s_respondsToSelector__026ca818,
                             PTR_s_addBtnTitle_handler__026a0f50);
                  pcVar4 = local_290;
                  lVar5 = local_2e0;
                  puVar2 = PTR_s_addBtnTitle_handler__026a0f50;
                  if (((ulong)pcVar7 & 1) != 0) {
                    lVar9 = local_2e8;
                    _objc_retainBlock();
                    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar2,lVar5);
                    (*(code *)PTR__objc_release_02578630)(lVar9);
                  }
                }
                else {
                  lVar9 = local_2e8;
                  _objc_retainBlock();
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar2,lVar5);
                  (*(code *)PTR__objc_release_02578630)(lVar9);
                }
                local_1d8 = 0;
              }
              _objc_storeStrong(&local_2e8);
              _objc_storeStrong(&local_2e0,0);
              local_508 = local_508 + 1;
            } while (local_508 < local_500);
            local_500 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_128
                       ,0x10);
            local_508 = 0;
          } while (local_500 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        pcVar4 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_290,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addCancelBtnTitle_handler__0269ffb8);
        if (((ulong)pcVar4 & 1) == 0) {
          pcVar4 = local_290;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_290,PTR_s_respondsToSelector__026ca818,
                     PTR_s_addCancelBtnTitle_target_sel__0269d268);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_290,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_290,PTR_s_addCancelBtnTitle_handler__0269ffb8,&cf_Sm,0);
        }
        pcVar4 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_290,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_showInView__0269d310,local_1c8);
        }
        local_1d8 = 1;
        _objc_storeStrong(&local_290,0);
      }
    }
  }
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

