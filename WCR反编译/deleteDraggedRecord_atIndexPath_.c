// deleteDraggedRecord:atIndexPath: @ 01b14748

/* Function Stack Size: 0x20 bytes */

void WCRefineKeywordAlertHistoryCardViewController::deleteDraggedRecord_atIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  long local_130;
  ID local_128;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  long local_78;
  ulong local_70;
  char local_61;
  ID local_60;
  undefined1 local_51;
  ID local_50;
  undefined4 local_44;
  long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resetDraggingDeleteState_026bebe0);
    local_44 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayedRecords_026be900);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    local_50 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_51 = (undefined1)IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSuppressRecordsChangeReload__026beba0,1)
    ;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSuppressRecordsChangeReload__026beba0,0)
    ;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recomputeDisplayedRecords_026be8f8);
    _objc_retainAutoreleasedReturnValue();
    local_61 = false;
    local_60 = IVar3;
    if (local_40 != 0) {
      lVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_item_026a1890);
      local_61 = false;
      if (lVar5 < (long)local_50) {
        IVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
        local_61 = IVar3 + 1 == local_50;
      }
    }
    if ((bool)local_61 == false) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resetDraggingDeleteState_026bebe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadData_0269e400);
      local_44 = 1;
    }
    else {
      if (local_60 == 0) {
        local_128 = *(ID *)PTR____NSArray0___02578280;
      }
      else {
        local_128 = local_60;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDisplayedRecords__026bea80,local_128);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recomputeDedupCountMap_026bea88);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageCount_026bea90);
      IVar4 = local_28;
      local_70 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentPage_0269f4e8);
      if (local_70 <= IVar4) {
        if (local_70 == 0) {
          local_130 = 0;
        }
        else {
          local_130 = local_70 - 1;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentPage__0269f4f0,local_130);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resetDraggingDeleteState_026bebe0);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardLayout_026be978);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      local_a0 = PTR___NSConcreteGlobalBlock_02578658;
      local_98 = 0xd0800000;
      local_94 = 0;
      local_90 = FUN_01b14d6c;
      local_88 = &DAT_0257ab20;
      (*(code *)PTR__objc_retain_02578638)();
      lVar5 = local_40;
      local_80 = IVar3;
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_28;
      local_78 = lVar5;
      local_c8 = PTR___NSConcreteStackBlock_02578660;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_01b14e68;
      local_b0 = &DAT_02579d00;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_performBatchUpdates_completion__026bec28,&local_a0,&local_c8);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateNavigationTitle_026beaa0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateNavigationItems_026badf0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateBottomBar_026be928);
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_80,0);
      local_44 = 0;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

