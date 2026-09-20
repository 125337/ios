// FUN_006797a4 @ 006797a4

void FUN_006797a4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  dispatch_time_t dVar7;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  double local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar3 = local_28 == 0;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (((ulong)puVar5 & 1) == 0 || bVar3) {
    local_48 = 1;
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_70 = local_28;
    local_50 = param_1;
    if (param_1 < 0.0) {
      local_50 = 0.0;
    }
    ppuVar6 = &local_90;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_00679d7c;
    local_78 = &DAT_02578f80;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_38;
    local_68 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar1;
    _objc_retainBlock();
    local_58 = ppuVar6;
    if (0.0 < local_50) {
      dVar7 = _dispatch_time(0,(long)(local_50 * 1000000000.0));
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar7,puVar4,local_58);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_48 = 0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      puVar4 = PTR___dispatch_main_q_02578680;
      if (((ulong)puVar5 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      else {
        (*(code *)local_58[2])();
      }
      local_48 = 1;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

