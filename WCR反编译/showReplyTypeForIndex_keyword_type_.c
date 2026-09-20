// showReplyTypeForIndex:keyword:type: @ 01a146a0

/* Function Stack Size: 0x28 bytes */

void WCRefineKeywordAutoReplyListViewController::showReplyTypeForIndex_keyword_type_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,ID param_5)

{
  unsigned_long_long uVar1;
  undefined8 uVar2;
  ID IVar3;
  ulong uVar4;
  ID IVar5;
  ID IVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 in_x7;
  undefined1 *puVar10;
  undefined *local_1a8;
  ID local_188;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  undefined *local_138;
  undefined1 auStack_130 [8];
  ID local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined4 local_f0;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [15];
  bool local_a9;
  undefined *local_a8;
  undefined *local_a0;
  ID local_98;
  byte local_89;
  ID local_88;
  byte local_79;
  ID local_78;
  byte local_69;
  ID local_68;
  ID local_60;
  ulong local_58;
  undefined8 local_50;
  unsigned_long_long local_48;
  SEL local_40;
  ID local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_3;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_50,param_4);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPendingRuleIndex__026bb750,local_48);
  uVar2 = local_50;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPendingKeyword__026bb6d8);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = local_48;
  local_69 = 0;
  local_79 = 0;
  local_89 = 0;
  if (local_48 != 0x7fffffffffffffff) {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (uVar1 < IVar3) {
      local_188 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rules_026a44d8);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_188;
      goto LAB_01a1488c;
    }
  }
  local_188 = *(ID *)PTR____NSDictionary0___02578288;
LAB_01a1488c:
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_188;
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  uVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_invite);
  if ((uVar4 & 1) == 0) {
    uVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_multi);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_repo);
      if ((uVar4 & 1) == 0) {
        IVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_replyText);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar3;
        FUN_01a08fe8();
        _objc_retainAutoreleasedReturnValue();
        local_128 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        puVar7 = auStack_130;
        _objc_initWeak(puVar7,local_38);
        puVar9 = PTR_WCRefineHelper_026ce000;
        puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        FUN_01a1544c();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar8,PTR_s_stringWithFormat__0269cca8,&cf_tekSS_TbcLNOcbcLRbbYag);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_128;
        local_160 = PTR___NSConcreteStackBlock_02578660;
        local_158 = 0xc2000000;
        local_154 = 0;
        local_150 = FUN_01a15624;
        local_148 = &DAT_02589100;
        _objc_copyWeak(auStack_140,auStack_130);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,puVar9,PTR_s_presentPageSheetMultilineInputWi_026ab118,&cf_VYe_gQ_,puVar8,
                   &cf_eQb_4RVYe_g_,IVar3,&local_160,in_x7,puVar10);
        _objc_retainAutoreleasedReturnValue();
        local_138 = puVar9;
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        if (local_138 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
        }
        _objc_storeStrong(&local_138);
        _objc_destroyWeak(auStack_140);
        _objc_destroyWeak(auStack_130);
        _objc_storeStrong(&local_128,0);
        local_f0 = 0;
      }
      else {
        _objc_initWeak(auStack_f8,local_38);
        IVar3 = local_38;
        puVar8 = PTR_WCRefineMessageRepositoryPicker_026cf050;
        IVar6 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar6;
        FUN_01a08fe8();
        _objc_retainAutoreleasedReturnValue();
        local_120 = PTR___NSConcreteStackBlock_02578660;
        local_118 = 0xc2000000;
        local_114 = 0;
        local_110 = FUN_01a1531c;
        local_108 = &DAT_0257c558;
        _objc_copyWeak(auStack_100,auStack_f8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar8,PTR_s_presentFromViewController_title__026ae548,IVar3,&cf_bmo_N_,IVar5,
                   &local_120);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        local_f0 = 1;
        _objc_destroyWeak(auStack_100);
        _objc_destroyWeak(auStack_f8);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_openMultiReplyEditorForIndex_key_026bb7a0,local_48,local_50);
      local_f0 = 1;
    }
  }
  else {
    IVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_inviteChatRoom);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar3;
    FUN_01a08fe8();
    _objc_retainAutoreleasedReturnValue();
    local_98 = IVar6;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    local_a9 = false;
    if (IVar3 == 0) {
      local_1a8 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_30 = local_98;
      local_1a8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_1a8;
    }
    local_a9 = IVar3 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_1a8;
    if ((local_a9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    _objc_initWeak(auStack_b8,local_38);
    IVar3 = local_38;
    puVar9 = local_a0;
    puVar8 = PTR_WCRefineChatRoomPicker_026cef60;
    local_e0 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_01a14fec;
    local_c8 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_c0,auStack_b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_presentFromViewController_title__026ab898,IVar3,&cf_VY_,puVar9,&local_e0
              );
    local_f0 = 1;
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

