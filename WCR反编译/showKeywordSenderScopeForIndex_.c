// showKeywordSenderScopeForIndex: @ 01a12654

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAutoReplyListViewController::showKeywordSenderScopeForIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined1 auStack_f8 [8];
  unsigned_long_long local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [8];
  unsigned_long_long local_c0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [8];
  unsigned_long_long local_80;
  undefined1 auStack_78 [8];
  ID local_70;
  byte local_61;
  ID local_60;
  unsigned_long_long local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_61 = 0;
  bVar2 = true;
  local_58 = param_3;
  local_50 = param_2;
  local_48 = param_1;
  if (param_3 != 0x7fffffffffffffff) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = param_1 <= param_3;
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  IVar5 = local_48;
  if (!bVar2) {
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_senderScopeForRule__026bb768);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_70 = IVar5;
    _objc_initWeak(auStack_78,local_48);
    IVar5 = local_48;
    puVar6 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    pcVar1 = &::cf__;
    if (local_70 != 0) {
      pcVar1 = &cf_hQ__;
    }
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_01a12c48;
    local_90 = &DAT_025799c0;
    _objc_copyWeak(auStack_88,auStack_78);
    local_80 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_actionWithTitle_handler__026b9738,pcVar1,&local_a8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    pcVar1 = &::cf__;
    if (local_70 != 1) {
      pcVar1 = &cf_NVY_RN;
    }
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_01a12cb0;
    local_d0 = &DAT_025799c0;
    local_40 = puVar6;
    _objc_copyWeak(auStack_c8,auStack_78);
    local_c0 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_actionWithTitle_handler__026b9738,pcVar1,&local_e8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    pcVar1 = &::cf__;
    if (local_70 != 2) {
      pcVar1 = &cf_NVY_;
    }
    local_118 = PTR___NSConcreteStackBlock_02578660;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = FUN_01a12d18;
    local_100 = &DAT_025799c0;
    local_38 = puVar7;
    _objc_copyWeak(auStack_f8,auStack_78);
    local_f0 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_actionWithTitle_handler__026b9738,pcVar1,&local_118);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_01a0aaac(IVar5,&cf_S_a,&cf_wcrKeywordSenderScopeSheet);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

