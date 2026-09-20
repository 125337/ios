// commitMultiReplyTextItem: @ 01a0cf48

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordMultiReplyEditorViewController::commitMultiReplyTextItem_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Q_N_Nzz);
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (4000 < uVar2) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringToIndex__0269d6c0,4000);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingItemIndex_026bb740);
    bVar1 = false;
    if (IVar4 != 0x7fffffffffffffff) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingItemIndex_026bb740);
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar4 < IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    uVar2 = local_30;
    if (bVar1) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingItemIndex_026bb740);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_setObject_atIndexedSubscript__0269e970,uVar2,IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__fbc);
    }
    else {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__mR);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingItemIndex__026bb6b0,DAT_02339e98)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistItems_026bb728);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

