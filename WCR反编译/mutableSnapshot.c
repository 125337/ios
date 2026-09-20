// mutableSnapshot @ 00f7de20

/* Function Stack Size: 0x10 bytes */

ID WCRefineFriendRelationStore::mutableSnapshot(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 local_30;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_snapshot_026a25c0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_50 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_30 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return (ID)local_50;
}

