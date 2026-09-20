// presentReplyContentSheet @ 01a10f6c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAutoReplyListViewController::presentReplyContentSheet(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [8];
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [24];
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  SEL local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = param_2;
  local_50 = param_1;
  _objc_initWeak(auStack_60,param_1);
  IVar1 = local_50;
  puVar2 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_01a11470;
  local_70 = &DAT_0257be28;
  _objc_copyWeak(auStack_68,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf_VYe_gQ_,&local_88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
  local_c0 = PTR___NSConcreteStackBlock_02578660;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = FUN_01a11568;
  local_a8 = &DAT_0257be28;
  local_48 = puVar2;
  _objc_copyWeak(auStack_a0,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_VYmo_N_,&local_c0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
  local_e8 = PTR___NSConcreteStackBlock_02578660;
  local_e0 = 0xc2000000;
  local_dc = 0;
  local_d8 = FUN_01a11660;
  local_d0 = &DAT_0257be28;
  local_40 = puVar3;
  _objc_copyWeak(auStack_c8,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_SVYYag,&local_e8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
  local_110 = PTR___NSConcreteStackBlock_02578660;
  local_108 = 0xc2000000;
  local_104 = 0;
  local_100 = FUN_01a11750;
  local_f8 = &DAT_0257be28;
  local_38 = puVar4;
  _objc_copyWeak(auStack_f0,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_actionWithTitle_handler__026b9738,&cf_VY_,&local_110);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a0aaac(IVar1,&cf_VYQ_,&cf_wcrKeywordReplySheet);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

