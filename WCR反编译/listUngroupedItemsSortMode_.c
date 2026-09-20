// listUngroupedItemsSortMode: @ 01085c00

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::listUngroupedItemsSortMode_(ID param_1,SEL param_2,long_long param_3)

{
  byte bVar1;
  long_long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_78;
  byte local_69;
  ID local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined *local_48;
  long_long local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if (DAT_028e3298 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = DAT_028e3298;
    DAT_028e3298 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_u__ld);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = DAT_028e3298;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3298,PTR_s_objectForKeyedSubscript__0269d098,puVar4)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_30;
    local_60 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_listItemsInPack_sortMode__026ae348,&::cf___,local_40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObjectsFromArray__0269d540);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_absolutePathFromRelative__026ae2c0,&cf__gR_);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_68 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = 0;
    if (((ulong)puVar3 & 1) != 0) {
      bVar1 = local_69;
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_60;
    if ((bVar1 & 1) != 0) {
      IVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_listItemsInPack_sortMode__026ae348,&cf__gR_,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObjectsFromArray__0269d540);
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    IVar5 = local_30;
    lVar2 = local_40;
    puVar4 = local_60;
    IVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_itemOrderForPack__026ae340,&cf___ungrouped__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_sortItems_sortMode_order__026ae318,puVar4,lVar2);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    puVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
    local_78 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3298,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,local_48);
    puVar4 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar4;
    local_54 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_54 = 1;
    local_28 = puVar3;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

