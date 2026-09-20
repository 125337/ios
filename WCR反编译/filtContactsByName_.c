// filtContactsByName: @ 015291c0

/* Function Stack Size: 0x18 bytes */

ID WCRCommonGroupMemberDataLogic::filtContactsByName_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *local_50;
  undefined *local_38;
  undefined8 local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doSearch__026b0370,local_30);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_filteredContacts_026b0358);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_38 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_50;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

