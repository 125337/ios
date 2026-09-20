// allCachedDataItemsFromMemoryOnly @ 010be090

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsMonitor::allCachedDataItemsFromMemoryOnly(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  uint local_58;
  ID local_48;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = (undefined *)0x0;
  local_48 = 0;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  _objc_storeStrong(&local_48,*(undefined8 *)(local_30 + 0x58));
  IVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  IVar4 = local_48;
  if (IVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    _objc_alloc();
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_memoryCache_026ae658);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithDictionary_copyItems__026ae710,IVar4,0);
    puVar3 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = IVar4;
  }
  local_58 = (uint)(IVar1 != 0);
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_58 == 0) {
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined *)0x0) {
      IVar4 = *(ID *)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = 1;
      local_28 = IVar4;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_40;
      local_88 = PTR___NSConcreteGlobalBlock_02578658;
      local_80 = 0xd0800000;
      local_7c = 0;
      local_78 = FUN_010be3a8;
      local_70 = &DAT_02585278;
      local_60 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_88);
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sortedItemsFromArray__026ae6d8,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_58 = 1;
      local_28 = IVar4;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

