// FUN_0074f554 @ 0074f554

void FUN_0074f554(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  local_28 = 0;
  uVar1 = local_18;
  FUN_00750524(local_18,&local_28);
  _objc_storeStrong(&local_20,local_28);
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_00750970();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      FUN_007490e0(0x3ff3333333333333,local_18,&cf_special,local_20);
      if ((uVar1 & 1) == 0) {
        local_38 = 1;
      }
      else {
        uVar1 = local_20;
        FUN_0074e2f8();
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar1;
        if (uVar1 == 0) {
          local_38 = 1;
        }
        else {
          uVar1 = local_18;
          FUN_00750c8c(local_18,local_20,local_20);
          _objc_retainAutoreleasedReturnValue();
          local_48 = uVar1;
          if (uVar1 != 0) {
            FUN_00751420(local_20,uVar1);
          }
          puVar2 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_40;
          local_70 = PTR___NSConcreteStackBlock_02578660;
          local_68 = 0xc2000000;
          local_64 = 0;
          local_60 = FUN_00751620;
          local_58 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_50 = uVar1;
          _dispatch_async(puVar2,&local_70);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_50);
          _objc_storeStrong(&local_48,0);
          local_38 = 0;
        }
        _objc_storeStrong(&local_40,0);
      }
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

