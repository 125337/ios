// FUN_00048660 @ 00048660

void FUN_00048660(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30 [3];
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00047ab4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_18 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_30[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    FUN_0003db3c(local_18);
    local_34 = 1;
  }
  else {
    uVar2 = local_18;
    FUN_0004a068();
    if ((uVar2 & 1) == 0) {
      FUN_0003db3c(local_18);
      local_34 = 1;
    }
    else {
      FUN_0003df34();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,local_18,local_30[0]);
      _objc_sync_exit(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      dVar3 = _dispatch_time(0,3000000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30[0];
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_0004a2f0;
      local_50 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar2;
      _dispatch_after(dVar3,puVar4,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
      local_34 = 0;
    }
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

