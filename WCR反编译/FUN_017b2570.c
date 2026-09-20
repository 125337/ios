// FUN_017b2570 @ 017b2570

undefined8 FUN_017b2570(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38 [3];
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homeGroupingExcludeSessions_026a2be0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38[0] = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_38[0] == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38[0];
    local_38[0] = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_38[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_containsObject__0269cbb8,local_18);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_addObject__0269d180,local_18);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setHomeGroupingExcludeSessionsEn_026a2ef0,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setHomeGroupingExcludeSessions__026a2ef8,local_38[0]);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return 1;
}

