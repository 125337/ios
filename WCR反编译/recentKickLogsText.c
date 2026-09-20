// recentKickLogsText @ 00ed9210

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineChatRoomKickHelper::recentKickLogsText
          (WCRefineChatRoomKickHelper *this,ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  double in_d0;
  cfstringStruct *local_268;
  cfstringStruct *local_1d0;
  double local_1c0;
  ulong local_198;
  ulong local_190;
  cfstringStruct *local_160;
  bool local_151;
  cfstringStruct *local_150;
  undefined *local_140;
  cfstringStruct *local_138;
  byte local_129;
  ulong local_128;
  double local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_alloc_init();
  local_c8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setDateFormat__0269d1c8,&cf_MM_ddHH_mm);
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar1;
  _memset(auStack_118,0,0x40);
  IVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_recentKickLogs_026ab6f8);
  _objc_retainAutoreleasedReturnValue();
  local_190 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_190 != 0) {
    lVar7 = *local_108;
    local_198 = 0;
    do {
      do {
        if (*local_108 - lVar7 != 0) {
          _objc_enumerationMutation(*local_108 - lVar7,IVar2);
        }
        uVar8 = *(ulong *)(local_110 + local_198 * 8);
        local_d8 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_129 = 0;
        if ((uVar3 & 1) == 0) {
          local_1c0 = 0.0;
        }
        else {
          uVar3 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
          _objc_retainAutoreleasedReturnValue();
          local_129 = 1;
          local_128 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1c0 = in_d0;
        }
        if ((local_129 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_128);
        }
        (*(code *)PTR__objc_release_02578630)(uVar8);
        local_1d0 = local_c8;
        local_120 = local_1c0;
        local_151 = local_1c0 <= 0.0;
        if (local_151) {
          local_1d0 = &cf___;
          in_d0 = local_1c0;
        }
        else {
          local_140 = PTR__OBJC_CLASS___NSDate_026cdf88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_stringFromDate__0269d1d8);
          _objc_retainAutoreleasedReturnValue();
          in_d0 = local_1c0;
          local_150 = local_1d0;
        }
        local_151 = !local_151;
        (*(code *)PTR__objc_retain_02578638)();
        local_138 = local_1d0;
        if (local_151) {
          (*(code *)PTR__objc_release_02578630)(local_150);
          (*(code *)PTR__objc_release_02578630)(local_140);
        }
        pcVar1 = local_d0;
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        uVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_roomName);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_reason);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar8);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _objc_storeStrong(&local_138,0);
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  pcVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_268 = &cf_feU_;
  }
  else {
    local_268 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    local_160 = local_268;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_268;
  if (pcVar1 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

