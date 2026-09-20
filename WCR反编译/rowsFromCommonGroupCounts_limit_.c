// rowsFromCommonGroupCounts:limit: @ 014e7a64

/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsEngine::rowsFromCommonGroupCounts_limit_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_48;
  unsigned_long_long local_40;
  undefined *local_38;
  unsigned_long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  local_38 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_30;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

