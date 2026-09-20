// FUN_0067a68c @ 0067a68c

void FUN_0067a68c(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  dispatch_time_t dVar6;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined **local_50;
  double local_48;
  uint local_40;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar2 = true;
  if ((((ulong)puVar4 & 1) != 0) && (bVar2 = true, local_28 != 0)) {
    bVar2 = local_30 == 0;
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (bVar2) {
    local_40 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_60 = local_28;
    local_48 = param_1;
    if (param_1 < 0.0) {
      local_48 = 0.0;
    }
    ppuVar5 = &local_80;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_0067aa3c;
    local_68 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = lVar1;
    _objc_retainBlock();
    puVar3 = PTR___dispatch_main_q_02578680;
    bVar2 = 0.0 < local_48;
    local_50 = ppuVar5;
    if (bVar2) {
      dVar6 = _dispatch_time(0,(long)(local_48 * 1000000000.0));
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar6,puVar3,local_50);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_40 = (uint)!bVar2;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

