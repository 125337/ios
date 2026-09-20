// wcrGrouping_onMoreButtonTapped @ 0035c0cc

/* Function Stack Size: 0x10 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_onMoreButtonTapped(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  uint local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [15];
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchActive_026a2690);
  local_29 = 0;
  local_74 = 0;
  if ((param_1 & 1) != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_74 = (uint)IVar2;
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  if ((local_74 & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar3 != 0) {
      _objc_initWeak(auStack_38,local_18);
      puVar1 = PTR_WCRefineGroupManagementViewController_026ce580;
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_18;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_0035c37c;
      local_58 = &DAT_0257be28;
      _objc_copyWeak(auStack_50,auStack_38);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_pushGroupEditorForGroupId_fromVi_026a26a8,IVar3,IVar2,&local_70);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_38);
    }
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  return;
}

