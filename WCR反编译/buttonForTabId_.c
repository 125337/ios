// buttonForTabId: @ 01e56ee4

/* Function Stack Size: 0x18 bytes */

ID WCRefineTelegramTabStripView::buttonForTabId_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_40 = (undefined *)0x0;
  while( true ) {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tabButtons_026c6940);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = false;
    if (local_40 < puVar3) {
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      bVar1 = local_40 < puVar3;
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (!bVar1) break;
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar4 & 1) != 0) {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tabButtons_026c6940);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
LAB_01e57194:
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
      _objc_autoreleaseReturnValue();
      return (ID)local_18;
    }
    local_40 = local_40 + 1;
  }
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tabButtons_026c6940);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  goto LAB_01e57194;
}

