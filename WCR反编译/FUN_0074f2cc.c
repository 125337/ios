// FUN_0074f2cc @ 0074f2cc

void FUN_0074f2cc(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38 [3];
  int local_20;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar2 = local_18;
    FUN_00748ad4(local_18,&cf_m_uiMessageType);
    local_20 = (int)uVar2;
    if (local_20 == 0x3f) {
      uVar2 = local_18;
      FUN_00748910(local_18,0);
      _objc_retainAutoreleasedReturnValue();
      local_38[0] = uVar2;
      FUN_00748c34(local_18);
      uVar2 = local_18;
      FUN_007485ec();
      if ((uVar2 & 1) == 0) {
        local_1c = 1;
      }
      else {
        uVar2 = local_18;
        FUN_007490e0(0x3ff3333333333333,local_18,&cf_signal,local_38[0]);
        uVar1 = (uint)uVar2;
        if ((uVar2 & 1) == 0) {
          local_1c = 1;
        }
        else {
          FUN_007493bc();
          if ((uVar1 & 1) == 0) {
            local_1c = 1;
          }
          else {
            FUN_00749564(local_18);
            uVar2 = local_18;
            (*(code *)PTR__objc_retain_02578638)();
            puVar3 = PTR___dispatch_main_q_02578680;
            local_40 = uVar2;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_40;
            local_68 = PTR___NSConcreteStackBlock_02578660;
            local_60 = 0xc2000000;
            local_5c = 0;
            local_58 = FUN_007504f4;
            local_50 = &DAT_02578c20;
            (*(code *)PTR__objc_retain_02578638)();
            local_48 = uVar2;
            _dispatch_async(puVar3,&local_68);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_48);
            _objc_storeStrong(&local_40,0);
            local_1c = 0;
          }
        }
      }
      _objc_storeStrong(local_38,0);
    }
    else {
      local_1c = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

