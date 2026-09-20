// rebuildHeaderAndBar @ 01cff020

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileBgMaterialRepositoryViewController::rebuildHeaderAndBar(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double in_d2;
  undefined8 uVar8;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  char *local_58;
  char *local_50;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  char *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (char *)0x0;
  pcVar1 = "MMUICommonUtil";
  local_48 = param_2;
  local_40 = param_1;
  _objc_getClass();
  local_60 = PTR_s_getBarButtonWithImageName_target_026b47f8;
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,
             PTR_s_getBarButtonWithImageName_target_026b47f8);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,local_60,&cf_info_tap,local_40,PTR_s_showMaterialInfo_026c3c00,2,&cf_f);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_50;
    local_50 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_50;
  puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar1 = local_50;
    local_50 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  local_68 = (undefined *)0x0;
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_currentTab_026c3bd8);
  if (IVar4 == 2) {
    puVar5 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = local_68;
    local_68 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_currentTab_026c3bd8);
    if (IVar4 == 3) {
      puVar5 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar3 = local_68;
      local_68 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar3 = local_68;
      local_68 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  local_38 = local_68;
  local_30 = local_50;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_currentTab_026c3bd8);
  FUN_01cff9a0();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithFrame__026ca6e8);
  local_70 = puVar3;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bounds_026ca548);
  in_d2 = in_d2 - 32.0;
  FUN_01cff9a0();
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tabControl_026c3be0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tabControl_026c3be0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar3 = local_70;
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tabControl_026c3be0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_currentTab_026c3bd8);
  if (IVar4 == 2) {
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar4 == 0) {
      puVar3 = PTR__OBJC_CLASS___UISearchBar_026ce298;
      _objc_alloc();
      in_d2 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSearchBar__026a2710);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_searchBar_026a2698);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_searchBar_026a2698);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bounds_026ca548);
    uVar6 = 0;
    uVar7 = 0x4047000000000000;
    uVar8 = 0x4046000000000000;
    FUN_01cff9a0();
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,in_d2,uVar8);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar3 = local_70;
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  else {
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

