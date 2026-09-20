// tableView:trailingSwipeActionsConfigurationForRowAtIndexPath: @ 01eb6ee8

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoListEditorViewController::
   tableView_trailingSwipeActionsConfigurationForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  ID local_d8;
  undefined1 auStack_d0 [8];
  undefined *local_c8 [3];
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined1 auStack_78 [12];
  undefined4 local_6c;
  ID local_68;
  undefined8 local_60;
  undefined8 local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_entryAtIndexPath__026c77d0,local_60);
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar2;
  if (IVar2 == 0) {
    local_40 = (undefined *)0x0;
    local_6c = 1;
  }
  else {
    _objc_initWeak(auStack_78,local_48);
    IVar2 = local_68;
    puVar3 = PTR__OBJC_CLASS___UIContextualAction_026ce5e0;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01eb73d8;
    local_98 = &DAT_02583528;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = IVar2;
    _objc_copyWeak(auStack_88,auStack_78);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_contextualActionWithStyle_title__026a2d98,1,&cf_Rd,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIContextualAction_026ce5e0;
    IVar2 = local_68;
    local_80 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_daily_026c7138);
    local_d8 = local_68;
    pcVar1 = &cf_Sme8_;
    if ((IVar2 & 1) == 0) {
      pcVar1 = &cf__Ne8_;
    }
    local_f8 = PTR___NSConcreteStackBlock_02578660;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = FUN_01eb74d8;
    local_e0 = &DAT_02583528;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_copyWeak(auStack_d0,auStack_78);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_contextualActionWithStyle_title__026a2d98,0,pcVar1,&local_f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_c8[0] = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UISwipeActionsConfiguration_026ce5e8;
    local_38 = local_80;
    local_30 = local_c8[0];
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_configurationWithActions__026a2da0);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_setPerformsFirstActionWithFullSw_026a2da8,0);
    puVar3 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar3;
    local_6c = 1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(local_c8,0);
    _objc_destroyWeak(auStack_d0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_80,0);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_90,0);
    _objc_destroyWeak(auStack_78);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_40;
}

