// showActionsForEntry: @ 019b09f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRFilePathListViewController::showActionsForEntry_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [15];
  undefined1 local_d1;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [15];
  undefined1 local_99;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_38;
  local_40 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar5;
  _objc_initWeak(auStack_50,local_28);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRFileSheetAction_026cf1c0;
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_019b1028;
  local_80 = &DAT_02579c60;
  local_58 = puVar2;
  _objc_copyWeak(auStack_70,auStack_50);
  uVar5 = local_48;
  local_99 = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_actionWithTitle_handler__026b9738,&::cf_Sb,&local_98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
  local_99 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_grouped_026ba7b8);
  puVar2 = local_58;
  puVar3 = PTR_WCRFileSheetAction_026cf1c0;
  if ((IVar4 & 1) == 0) {
    local_108 = PTR___NSConcreteStackBlock_02578660;
    local_100 = 0xc2000000;
    local_fc = 0;
    local_f8 = FUN_019b1450;
    local_f0 = &DAT_02579c60;
    uVar5 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = uVar5;
    _objc_copyWeak(auStack_e0,auStack_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_destructiveActionWithTitle_handl_026ba5d8,&cf_Sm6e,&local_108);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_e0);
    _objc_storeStrong(&local_e8,0);
  }
  else {
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_019b108c;
    local_b8 = &DAT_02579c60;
    uVar5 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar5;
    _objc_copyWeak(auStack_a8,auStack_50);
    local_d1 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_destructiveActionWithTitle_handl_026ba5d8,&::cf_N,&local_d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    local_d1 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_a8);
    _objc_storeStrong(&local_b0,0);
  }
  IVar4 = local_28;
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  FUN_0199377c(IVar4,uVar5,local_58,&cf_Sm);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  _objc_storeStrong(&local_78);
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_58,0);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

