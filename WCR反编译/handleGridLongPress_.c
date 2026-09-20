// handleGridLongPress: @ 019907a0

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::handleGridLongPress_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
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
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar2 == 1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectMode_026ba2a8);
    if (((IVar3 & 1) == 0) &&
       (IVar3 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_protectionMode_026ba310),
       lVar2 = local_28, (IVar3 & 1) == 0)) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collectionView_026a0fd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_locationInView__026ca798);
      local_40 = in_d0;
      local_38 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collectionView_026a0fd8);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      bVar1 = true;
      if (local_48 != 0) {
        IVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_item_026a1890);
        IVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayEntries_026ba498);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = (long)IVar5 <= (long)IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      IVar3 = local_18;
      if (!bVar1) {
        IVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayEntries_026ba498);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_item_026a1890);
        IVar6 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_objectAtIndexedSubscript__0269cc78,IVar5);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_showActionsForEntry__026ba550);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      local_2c = (uint)bVar1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_2c = 1;
    }
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

