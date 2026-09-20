// reloadLogContent @ 0092a9c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineCrashMonitorViewController::reloadLogContent(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  undefined *puVar7;
  ulong local_398;
  ulong local_390;
  ulong local_298;
  ulong local_290;
  ID local_258;
  undefined *local_250;
  ID local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  ID local_1d8;
  undefined4 local_1cc;
  undefined *local_1c8;
  ID local_1c0;
  byte local_1b1;
  ID local_1b0;
  ID local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  ulong local_158;
  byte local_149;
  ID local_148;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  IVar1 = param_1;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedRange_026a43a0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_crashFileNamesForRange__026aa6a0,IVar1);
  _objc_retainAutoreleasedReturnValue();
  local_140 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setFilteredCrashFileNames__026aa5c0,param_1)
  ;
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_todayDateKey_026aa6c0);
  _objc_retainAutoreleasedReturnValue();
  local_149 = 0;
  local_158 = 0;
  local_148 = IVar1;
  _memset(auStack_1a0,0,0x40);
  IVar1 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_290 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_290 != 0) {
    lVar6 = *local_190;
    local_298 = 0;
    do {
      do {
        if (*local_190 - lVar6 != 0) {
          _objc_enumerationMutation(*local_190 - lVar6,IVar1);
        }
        local_160 = *(undefined8 *)(local_198 + local_298 * 8);
        IVar2 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_dateKeyFromCrashFileName__026aa6b8,local_160);
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = IVar2;
        if (local_158 == 0) {
          _objc_storeStrong(&local_158,IVar2);
        }
        IVar2 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_isEqualToString__0269ccc8,local_148);
        if ((IVar2 & 1) != 0) {
          local_149 = 1;
        }
        _objc_storeStrong(&local_1a8,0);
        local_298 = local_298 + 1;
      } while (local_298 < local_290);
      local_290 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      local_298 = 0;
    } while (local_290 != 0);
  }
  (*(code *)PTR__objc_release_02578630)();
  _WCRefineCrashReporterLogDirectory();
  _objc_retainAutoreleasedReturnValue();
  local_1b1 = 0;
  IVar2 = local_140;
  local_1b0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
  if (IVar2 == 0) {
    IVar1 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_latest_log);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_1c0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithContentsOfFile_encodin_026a3340,
               IVar1,4,0);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    if ((puVar3 == (undefined *)0x0) ||
       ((IVar1 = local_130,
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedRange_026a43a0), IVar1 != 0 &&
        (IVar1 = local_130,
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedRange_026a43a0), IVar1 != 4)))
       ) {
      IVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_stringByAppendingPathComponent__026cab30,
                 &cf_previous_breadcrumbs_log);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_1d8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithContentsOfFile_encodin_026a3340
                 ,IVar1,4,0);
      _objc_retainAutoreleasedReturnValue();
      local_1e0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
      if ((puVar3 == (undefined *)0x0) ||
         ((IVar1 = local_130,
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedRange_026a43a0), IVar1 != 0
          && (IVar1 = local_130,
             (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedRange_026a43a0),
             IVar1 != 4)))) {
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setLogPlainText__026aa6d0,&::cf___);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_updateRangeHintWithCount_primary_026aa6d8,0,0,0,0);
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        IVar1 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_currentRangeTitle_026aa680);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_fe_);
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        IVar1 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_logTextView_026a9fc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        local_1cc = 1;
        _objc_storeStrong(&local_1f0,0);
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar7 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_1e8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setLogPlainText__026aa6d0,puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_updateRangeHintWithCount_primary_026aa6d8,1,0,0,1,in_x6,in_x7,
                   puVar7);
        IVar1 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_highlightedCrashLog_todayDateKey_026aa6e0,local_1e8,local_148,0);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_logTextView_026a9fc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(IVar1);
        local_1cc = 1;
        _objc_storeStrong(&local_1e8,0);
      }
      _objc_storeStrong(&local_1e0);
      _objc_storeStrong(&local_1d8,0);
    }
    else {
      local_1b1 = 1;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setLogPlainText__026aa6d0,local_1c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_updateRangeHintWithCount_primary_026aa6d8,1,0,0,1);
      IVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_highlightedCrashLog_todayDateKey_026aa6e0,local_1c8,local_148,0);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_logTextView_026a9fc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_1cc = 1;
    }
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1c0,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf___ne_vU__);
    puVar3 = local_1f8;
    IVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_currentRangeTitle_026aa680);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_V_);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((local_149 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_appendString__0269ccb0,&::cf___);
    }
    uVar4 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
    if ((uVar4 != 0) &&
       (IVar1 = local_130,
       (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedRange_026a43a0),
       puVar3 = local_1f8, IVar1 == 0)) {
      IVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_displayDateFromDateKey__026aa6e8,local_158);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&::cf_newline_s_);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      uVar4 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,local_148);
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_appendString__0269ccb0,&cf_Ne);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
    _memset(auStack_240,0,0x40);
    IVar1 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_390 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,0x10);
    if (local_390 != 0) {
      lVar6 = *local_230;
      local_398 = 0;
      do {
        do {
          if (*local_230 - lVar6 != 0) {
            _objc_enumerationMutation(*local_230 - lVar6,IVar1);
          }
          local_200 = *(undefined8 *)(local_238 + local_398 * 8);
          IVar2 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_stringByAppendingPathComponent__026cab30,local_200);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_248 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,
                     PTR_s_stringWithContentsOfFile_encodin_026a3340,IVar2,4,0);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_130;
          local_250 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_dateKeyFromCrashFileName__026aa6b8,local_200);
          _objc_retainAutoreleasedReturnValue();
          local_258 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isEqualToString__0269ccc8,local_148);
          if ((IVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f8,PTR_s_appendFormat__0269d148,&cf_____________);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_appendFormat__0269d148,&cf__);
          }
          puVar3 = local_250;
          (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_length_0269cca0);
          if (puVar3 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_appendString__0269ccb0,local_250);
            puVar3 = local_250;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_250,PTR_s_hasSuffix__0269d018,&::cf_newline_s_);
            if (((ulong)puVar3 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
            }
          }
          _objc_storeStrong(&local_258);
          _objc_storeStrong(&local_250,0);
          _objc_storeStrong(&local_248,0);
          local_398 = local_398 + 1;
        } while (local_398 < local_390);
        local_390 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,
                   0x10);
        local_398 = 0;
      } while (local_390 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setLogPlainText__026aa6d0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_130;
    IVar2 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_updateRangeHintWithCount_primary_026aa6d8,IVar2,local_158,local_149 & 1,
               local_1b1 & 1);
    IVar1 = local_130;
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_logPlainText_026aa678);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_highlightedCrashLog_todayDateKey_026aa6e0,IVar2,local_148,local_149 & 1);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_1f8,0);
    local_1cc = 0;
  }
  _objc_storeStrong(&local_1b0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

