// watchedFriendsFrom:to:limit: @ 014e8430

/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsEngine::watchedFriendsFrom_to_limit_
             (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4,
             unsigned_long_long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50;
  unsigned_long_long local_48;
  unsigned_int local_40;
  unsigned_int local_3c;
  undefined *local_38;
  unsigned_long_long local_30;
  unsigned_int local_28;
  unsigned_int local_24;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_30 = param_5;
  local_28 = param_4;
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  FUN_014e41d8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_38;
  local_40 = local_24;
  local_3c = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = puVar2;
  local_48 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

