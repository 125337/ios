// wcrGrouping_showSearchHeader @ 0035fd28

/* Function Stack Size: 0x10 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_showSearchHeader(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  double in_d0;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 uVar5;
  undefined8 in_d2;
  double dVar6;
  undefined8 in_d3;
  double dVar7;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_90;
  undefined *local_88;
  double local_80;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchActive_026a2690);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchActive__026a26f8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchQuery__026a2700,&::cf___);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetWidth();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_38 = in_d0;
    if (in_d0 <= 0.0) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
      local_38 = in_d0;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    local_80 = 56.0;
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar5 = 0;
    uVar4 = 0;
    dVar6 = local_38;
    dVar7 = local_80;
    FUN_00360240();
    local_a8 = uVar4;
    local_a0 = uVar5;
    local_90 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,uVar5,dVar6,dVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_88 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = PTR__OBJC_CLASS___UISearchBar_026ce298;
    _objc_alloc();
    dVar6 = local_38 - 16.0;
    uVar4 = 0x4020000000000000;
    dVar7 = local_80 - 8.0;
    uVar5 = 0x4010000000000000;
    FUN_00360240();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,uVar5,dVar6,dVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_b0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlaceholder__0269e9c8,&cf_d__);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setDelegate__026ca910,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSearchBarStyle__0269e9c0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setShowsCancelButton__026a2708,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemBackgroundColor_026ca848);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_searchTextField_0269e9f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addSubview__026ca4c0,local_b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchBar__026a2710,local_b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchHeaderView__026a2718,local_88);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_becomeFirstResponder_0269d108);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_applySearchFilter_026a2720);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_88,0);
  }
  else {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  return;
}

