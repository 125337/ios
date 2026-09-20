// FUN_0155648c @ 0155648c

void FUN_0155648c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ulong local_30;
  ulong local_28;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) || (uVar2 = local_18, FUN_01564574(), (uVar2 & 1) != 0)) {
    local_1c = 1;
  }
  else {
    uVar2 = local_18;
    FUN_01532e3c();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_18;
      FUN_0158a7b0();
      _objc_retainAutoreleasedReturnValue();
      local_28 = uVar2;
      if (uVar2 != 0) {
        dVar3 = _dispatch_time(0,350000000);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_28;
        local_50 = PTR___NSConcreteStackBlock_02578660;
        local_48 = 0xc2000000;
        local_44 = 0;
        local_40 = FUN_0158a90c;
        local_38 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_30 = uVar1;
        _dispatch_after(dVar3,puVar4,&local_50);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_30,0);
      }
      local_1c = (uint)(uVar2 == 0);
      _objc_storeStrong(&local_28,0);
    }
    else {
      dVar3 = _dispatch_time(0,450000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar3,puVar4,&PTR___NSConcreteGlobalBlock_02586b20);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_1c = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

