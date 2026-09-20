// topCommonGroupFriendsLimit: @ 014e839c

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsEngine::topCommonGroupFriendsLimit_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_commonGroupCounts_026af810);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_rowsFromCommonGroupCounts_limit__026af848,IVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_autoreleaseReturnValue();
  return param_1;
}

