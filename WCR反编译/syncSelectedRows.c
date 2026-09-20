// syncSelectedRows @ 01a00148

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationResultListViewController::syncSelectedRows(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_80;
  undefined *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingList_026bb590);
  if ((param_1 & 1) != 0) {
    local_28 = (cfstringStruct *)0x0;
    while( true ) {
      pcVar4 = local_28;
      pcVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (pcVar3 <= pcVar4) break;
      pcVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar2 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_41 = false;
      bVar1 = ((ulong)pcVar2 & 1) == 0;
      if (bVar1) {
        local_80 = &::cf___;
      }
      else {
        local_80 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
        _objc_retainAutoreleasedReturnValue();
        local_40 = local_80;
      }
      local_41 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = local_80;
      if ((local_41 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_indexPathForRow_inSection__0269e9a0,
                 local_28,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_18;
      local_50 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedUserNames_026bb538);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      else {
        pcVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_38,0);
      _objc_storeStrong(&local_30,0);
      local_28 = (cfstringStruct *)((long)&local_28->field0_0x0 + 1);
    }
  }
  return;
}

