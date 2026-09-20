// FUN_0053eab8 @ 0053eab8

long FUN_0053eab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined *local_60 [3];
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = local_28;
  pcVar1 = DAT_028cb2e0;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(lVar2,local_30,local_38,local_40);
  local_48 = lVar2;
  if (lVar2 != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_momentsDraftEnabled_026a4d60);
    if (((ulong)puVar3 & 1) != 0) {
      dVar4 = _dispatch_time(0,200000000);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_48;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_00542ccc;
      local_70 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = lVar2;
      _dispatch_after(dVar4,puVar3,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(local_60,0);
  }
  lVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return lVar2;
}

