// wcrShowPersonaMenuAtGroup:index: @ 017c9548

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineAIPersonaLibraryViewController::wcrShowPersonaMenuAtGroup_index_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  ID IVar10;
  undefined *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  code *local_268;
  undefined *local_260;
  ID local_258;
  ID local_250;
  undefined1 auStack_248 [15];
  undefined1 local_239;
  undefined *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  code *local_228;
  undefined *local_220;
  ID local_218;
  undefined1 auStack_210 [15];
  undefined1 local_201;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  ID local_1e0;
  ID local_1d8;
  undefined1 auStack_1d0 [15];
  undefined1 local_1c1;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  ID local_1a0;
  ID local_198;
  undefined1 auStack_190 [15];
  undefined1 local_181;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  ID local_160;
  ID local_158;
  undefined1 auStack_150 [15];
  undefined1 local_141;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  ID local_120;
  ID local_118;
  undefined1 auStack_110 [15];
  undefined1 local_101;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  ID local_e0;
  ID local_d8;
  undefined1 auStack_d0 [15];
  undefined1 local_c1;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  ID local_98;
  undefined1 auStack_90 [24];
  undefined *local_78;
  undefined1 auStack_70 [15];
  byte local_61;
  ID local_60;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  unsigned_long_long local_40;
  unsigned_long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrPersonaAtGroup_index__026b4f50,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  local_48 = param_1;
  if (param_1 == 0) {
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_48;
    local_58 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_prompt);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = local_28;
    local_60 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGroupIsCustom__026b4ed0,local_38);
    local_61 = (byte)IVar9;
    _objc_initWeak(auStack_70,local_28);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar10 = local_28;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_017ca65c;
    local_a8 = &DAT_0257c978;
    local_78 = puVar3;
    _objc_copyWeak(auStack_90,auStack_70);
    IVar9 = local_58;
    local_c1 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_60;
    local_a0 = IVar9;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar10,PTR_s_wcrActionWithTitle_block__026b4f60,&cf_gwc_y,&local_c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    local_c1 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar10);
    IVar9 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrIsSelecting_026b4eb8);
    IVar2 = local_28;
    puVar3 = local_78;
    if ((IVar9 & 1) == 0) {
      IVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
      IVar2 = local_28;
      puVar3 = local_78;
      if ((IVar9 & 1) == 0) {
        puVar6 = PTR_WCRefineAIStore_026ce048;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_180 = PTR___NSConcreteStackBlock_02578660;
        local_178 = 0xc2000000;
        local_174 = 0;
        local_170 = FUN_017ca834;
        local_168 = &DAT_0257c978;
        _objc_copyWeak(auStack_150,auStack_70);
        IVar9 = local_60;
        local_181 = 1;
        (*(code *)PTR__objc_retain_02578638)();
        IVar10 = local_58;
        local_160 = IVar9;
        (*(code *)PTR__objc_retain_02578638)();
        local_158 = IVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_wcrActionWithTitle_highlighted_b_026b4f08,&cf__u_OVYN,
                   (ulong)puVar8 & 0xffffffff,&local_180);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        local_181 = 0;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_158);
        _objc_storeStrong(&local_160,0);
        _objc_destroyWeak(auStack_150);
      }
      else {
        puVar6 = PTR_WCRefineAIStore_026ce048;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_140 = PTR___NSConcreteStackBlock_02578660;
        local_138 = 0xc2000000;
        local_134 = 0;
        local_130 = FUN_017ca7c4;
        local_128 = &DAT_0257c978;
        _objc_copyWeak(auStack_110,auStack_70);
        IVar9 = local_60;
        local_141 = 1;
        (*(code *)PTR__objc_retain_02578638)();
        IVar10 = local_58;
        local_120 = IVar9;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = IVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_wcrActionWithTitle_highlighted_b_026b4f08,&cf__u_ORg,
                   (ulong)puVar8 & 0xffffffff,&local_140);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        local_141 = 0;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_120,0);
        _objc_destroyWeak(auStack_110);
      }
    }
    else {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcrUsageBadgeForPrompt__026b4ec0,local_60);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_100 = PTR___NSConcreteStackBlock_02578660;
      local_f8 = 0xc2000000;
      local_f4 = 0;
      local_f0 = FUN_017ca6c4;
      local_e8 = &DAT_0257c978;
      _objc_copyWeak(auStack_d0,auStack_70);
      IVar9 = local_60;
      local_101 = 1;
      (*(code *)PTR__objc_retain_02578638)();
      IVar10 = local_58;
      local_e0 = IVar9;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = IVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_wcrActionWithTitle_highlighted_b_026b4f08,&cf__u,IVar5 & 0xffffffff,
                 &local_100);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      local_101 = 0;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_e0,0);
      _objc_destroyWeak(auStack_d0);
    }
    IVar2 = local_28;
    puVar3 = local_78;
    if ((local_61 & 1) == 0) {
      IVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
      pcVar1 = &cf_SX__Nbv___;
      if ((IVar9 & 1) == 0) {
        pcVar1 = &cf_SX__NbvN;
      }
      local_278 = PTR___NSConcreteStackBlock_02578660;
      local_270 = 0xc2000000;
      local_26c = 0;
      local_268 = FUN_017ca9d8;
      local_260 = &DAT_0257c978;
      _objc_copyWeak(auStack_248,auStack_70);
      IVar9 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      IVar10 = local_60;
      local_258 = IVar9;
      (*(code *)PTR__objc_retain_02578638)();
      local_250 = IVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_wcrActionWithTitle_block__026b4f60,pcVar1,&local_278);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_250);
      _objc_storeStrong(&local_258,0);
      _objc_destroyWeak(auStack_248);
    }
    else {
      local_1c0 = PTR___NSConcreteStackBlock_02578660;
      local_1b8 = 0xc2000000;
      local_1b4 = 0;
      local_1b0 = FUN_017ca8a4;
      local_1a8 = &DAT_0257c978;
      _objc_copyWeak(auStack_190,auStack_70);
      IVar10 = local_58;
      local_1c1 = 1;
      (*(code *)PTR__objc_retain_02578638)();
      IVar9 = local_60;
      local_1a0 = IVar10;
      (*(code *)PTR__objc_retain_02578638)();
      local_198 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_wcrActionWithTitle_block__026b4f60,&cf_9eQ_,&local_1c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      local_1c1 = 0;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar10 = local_28;
      puVar3 = local_78;
      local_200 = PTR___NSConcreteStackBlock_02578660;
      local_1f8 = 0xc2000000;
      local_1f4 = 0;
      local_1f0 = FUN_017ca90c;
      local_1e8 = &DAT_0257c978;
      _objc_copyWeak(auStack_1d0,auStack_70);
      IVar9 = local_58;
      local_201 = 1;
      (*(code *)PTR__objc_retain_02578638)();
      IVar2 = local_60;
      local_1e0 = IVar9;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar10,PTR_s_wcrActionWithTitle_block__026b4f60,&cf__TT,&local_200);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      local_201 = 0;
      (*(code *)PTR__objc_release_02578630)(IVar10);
      IVar2 = local_28;
      puVar3 = local_78;
      local_238 = PTR___NSConcreteStackBlock_02578660;
      local_230 = 0xc2000000;
      local_22c = 0;
      local_228 = FUN_017ca974;
      local_220 = &DAT_02579c60;
      _objc_copyWeak(auStack_210,auStack_70);
      local_239 = 1;
      IVar9 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_218 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_wcrActionWithTitle_block__026b4f60,&cf_Rd,&local_238);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      local_239 = 0;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_218);
      _objc_destroyWeak(auStack_210);
      _objc_storeStrong(&local_1d8,0);
      _objc_storeStrong(&local_1e0,0);
      _objc_destroyWeak(auStack_1d0);
      _objc_storeStrong(&local_198,0);
      _objc_storeStrong(&local_1a0,0);
      _objc_destroyWeak(auStack_190);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcrShowSheetTitle_actions__026b4f88,local_58,local_78);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_a0,0);
    _objc_destroyWeak(auStack_90);
    _objc_storeStrong(&local_78,0);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48,0);
  return;
}

