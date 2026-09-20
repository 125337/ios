// pickHomeGroupModeForGroupID: @ 01d3b4f0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineScheduledTaskViewController::pickHomeGroupModeForGroupID_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [15];
  undefined1 local_91;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_displayNameForHomeGroupID__026af4d0,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  _objc_initWeak(auStack_48,local_28);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRScheduledTaskSheetAction_026cf598;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_01d3b8ec;
  local_78 = &DAT_02579c60;
  local_50 = puVar2;
  _objc_copyWeak(auStack_68,auStack_48);
  local_91 = 1;
  uVar3 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_actionWithTitle_handler__026b9738,&cf_R_SecS_ebXT,&local_90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
  local_91 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_50;
  puVar1 = PTR_WCRScheduledTaskSheetAction_026cf598;
  local_c8 = PTR___NSConcreteStackBlock_02578660;
  local_c0 = 0xc2000000;
  local_bc = 0;
  local_b8 = FUN_01d3b950;
  local_b0 = &DAT_02579c60;
  _objc_copyWeak(auStack_a0,auStack_48);
  uVar3 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_actionWithTitle_handler__026b9738,&cf_U_,&local_c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  FUN_01d38174(local_28,local_40,&cf_wcrSTHomeGroupMode,local_50);
  _objc_storeStrong(&local_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_storeStrong(&local_70,0);
  _objc_destroyWeak(auStack_68);
  _objc_storeStrong(&local_50,0);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

