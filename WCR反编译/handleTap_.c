// handleTap: @ 01e5ba38

/* Function Stack Size: 0x18 bytes */

void WCRefineTelegramTabStripView::handleTap_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_38 = lVar3;
  if ((lVar3 < 0) ||
     (puVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     (long)puVar1 <= lVar3)) {
    local_3c = 1;
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_48;
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTabId_026b01c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (((ulong)puVar1 & 1) == 0) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onSelectTabId_026c6a88);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar4 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setSelectedTabId_animated__026a8348,local_48,1);
      }
      else {
        IVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onSelectTabId_026c6a88);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(IVar4 + 0x10))();
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      local_3c = 0;
    }
    else {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onReselectTabId_026c6a80);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar4 != 0) {
        IVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onReselectTabId_026c6a80);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(IVar4 + 0x10))();
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      local_3c = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

