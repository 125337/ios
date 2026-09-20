// pickContentMode @ 01d3cde0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::pickContentMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  undefined1 auStack_170 [8];
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined *local_110;
  undefined *local_108 [3];
  undefined *local_f0;
  undefined1 auStack_e8 [8];
  undefined *local_e0;
  undefined4 local_d4;
  ID local_d0;
  SEL local_c8;
  ID local_c0;
  undefined1 auStack_b8 [128];
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = param_2;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isAutoClearChatTask_026c45a0);
  if ((IVar2 & 1) == 0) {
    IVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_currentTask_026b3988);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = IVar2;
    if (IVar2 == 0) {
      local_d4 = 1;
    }
    else {
      puVar3 = PTR_WCRefineScheduledTask_026ce850;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_integerInTask_forKey__026a6cc8,IVar2,
                 _kWCRScheduledTaskKeyContentMode);
      local_e0 = puVar3;
      _objc_initWeak(auStack_e8,local_c0);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_f0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_108[0] = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _memset(auStack_150,0,0x40);
      puVar3 = local_108[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_1f0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_b8,0x10)
      ;
      if (local_1f0 != (undefined *)0x0) {
        lVar5 = *local_140;
        local_1f8 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar5 != 0) {
              _objc_enumerationMutation(*local_140 - lVar5,puVar3);
            }
            puVar6 = *(undefined **)(local_148 + (long)local_1f8 * 8);
            local_110 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_integerValue_026ca750);
            puVar4 = PTR_WCRefineScheduledTask_026ce850;
            local_158 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineScheduledTask_026ce850,PTR_s_titleForContentMode__026c4530,puVar6
                      );
            _objc_retainAutoreleasedReturnValue();
            local_160 = puVar4;
            if (local_158 == local_e0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_stringByAppendingString__0269d398,&::cf_space_s_);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = local_160;
              local_160 = puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            puVar1 = local_f0;
            puVar6 = local_160;
            puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
            local_190 = PTR___NSConcreteStackBlock_02578660;
            local_188 = 0xc2000000;
            local_184 = 0;
            local_180 = FUN_01d3d408;
            local_178 = &DAT_025799c0;
            _objc_copyWeak(auStack_170,auStack_e8);
            local_168 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_actionWithTitle_handler__026b9738,puVar6,&local_190);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _objc_destroyWeak(auStack_170);
            _objc_storeStrong(&local_160,0);
            local_1f8 = local_1f8 + 1;
          } while (local_1f8 < local_1f0);
          local_1f0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_b8,
                     0x10);
          local_1f8 = (undefined *)0x0;
        } while (local_1f0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      FUN_01d38174(local_c0,&cf_Q___W,&cf_wcrSTContent,local_f0);
      _objc_storeStrong(local_108);
      _objc_storeStrong(&local_f0,0);
      _objc_destroyWeak(auStack_e8);
      local_d4 = 0;
    }
    _objc_storeStrong(&local_d0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

