// FUN_002ef120 @ 002ef120

void FUN_002ef120(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  double local_30;
  undefined4 local_28;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_gestureScreenshotEnabled_026a1ed8);
  if (((ulong)puVar2 & 1) == 0) {
    local_28 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_30 = param_1;
    if (DAT_02323d00 <= param_1 - DAT_028c9a18) {
      DAT_028c9a18 = param_1;
      FUN_002f20fc();
      dVar3 = _dispatch_time(0,100000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_18;
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_002f21b4;
      local_40 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = puVar1;
      _dispatch_after(dVar3,puVar2,&local_58);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_38,0);
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

