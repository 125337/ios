// editKeywordEntry: @ 01a0edf4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAutoReplyListViewController::editKeywordEntry_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  ulong local_2b8;
  ulong local_2a8;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  undefined1 auStack_260 [8];
  ulong local_258;
  undefined1 local_249;
  undefined *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  code *local_238;
  undefined *local_230;
  ID local_228;
  undefined1 auStack_220 [8];
  ulong local_218;
  undefined1 local_209;
  undefined *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  code *local_1f8;
  undefined *local_1f0;
  ID local_1e8;
  undefined1 auStack_1e0 [8];
  ulong local_1d8;
  undefined1 local_1c9;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  ID local_1a8;
  undefined1 auStack_1a0 [8];
  ulong local_198;
  undefined1 local_189;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  ID local_168;
  undefined1 auStack_160 [8];
  ulong local_158;
  undefined1 local_149;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  ulong local_120;
  undefined1 local_111;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  ulong local_e8;
  undefined1 local_d9;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [8];
  ulong local_b0;
  undefined *local_98;
  undefined1 auStack_90 [8];
  ID local_88;
  long local_80;
  ID local_78;
  ID local_70;
  undefined4 local_68;
  byte local_61;
  ID local_60;
  ulong local_58;
  bool local_49;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_49 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_2a8 = 0;
  }
  else {
    local_2a8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_2a8;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_2a8;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_40 == 0) {
    local_2b8 = 0x7fffffffffffffff;
  }
  else {
    local_2b8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_unsignedIntegerValue_026cabb8);
  }
  local_58 = local_2b8;
  local_61 = 0;
  bVar1 = true;
  if (local_2b8 != 0x7fffffffffffffff) {
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar7 <= local_2b8;
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar1) {
    local_68 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar7);
    IVar7 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar7;
    FUN_01a08fe8();
    _objc_retainAutoreleasedReturnValue();
    local_78 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar7);
    local_80 = 0;
    IVar7 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_countMode);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_88 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((IVar7 & 1) != 0) {
      IVar7 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_integerValue_026ca750);
      local_80 = (long)(int)(uint)(IVar7 == 1);
    }
    _objc_initWeak(auStack_90,local_28);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_01a0fdf8;
    local_c0 = &DAT_025799c0;
    local_98 = puVar6;
    _objc_copyWeak(auStack_b8,auStack_90);
    local_d9 = 1;
    local_b0 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf__sQ_,&local_d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
    local_d9 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar6 = local_98;
    puVar3 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_110 = PTR___NSConcreteStackBlock_02578660;
    local_108 = 0xc2000000;
    local_104 = 0;
    local_100 = FUN_01a0fe5c;
    local_f8 = &DAT_025799c0;
    _objc_copyWeak(auStack_f0,auStack_90);
    local_111 = 1;
    local_e8 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_VYR,&local_110);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
    local_111 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar6 = local_98;
    puVar3 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_148 = PTR___NSConcreteStackBlock_02578660;
    local_140 = 0xc2000000;
    local_13c = 0;
    local_138 = FUN_01a0fec0;
    local_130 = &DAT_025799c0;
    _objc_copyWeak(auStack_128,auStack_90);
    local_149 = 1;
    local_120 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_S_a,&local_148);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
    local_149 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar6 = local_98;
    puVar3 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    if (local_80 == 1) {
      local_188 = PTR___NSConcreteStackBlock_02578660;
      local_180 = 0xc2000000;
      local_17c = 0;
      local_178 = FUN_01a0ff24;
      local_170 = &DAT_0257c708;
      _objc_copyWeak(auStack_160,auStack_90);
      IVar7 = local_78;
      local_189 = 1;
      local_158 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf__YagQ_,&local_188);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
      local_189 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_168,0);
      _objc_destroyWeak(auStack_160);
    }
    else {
      local_1c8 = PTR___NSConcreteStackBlock_02578660;
      local_1c0 = 0xc2000000;
      local_1bc = 0;
      local_1b8 = FUN_01a0ff8c;
      local_1b0 = &DAT_0257c708;
      _objc_copyWeak(auStack_1a0,auStack_90);
      IVar7 = local_78;
      local_1c9 = 1;
      local_198 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_VYe_gQ_,&local_1c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
      local_1c9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar6 = local_98;
      puVar3 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
      local_208 = PTR___NSConcreteStackBlock_02578660;
      local_200 = 0xc2000000;
      local_1fc = 0;
      local_1f8 = FUN_01a0fffc;
      local_1f0 = &DAT_0257c708;
      _objc_copyWeak(auStack_1e0,auStack_90);
      IVar7 = local_78;
      local_209 = 1;
      local_1d8 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_VYmo_N_,&local_208);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
      local_209 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_1e8);
      _objc_destroyWeak(auStack_1e0);
      _objc_storeStrong(&local_1a8,0);
      _objc_destroyWeak(auStack_1a0);
    }
    puVar6 = local_98;
    puVar3 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_248 = PTR___NSConcreteStackBlock_02578660;
    local_240 = 0xc2000000;
    local_23c = 0;
    local_238 = FUN_01a1006c;
    local_230 = &DAT_0257c708;
    _objc_copyWeak(auStack_220,auStack_90);
    local_249 = 1;
    local_218 = local_58;
    IVar7 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_VY_,&local_248);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
    local_249 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar6 = local_98;
    puVar3 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_280 = PTR___NSConcreteStackBlock_02578660;
    local_278 = 0xc2000000;
    local_274 = 0;
    local_270 = FUN_01a100dc;
    local_268 = &DAT_025799c0;
    _objc_copyWeak(auStack_260,auStack_90);
    local_258 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_RdsQ_,&local_280);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    FUN_01a0aaac(local_28,&cf_sQ_n_,&cf_wcrKeywordRuleSheet,local_98);
    _objc_destroyWeak(auStack_260);
    _objc_storeStrong(&local_228);
    _objc_destroyWeak(auStack_220);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_b8);
    _objc_storeStrong(&local_98,0);
    _objc_destroyWeak(auStack_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    local_68 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

