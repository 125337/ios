// handleItemLongPress: @ 018e74c4

/* Function Stack Size: 0x18 bytes */

void WCRefineClipboardHistoryListViewController::handleItemLongPress_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined8 in_d0;
  undefined8 in_d1;
  ID local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  lVar2 = local_28;
  if (lVar3 == 1) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_locationInView__026ca798);
    local_40 = in_d0;
    local_38 = in_d1;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    bVar1 = true;
    if (local_48 != 0) {
      IVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_row_0269e210);
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = (long)IVar6 <= (long)IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    IVar4 = local_18;
    if (!bVar1) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_row_0269e210);
      IVar7 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_objectAtIndexedSubscript__0269cc78,IVar6);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_presentActionsForItem_sourceView_026b8308,IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    local_2c = (uint)bVar1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

