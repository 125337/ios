// presentOtherSourceMenuForGroup: @ 01abf6fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRGroupListViewController::presentOtherSourceMenuForGroup_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [8];
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [8];
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
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
  _objc_initWeak(auStack_60,local_48);
  IVar1 = local_48;
  uVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRGroupSheetAction_026cf308;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_01abfc54;
  local_88 = &DAT_02579c60;
  _objc_copyWeak(auStack_78,auStack_60);
  uVar4 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_mRgS,0,&local_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_WCRGroupSheetAction_026cf308;
  local_d0 = PTR___NSConcreteStackBlock_02578660;
  local_c8 = 0xc2000000;
  local_c4 = 0;
  local_c0 = FUN_01abfe70;
  local_b8 = &DAT_02579c60;
  local_40 = puVar3;
  _objc_copyWeak(auStack_a8,auStack_60);
  uVar4 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_mR_J,0,&local_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_WCRGroupSheetAction_026cf308;
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_01ac00ac;
  local_e8 = &DAT_02579c60;
  local_38 = puVar5;
  _objc_copyWeak(auStack_d8,auStack_60);
  uVar4 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_NJ_YRh,0,&local_100);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_01aa2934(IVar1,uVar2,puVar7,&cf_Sm);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_storeStrong(&local_b0,0);
  _objc_destroyWeak(auStack_a8);
  _objc_storeStrong(&local_80,0);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

