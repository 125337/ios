// pickSenderMode @ 01bbbadc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMessageSyncRuleViewController::pickSenderMode(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined *local_228;
  undefined *local_220;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined1 auStack_180 [8];
  undefined *local_178;
  cfstringStruct *local_170;
  undefined *local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined *local_120;
  undefined *local_118 [3];
  undefined *local_100;
  undefined1 auStack_f8 [8];
  undefined *local_f0;
  undefined4 local_e4;
  ID local_e0;
  SEL local_d8;
  ID local_d0;
  undefined1 auStack_c8 [128];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_currentRule_026c04a8);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = IVar1;
  if (IVar1 == 0) {
    local_e4 = 1;
  }
  else {
    puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_integerInRule_forKey__026a44f0,IVar1,
               _kWCRMessageSyncRuleKeySenderMode);
    local_f0 = puVar2;
    _objc_initWeak(auStack_f8,local_d0);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_100 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_118[0] = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    _memset(auStack_160,0,0x40);
    puVar2 = local_118[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_c8,0x10);
    if (local_220 != (undefined *)0x0) {
      lVar8 = *local_150;
      local_228 = (undefined *)0x0;
      do {
        do {
          if (*local_150 - lVar8 != 0) {
            _objc_enumerationMutation(*local_150 - lVar8,puVar2);
          }
          puVar9 = *(undefined **)(local_158 + (long)local_228 * 8);
          local_120 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_integerValue_026ca750);
          pcVar6 = (cfstringStruct *)PTR_WCRefineMessageSyncRule_026ce708;
          local_168 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_titleForSenderMode__026c04d0,puVar9)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_170 = pcVar6;
          if (local_168 == local_f0) {
            pcVar7 = &::cf__;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&::cf__,PTR_s_stringByAppendingString__0269d398,pcVar6);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = local_170;
            local_170 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
          }
          puVar3 = local_100;
          pcVar6 = local_170;
          puVar9 = PTR_WCRMessageSyncSheetAction_026cf408;
          local_1a0 = PTR___NSConcreteStackBlock_02578660;
          local_198 = 0xc2000000;
          local_194 = 0;
          local_190 = FUN_01bbc17c;
          local_188 = &DAT_025799c0;
          _objc_copyWeak(auStack_180,auStack_f8);
          local_178 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar9,PTR_s_actionWithTitle_handler__026b9738,pcVar6,&local_1a0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          _objc_destroyWeak(auStack_180);
          _objc_storeStrong(&local_170,0);
          local_228 = local_228 + 1;
        } while (local_228 < local_220);
        local_220 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_c8,
                   0x10);
        local_228 = (undefined *)0x0;
      } while (local_220 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_01bbc318(local_d0,&cf_v_T_a,&cf_wcrMessageSyncSenderMode,local_100);
    _objc_storeStrong(local_118);
    _objc_storeStrong(&local_100,0);
    _objc_destroyWeak(auStack_f8);
    local_e4 = 0;
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

