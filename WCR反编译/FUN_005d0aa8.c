// FUN_005d0aa8 @ 005d0aa8

void FUN_005d0aa8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_005d13f8();
    if ((uVar2 & 1) == 0) {
      dVar3 = _dispatch_time(0,300000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_18;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_005d1528;
      local_48 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_20;
      local_40 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = uVar2;
      _dispatch_after(dVar3,puVar4,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_40,0);
      local_30 = 0;
    }
    else {
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

