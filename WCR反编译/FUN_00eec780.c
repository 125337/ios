// FUN_00eec780 @ 00eec780

void FUN_00eec780(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_d0;
  undefined *local_68;
  long local_60 [4];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  uVar2 = local_28;
  FUN_00eec1e8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_orderedSetWithArray__026a4b80);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_40 = (undefined *)0x0;
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_allValues_0269dae8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_allValues_0269dae8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_40;
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = local_40;
  if (local_40 != (undefined *)0x0) {
    local_60[0] = 0;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = ((ulong)puVar3 & 1) == 0;
    if (bVar1) {
      local_d0 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithArray__0269eab8,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_d0;
    }
    else {
      local_d0 = local_40;
    }
    _objc_storeStrong(local_60,local_d0);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    lVar5 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_count_0269cfe0);
    if (lVar5 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_removeObjectsInArray__026a8500,local_60[0]);
    }
    _objc_storeStrong(local_60,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setValue_forKey__0269d300,local_38,&cf_m_setCanSelectContact);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

