// FUN_0053ed60 @ 0053ed60

long FUN_0053ed60(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined *local_40 [3];
  long local_28;
  undefined8 local_20;
  long local_18;
  
  pcVar1 = DAT_028cb2e8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(param_1,local_20);
  local_28 = param_1;
  if (param_1 != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_momentsDraftEnabled_026a4d60);
    if (((ulong)puVar3 & 1) != 0) {
      dVar4 = _dispatch_time(0,200000000);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_28;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_005431bc;
      local_50 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = lVar2;
      _dispatch_after(dVar4,puVar3,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(local_40,0);
  }
  lVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return lVar2;
}

