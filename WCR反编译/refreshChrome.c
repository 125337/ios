// refreshChrome @ 00fd8994

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRIconNameCaptureFloatWindow::refreshChrome(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1b8;
  undefined *local_130;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  undefined1 local_b9;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_isLiveCaptureArmed_026ad250);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_liveSwitch_026ad2b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filterControl_026ad2b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_b0;
  local_b9 = puVar3 != (undefined1 *)((long)&MACH_HEADER.magic + 2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sortButton_026ad2c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR_WCRefineIconNameCaptureSupport_026cec30;
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_searchQuery_026a2728);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_sortedFilteredResultsWithQuery__026ad2d0);
  _objc_retainAutoreleasedReturnValue();
  local_1b8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_1b8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_1b8;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setItems__026a17a8,local_c8);
  local_d0 = 0;
  local_d8 = 0;
  _memset(auStack_120,0,0x40);
  puVar2 = PTR_WCRefineIconNameCaptureSupport_026cec30;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_currentResults_026ad2d8);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1e0 != (undefined *)0x0) {
    lVar7 = *local_110;
    local_1e8 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar7 != 0) {
          _objc_enumerationMutation(*local_110 - lVar7,puVar2);
        }
        uVar8 = *(ulong *)(local_118 + (long)local_1e8 * 8);
        local_e0 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_kind_026a27e8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar8);
        if ((uVar4 & 1) == 0) {
          local_d8 = local_d8 + 1;
        }
        else {
          local_d0 = local_d0 + 1;
        }
        local_1e8 = local_1e8 + 1;
      } while (local_1e8 < local_1e0);
      local_1e0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_1e8 = (undefined *)0x0;
    } while (local_1e0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineIconNameCaptureSupport_026cec30;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_currentResults_026ad2d8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_searchQuery_026a2728);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (IVar6 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_countLabel_026ad2e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_countLabel_026ad2e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  if (puVar5 != (undefined *)0x0) {
    local_130 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
    _objc_retainAutoreleasedReturnValue();
  }
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pillCountLabel_026ad2e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (puVar5 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_130);
  }
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

