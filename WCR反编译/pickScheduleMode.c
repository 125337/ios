// pickScheduleMode @ 01d3dc08

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::pickScheduleMode(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *local_258;
  undefined *local_250;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  undefined1 auStack_190 [8];
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined *local_130;
  undefined *local_128 [3];
  undefined *local_110;
  undefined1 auStack_108 [8];
  undefined *local_100;
  undefined4 local_f4;
  ID local_f0;
  SEL local_e8;
  ID local_e0;
  undefined1 auStack_d8 [128];
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = param_2;
  local_e0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = IVar1;
  if (IVar1 == 0) {
    local_f4 = 1;
  }
  else {
    puVar2 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_integerInTask_forKey__026a6cc8,IVar1,
               _kWCRScheduledTaskKeyScheduleMode);
    local_100 = puVar2;
    _objc_initWeak(auStack_108,local_e0);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_110 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6
              );
    _objc_retainAutoreleasedReturnValue();
    local_128[0] = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _memset(auStack_170,0,0x40);
    puVar2 = local_128[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_250 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_d8,0x10);
    if (local_250 != (undefined *)0x0) {
      lVar8 = *local_160;
      local_258 = (undefined *)0x0;
      do {
        do {
          if (*local_160 - lVar8 != 0) {
            _objc_enumerationMutation(*local_160 - lVar8,puVar2);
          }
          puVar9 = *(undefined **)(local_168 + (long)local_258 * 8);
          local_130 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_integerValue_026ca750);
          puVar3 = PTR_WCRefineScheduledTask_026ce850;
          local_178 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineScheduledTask_026ce850,PTR_s_titleForScheduleMode__026c4550,puVar9)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_180 = puVar3;
          if (local_178 == local_100) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_stringByAppendingString__0269d398,&::cf_space_s_);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = local_180;
            local_180 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar9);
          }
          puVar4 = local_110;
          puVar9 = local_180;
          puVar3 = PTR_WCRScheduledTaskSheetAction_026cf598;
          local_1b0 = PTR___NSConcreteStackBlock_02578660;
          local_1a8 = 0xc2000000;
          local_1a4 = 0;
          local_1a0 = FUN_01d3e348;
          local_198 = &DAT_025799c0;
          _objc_copyWeak(auStack_190,auStack_108);
          local_188 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_actionWithTitle_handler__026b9738,puVar9,&local_1b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_destroyWeak(auStack_190);
          _objc_storeStrong(&local_180,0);
          local_258 = local_258 + 1;
        } while (local_258 < local_250);
        local_250 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_d8,
                   0x10);
        local_258 = (undefined *)0x0;
      } while (local_250 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_01d38174(local_e0,&cf_gbL_j_,&cf_wcrSTSchedule,local_110);
    _objc_storeStrong(local_128);
    _objc_storeStrong(&local_110,0);
    _objc_destroyWeak(auStack_108);
    local_f4 = 0;
  }
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

