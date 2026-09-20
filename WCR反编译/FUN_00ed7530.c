// FUN_00ed7530 @ 00ed7530

void FUN_00ed7530(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_70;
  ulong local_58;
  ulong local_50;
  byte local_41;
  undefined *local_40;
  byte local_31;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_wcr_storePath_026ab6c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dictionaryWithContentsOfFile__026a3348);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_31 = 0;
  local_41 = 0;
  if (local_28 == (undefined *)0x0) {
    local_70 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_70;
  }
  else {
    local_70 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
    local_31 = 1;
    local_30 = local_70;
  }
  _objc_storeStrong(&DAT_028e2a40,local_70);
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  uVar3 = DAT_028e2a40;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e2a40,PTR_s_objectForKeyedSubscript__0269d098,&cf_hits);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_50;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2a40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_hits);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_mutableCopy_0269d8a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2a40,PTR_s_setObject_forKeyedSubscript__0269d248,uVar4,&cf_hits);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e2a40,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_hits);
  }
  uVar3 = DAT_028e2a40;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e2a40,PTR_s_objectForKeyedSubscript__0269d098,&cf_logs);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_58 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_58;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2a40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_logs);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      uVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_mutableCopy_0269d8a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2a40,PTR_s_setObject_forKeyedSubscript__0269d248,uVar4,&cf_logs);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e2a40,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,&cf_logs);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_28,0);
  return;
}

