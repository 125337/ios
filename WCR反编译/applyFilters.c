// applyFilters @ 01bd7244

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsCacheViewController::applyFilters(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID local_1b0;
  ID local_160;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  ID local_118;
  ID local_110;
  ID local_108;
  ID local_100;
  ID local_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  ID local_e0;
  ID local_d8;
  ID local_d0;
  long local_c8;
  undefined1 auStack_c0 [24];
  undefined *local_a8;
  undefined1 auStack_a0 [8];
  ID local_98;
  bool local_89;
  ID local_88;
  byte local_79;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLoading_026ae188);
  IVar2 = local_28;
  if ((param_1 & 1) == 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filterGeneration_026c0748);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setFilterGeneration__026c0750);
    IVar2 = local_28;
    local_38 = IVar1 + 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filterQueue_026c06f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    local_160 = IVar2;
    if (IVar2 == 0) {
      local_160 = *(ID *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_160;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusControl_026c07a0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    local_50 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedKind_026c07f8);
    IVar1 = local_28;
    local_58 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedCountIndex_026c0800);
    IVar2 = local_28;
    local_60 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedUsername_026c0810);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedTagName_026c0808);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_79 = 0;
    local_89 = false;
    if (IVar1 == 0) {
      local_1b0 = 0;
    }
    else {
      local_1b0 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedTagUsernames_026c0840);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = local_1b0;
    }
    local_89 = IVar1 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_1b0;
    if ((local_89 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)();
    FUN_01bd7a1c();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_98 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_initWeak(auStack_a0,local_28);
    puVar3 = PTR__OBJC_CLASS___NSBlockOperation_026cf428;
    _objc_alloc_init();
    local_a8 = puVar3;
    _objc_initWeak(auStack_c0,puVar3);
    puVar3 = local_a8;
    local_138 = PTR___NSConcreteStackBlock_02578660;
    local_130 = 0xc2000000;
    local_12c = 0;
    local_128 = FUN_01bd7a90;
    local_120 = &DAT_0258b8a0;
    _objc_copyWeak(auStack_f0,auStack_c0);
    IVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_68;
    local_118 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_70;
    local_110 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_48;
    local_108 = IVar2;
    local_e0 = local_60;
    local_d8 = local_50;
    local_d0 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_98;
    local_100 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = IVar2;
    _objc_copyWeak(auStack_e8,auStack_a0);
    local_c8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addExecutionBlock__026c0680,&local_138);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filterQueue_026c06f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_destroyWeak(auStack_e8);
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_118,0);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c0);
    _objc_storeStrong(&local_a8,0);
    _objc_destroyWeak(auStack_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

