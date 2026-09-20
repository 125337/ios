// pickWeekday @ 01d3eb14

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::pickWeekday(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined1 *local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar3;
  if (IVar3 == 0) {
    local_3c = 1;
  }
  else {
    puVar4 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_integerInTask_forKey__026a6cc8,IVar3,
               _kWCRScheduledTaskKeyWeekday);
    local_48 = puVar4;
    _objc_initWeak(auStack_50,local_28);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar4;
    for (local_70 = (undefined1 *)((long)&MACH_HEADER.magic + 1); (long)local_70 < 8;
        local_70 = local_70 + 1) {
      puVar4 = PTR_WCRefineScheduledTask_026ce850;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_titleForWeekday__026af488,local_70);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar4;
      if (local_70 == local_48) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_stringByAppendingString__0269d398,&::cf_space_s_);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_78;
        local_78 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      puVar2 = local_58;
      puVar1 = local_78;
      puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
      local_80 = local_70;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_01d3ee88;
      local_98 = &DAT_025799c0;
      _objc_copyWeak(auStack_90,auStack_50);
      local_88 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,puVar1,&local_b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_90);
      _objc_storeStrong(&local_78,0);
    }
    FUN_01d38174(local_28,&cf_khTQ,&cf_wcrSTWeekday,local_58);
    _objc_storeStrong(&local_58,0);
    _objc_destroyWeak(auStack_50);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

