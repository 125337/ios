// FUN_00039324 @ 00039324

void FUN_00039324(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  double dVar5;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  double local_68;
  ulong local_60;
  undefined4 local_54;
  ulong local_50 [3];
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar1 = local_28;
  FUN_000397a0(local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 != 0) {
    FUN_00039984(uVar1,local_38,&cf_receipt);
  }
  uVar1 = local_28;
  FUN_00039b20(local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = uVar1;
  if (uVar1 == 0) {
    local_54 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar2;
    (*(code *)PTR__objc_release_02578630)();
    FUN_0003bb20();
    _objc_retainAutoreleasedReturnValue();
    dVar5 = 300.0;
    uVar2 = uVar1;
    FUN_0003b818();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      local_54 = 1;
    }
    else {
      FUN_00038338(local_50[0]);
      FUN_00035798();
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_68 = dVar5;
      if (dVar5 < 0.0) {
        local_68 = 0.0;
      }
      dVar4 = _dispatch_time(0,(long)(local_68 * 1000000000.0));
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50[0];
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_0003bb94;
      local_78 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = uVar1;
      _dispatch_after(dVar4,puVar3,&local_90);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_70,0);
      local_54 = 0;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

