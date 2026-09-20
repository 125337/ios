// FUN_0157b6ec @ 0157b6ec

void FUN_0157b6ec(undefined8 param_1,long param_2)

{
  ulong uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ulong local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = param_2;
  if (param_2 < 1) {
    local_24 = 1;
  }
  else {
    uVar1 = local_18;
    FUN_0157c2cc(param_2);
    if ((uVar1 & 1) == 0) {
      dVar2 = _dispatch_time(0,160000000);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_18;
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_0157d764;
      local_40 = &DAT_0257cc98;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = uVar1;
      local_30 = local_20;
      _dispatch_after(dVar2,puVar3,&local_58);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_38,0);
      local_24 = 0;
    }
    else {
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

