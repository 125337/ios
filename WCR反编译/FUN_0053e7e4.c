// FUN_0053e7e4 @ 0053e7e4

long FUN_0053e7e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  dispatch_time_t dVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  byte local_49;
  undefined *local_48 [3];
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_18;
  pcVar1 = DAT_028cb2d8;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(lVar2,local_20,local_28);
  local_30 = lVar2;
  if (lVar2 != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    local_48[0] = puVar3;
    FUN_0054255c();
    local_49 = (byte)uVar4;
    puVar3 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_momentsDraftEnabled_026a4d60);
    if ((((ulong)puVar3 & 1) != 0) || ((local_49 & 1) != 0)) {
      if ((local_49 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBNeedAnimation__026a4da8,0);
        FUN_005426d4(local_30);
      }
      dVar5 = _dispatch_time(0,200000000);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_30;
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_005427dc;
      local_60 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = lVar2;
      _dispatch_after(dVar5,puVar3,&local_78);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(local_48,0);
  }
  lVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return lVar2;
}

