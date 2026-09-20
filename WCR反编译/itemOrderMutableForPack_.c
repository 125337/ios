// itemOrderMutableForPack: @ 0107e220

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::itemOrderMutableForPack_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_0107e3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_18;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_itemOrderMutable_026ae258);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKeyedSubscript__0269d098,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,local_30);
  }
  puVar2 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

