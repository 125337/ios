// pickSendMode @ 01bbf730

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMessageSyncRuleViewController::pickSendMode(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *local_210;
  undefined *local_208;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined1 auStack_178 [8];
  undefined *local_170;
  cfstringStruct *local_168;
  undefined *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined *local_118;
  undefined *local_110 [3];
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined4 local_dc;
  ID local_d8;
  SEL local_d0;
  ID local_c8;
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = param_2;
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_currentRule_026c04a8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = IVar1;
  if (IVar1 == 0) {
    local_dc = 1;
  }
  else {
    puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_integerInRule_forKey__026a44f0,IVar1,
               _kWCRMessageSyncRuleKeySendMode);
    local_e8 = puVar2;
    _objc_initWeak(auStack_f0,local_c8);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_110[0] = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    _memset(auStack_158,0,0x40);
    puVar2 = local_110[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c0,0x10);
    if (local_208 != (undefined *)0x0) {
      lVar7 = *local_148;
      local_210 = (undefined *)0x0;
      do {
        do {
          if (*local_148 - lVar7 != 0) {
            _objc_enumerationMutation(*local_148 - lVar7,puVar2);
          }
          puVar8 = *(undefined **)(local_150 + (long)local_210 * 8);
          local_118 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_integerValue_026ca750);
          pcVar5 = (cfstringStruct *)PTR_WCRefineMessageSyncRule_026ce708;
          local_160 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_titleForSendMode__026c0510,puVar8);
          _objc_retainAutoreleasedReturnValue();
          local_168 = pcVar5;
          if (local_160 == local_e8) {
            pcVar6 = &::cf__;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&::cf__,PTR_s_stringByAppendingString__0269d398,pcVar5);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_168;
            local_168 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
          }
          puVar3 = local_f8;
          pcVar5 = local_168;
          puVar8 = PTR_WCRMessageSyncSheetAction_026cf408;
          local_198 = PTR___NSConcreteStackBlock_02578660;
          local_190 = 0xc2000000;
          local_18c = 0;
          local_188 = FUN_01bbfd80;
          local_180 = &DAT_025799c0;
          _objc_copyWeak(auStack_178,auStack_f0);
          local_170 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar8,PTR_s_actionWithTitle_handler__026b9738,pcVar5,&local_198);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          _objc_destroyWeak(auStack_178);
          _objc_storeStrong(&local_168,0);
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c0,
                   0x10);
        local_210 = (undefined *)0x0;
      } while (local_208 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_01bbc318(local_c8,&cf_Teke_,&cf_wcrMessageSyncSendMode,local_f8);
    _objc_storeStrong(local_110);
    _objc_storeStrong(&local_f8,0);
    _objc_destroyWeak(auStack_f0);
    local_dc = 0;
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

