// wcRefine_updateSearchBarFrameIfNeeded @ 01d770b8

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::wcRefine_updateSearchBarFrameIfNeeded
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  double dVar4;
  undefined8 uVar5;
  double in_d2;
  double dVar6;
  double in_d3;
  double dStack_b8;
  double local_48;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchBar_026a2698);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((IVar2 & 1) != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = *(ID *)(local_28 + (long)_tableViewMgr);
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_getTableView_026a09c8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_bounds_026ca548);
    if (in_d2 < 1.0) {
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_viewFrame_026a5398);
    }
    dVar6 = in_d2;
    local_48 = in_d2;
    if (in_d2 < 1.0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar6 = in_d2;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_48 = in_d2;
    }
    uVar5 = 0x3ff0000000000000;
    if ((1.0 <= local_48) &&
       (dVar4 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640),
       0.5 <= ABS(dVar6 - local_48))) {
      dStack_b8 = in_d3;
      if (in_d3 < 1.0) {
        dStack_b8 = 56.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,uVar5,local_48,dStack_b8,local_38,PTR_s_setFrame__026ca960);
      IVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tableHeaderView_0269ea08);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_38;
      (*(code *)PTR__objc_release_02578630)();
      if (IVar3 == IVar2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTableHeaderView__0269ea10,local_38);
      }
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

