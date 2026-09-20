// showZipActionsForPath: @ 01993848

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::showZipActionsForPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  _objc_initWeak(auStack_58,local_40);
  puVar3 = PTR_WCRFileSheetAction_026cf1c0;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_01993c3c;
  local_78 = &DAT_02579c60;
  _objc_copyWeak(auStack_68,auStack_58);
  uVar2 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_S0RS_MRvU_,&local_90);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRFileSheetAction_026cf1c0;
  local_d0 = PTR___NSConcreteStackBlock_02578660;
  local_c8 = 0xc2000000;
  local_c4 = 0;
  local_c0 = FUN_01993ca0;
  local_b8 = &DAT_02579c60;
  local_38 = puVar3;
  _objc_copyWeak(auStack_a8,auStack_58);
  uVar2 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_RNS__eN,&local_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar1 = local_40;
  uVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  FUN_0199377c(IVar1,uVar2,local_60,&cf_Sm);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_b0,0);
  _objc_destroyWeak(auStack_a8);
  _objc_storeStrong(&local_70,0);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

