// configureNavigationItems @ 01c6efac

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::configureNavigationItems(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  ID local_c0;
  ID local_b8;
  undefined *local_b0;
  SEL local_a8;
  ID local_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  undefined *local_58;
  ID local_50;
  undefined *local_48;
  ID local_40;
  undefined *local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = param_2;
  local_a0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_multiSelect_026c25f0);
  if ((param_1 & 1) == 0) {
    IVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_navigationButton_selector__026c2600,&cf_c_,
               PTR_s_showSortSheet_026c2618);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_a0;
    local_b8 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_navigationButton_selector__026c2600,&cf__eQ,
               PTR_s_showImportSheet_026c2620);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_a0;
    local_c0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_selectionMode_026c2628);
    if ((IVar2 & 1) == 0) {
      local_98 = local_c0;
      IVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_navigationButton_selector__026c2600,&cf__Q,
                 PTR_s_showExportSheet_026c2638);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_b8;
      IVar3 = local_a0;
      local_90 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_navigationButton_selector__026c2600,&cf_Y,
                 PTR_s_enterMultiSelect_026c1ae8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_80 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_98
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      local_78 = local_c0;
      IVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_navigationButton_selector__026c2600,&cf__g,
                 PTR_s_selectRandom_026c2630);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_b8;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_70 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setToolbarItems__026bb598);
    IVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
  }
  else {
    IVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar2 = local_a0;
    local_b0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_navigationButton_selector__026c2600,&cf_hQ,PTR_s_selectAll_026c25f8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_b0;
    IVar3 = local_a0;
    local_60 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_navigationButton_selector__026c2600,&cf__Q,
               PTR_s_exportSelected_026c1af8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_b0;
    IVar5 = local_a0;
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_navigationButton_selector__026c2600,&cf_Rd,
               PTR_s_confirmBatchDelete_026c2608);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_b0;
    IVar1 = local_a0;
    local_40 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_navigationButton_selector__026c2600,&cf__b,
               PTR_s_leaveMultiSelect_026c2610);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setToolbarItems__026bb598);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_b0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

