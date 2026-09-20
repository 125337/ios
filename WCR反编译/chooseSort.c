// chooseSort @ 01f7ca18

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackManagerViewController::chooseSort(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [8];
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  undefined *local_60;
  undefined1 auStack_58 [8];
  SEL local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_2;
  local_48 = param_1;
  _objc_initWeak(auStack_58,param_1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_48;
  puVar4 = PTR_WCRVPSheetAction_026cf7b8;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_01f7cf54;
  local_88 = &DAT_02579c60;
  local_60 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = puVar3;
  _objc_copyWeak(auStack_78,auStack_58);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_Ty,&local_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRVPSheetAction_026cf7b8;
  local_d0 = PTR___NSConcreteStackBlock_02578660;
  local_c8 = 0xc2000000;
  local_c4 = 0;
  local_c0 = FUN_01f7cfd0;
  local_b8 = &DAT_02579c60;
  puVar5 = local_60;
  local_40 = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = puVar5;
  _objc_copyWeak(auStack_a8,auStack_58);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_eg,&local_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_WCRVPSheetAction_026cf7b8;
  puVar6 = local_60;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_voicePackSortAsc_026c9a20);
  pcVar1 = &cf_9e_NM_;
  if (((ulong)puVar6 & 1) == 0) {
    pcVar1 = &cf_9e_NGS_;
  }
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_01f7d04c;
  local_e8 = &DAT_02579c60;
  puVar6 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = puVar6;
  _objc_copyWeak(auStack_d8,auStack_58);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_actionWithTitle_handler__026b9738,pcVar1,&local_100);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_01f6e854(IVar2,&cf_c_e_,puVar6,&cf_Sm);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_destroyWeak(auStack_d8);
  _objc_storeStrong(&local_e0);
  _objc_destroyWeak(auStack_a8);
  _objc_storeStrong(&local_b0,0);
  _objc_destroyWeak(auStack_78);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_60,0);
  _objc_destroyWeak(auStack_58);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

