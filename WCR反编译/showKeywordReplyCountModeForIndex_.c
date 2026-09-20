// showKeywordReplyCountModeForIndex: @ 01a133c0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAutoReplyListViewController::showKeywordReplyCountModeForIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  ID local_138;
  undefined1 auStack_130 [8];
  unsigned_long_long local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  ID local_100;
  undefined1 auStack_f8 [8];
  unsigned_long_long local_f0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [8];
  unsigned_long_long local_b0;
  undefined1 auStack_a8 [8];
  ID local_a0;
  byte local_93;
  byte local_92;
  byte local_91;
  ID local_90;
  byte local_81;
  ID local_80;
  long local_78;
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
  if (!bVar2) {
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_78 = 0;
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_countMode);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_80 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((IVar3 & 1) != 0) {
      IVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_integerValue_026ca750);
      local_78 = (long)(int)(uint)(IVar3 == 1);
    }
    local_81 = 0;
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_randomOneFromMulti);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_90 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((IVar3 & 1) != 0) {
      IVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_boolValue_026ca540);
      local_81 = (byte)IVar3;
    }
    local_91 = local_78 == 0;
    local_92 = 0;
    if (local_78 == 1) {
      local_92 = local_81 ^ 1;
    }
    local_92 = local_92 & 1;
    local_93 = 0;
    if (local_78 == 1) {
      local_93 = local_81;
    }
    local_93 = local_93 & 1;
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    FUN_01a08fe8();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_initWeak(auStack_a8,local_48);
    IVar3 = local_48;
    puVar4 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    pcVar1 = &::cf__;
    if ((local_91 & 1) == 0) {
      pcVar1 = &cf_USagVY;
    }
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_01a13c6c;
    local_c0 = &DAT_025799c0;
    _objc_copyWeak(auStack_b8,auStack_a8);
    local_b0 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_handler__026b9738,pcVar1,&local_d8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    pcVar1 = &::cf__;
    if ((local_92 & 1) == 0) {
      pcVar1 = &cf_SVYYag;
    }
    local_120 = PTR___NSConcreteStackBlock_02578660;
    local_118 = 0xc2000000;
    local_114 = 0;
    local_110 = FUN_01a13cdc;
    local_108 = &DAT_0257c708;
    local_40 = puVar4;
    _objc_copyWeak(auStack_f8,auStack_a8);
    local_f0 = local_58;
    IVar5 = local_a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_actionWithTitle_handler__026b9738,pcVar1,&local_120);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    pcVar1 = &::cf__;
    if ((local_93 & 1) == 0) {
      pcVar1 = &cf_Yag_g;
    }
    local_158 = PTR___NSConcreteStackBlock_02578660;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_01a13d8c;
    local_140 = &DAT_0257c708;
    local_38 = puVar6;
    _objc_copyWeak(auStack_130,auStack_a8);
    local_128 = local_58;
    IVar5 = local_a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_actionWithTitle_handler__026b9738,pcVar1,&local_158);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_01a0aaac(IVar3,&cf_VYR,&cf_wcrKeywordCountModeSheet);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_138);
    _objc_destroyWeak(auStack_130);
    _objc_storeStrong(&local_100,0);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_a8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_70,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

