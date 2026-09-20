// wcrGrouping_removeItem: @ 00367aa4

/* Function Stack Size: 0x18 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_removeItem_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_a0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  byte local_59;
  long local_58;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_41 = 0;
    local_a0 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_a0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_a0;
    }
    local_41 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_a0;
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_indexOfObjectIdenticalTo__0269e160,local_28);
    local_59 = 0;
    bVar1 = false;
    local_50 = puVar2;
    if (puVar2 == (undefined *)0x7fffffffffffffff) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = lVar4 != 0;
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    lVar4 = local_28;
    puVar2 = local_38;
    if (bVar1) {
      local_88 = PTR___NSConcreteGlobalBlock_02578658;
      local_80 = 0xd0800000;
      local_7c = 0;
      local_78 = FUN_00367e30;
      local_70 = &DAT_0257c608;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_indexOfObjectPassingTest__026a27f8,&local_88);
      local_50 = puVar2;
      _objc_storeStrong(&local_68,0);
    }
    bVar1 = local_50 != (undefined *)0x7fffffffffffffff;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectAtIndex__0269d530,local_50);
      puVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrGrouping_sortedItems__026a27c8,local_38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAllItems__026a27d0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_applySearchFilter_026a2720);
    }
    local_2c = (uint)!bVar1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

