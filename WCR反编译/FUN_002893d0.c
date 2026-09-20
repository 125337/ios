// FUN_002893d0 @ 002893d0

void FUN_002893d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    FUN_002762e0(0x40ac200000000000);
    lVar3 = local_18;
    FUN_00276030();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar3;
    if (lVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRQ_eSN_);
      local_30 = 1;
    }
    else {
      lVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_spec);
      _objc_retainAutoreleasedReturnValue();
      local_40 = lVar3;
      if (lVar3 == 0) {
        lVar4 = local_38;
        FUN_0027a410();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_40;
        local_40 = lVar4;
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      FUN_0028e760(local_38);
      FUN_0028e7a0(local_38);
      FUN_00276920();
      FUN_0027c064(local_38,local_40,&PTR___NSConcreteGlobalBlock_0257b588);
      _objc_storeStrong(&local_40,0);
      local_30 = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    FUN_00286910(local_18);
    local_30 = 1;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

