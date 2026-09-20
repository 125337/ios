// performClearFilteredCrashLogs @ 00928fb4

/* Function Stack Size: 0x10 bytes */

void WCRefineCrashMonitorViewController::performClearFilteredCrashLogs(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  ulong local_160;
  ulong local_158;
  ID local_138;
  ID local_130;
  byte local_121;
  ID local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  long local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  _WCRefineCrashReporterLogDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = 0;
  local_c8 = puVar1;
  _memset(auStack_118,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filteredCrashFileNames_026aa688);
  _objc_retainAutoreleasedReturnValue();
  local_158 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_158 != 0) {
    lVar5 = *local_108;
    local_160 = 0;
    do {
      do {
        if (*local_108 - lVar5 != 0) {
          _objc_enumerationMutation(*local_108 - lVar5,IVar2);
        }
        local_d8 = *(undefined8 *)(local_110 + local_160 * 8);
        IVar3 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_c8;
        local_120 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_fileExistsAtPath__026ca630,IVar3);
        if ((((ulong)puVar1 & 1) != 0) &&
           (puVar1 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c8,PTR_s_removeItemAtPath_error__0269f910,local_120,0),
           ((ulong)puVar1 & 1) != 0)) {
          local_d0 = local_d0 + 1;
        }
        _objc_storeStrong(&local_120,0);
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedRange_026a43a0);
  local_121 = IVar2 == 4;
  if (!(bool)local_121) {
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_crashFileNamesForRange__026aa6a0,4);
    _objc_retainAutoreleasedReturnValue();
    local_130 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
    local_121 = IVar2 == 0;
    _objc_storeStrong(&local_130,0);
  }
  if ((local_121 & 1) != 0) {
    IVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_latest_log);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_c8;
    local_138 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_fileExistsAtPath__026ca630,IVar2);
    if (((((ulong)puVar1 & 1) != 0) &&
        (puVar1 = local_c8,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_removeItemAtPath_error__0269f910,local_138,0),
        ((ulong)puVar1 & 1) != 0)) && (local_d0 == 0)) {
      local_d0 = 1;
    }
    _objc_storeStrong(&local_138,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadLogContent_026aa5e0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__nzz);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

