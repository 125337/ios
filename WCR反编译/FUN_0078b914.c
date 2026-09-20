// FUN_0078b914 @ 0078b914

byte FUN_0078b914(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  ulong local_b8;
  long local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_3d [5];
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = param_2;
  if ((local_30 == 0) || (param_2 == 0)) {
    local_21 = 0;
    local_3d[1] = 1;
    local_3d[2] = 0;
    local_3d[3] = 0;
    local_3d[4] = 0;
  }
  else {
    local_3d[0] = 0;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    uVar3 = local_30;
    FUN_0078dc40(local_30,param_2,&local_58,&local_60,local_3d);
    _objc_storeStrong(&local_48,local_58);
    _objc_storeStrong(&local_50,local_60);
    puVar4 = PTR___dispatch_main_q_02578680;
    if ((uVar3 & 1) == 0) {
      if ((local_3d[0] & 1) == 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,local_38);
        puVar4 = PTR___dispatch_main_q_02578680;
        if ((uVar3 & 1) == 0) {
          local_21 = 0;
          local_3d[1] = 1;
          local_3d[2] = 0;
          local_3d[3] = 0;
          local_3d[4] = 0;
        }
        else {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_30;
          local_d8 = PTR___NSConcreteStackBlock_02578660;
          local_d0 = 0xc2000000;
          local_cc = 0;
          local_c8 = FUN_0078e45c;
          local_c0 = &DAT_025791c0;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = uVar3;
          local_b0 = local_38;
          _dispatch_async(puVar4,&local_d8);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_21 = 1;
          local_3d[1] = 1;
          local_3d[2] = 0;
          local_3d[3] = 0;
          local_3d[4] = 0;
          _objc_storeStrong(&local_b8,0);
        }
      }
      else {
        local_21 = 0;
        local_3d[1] = 1;
        local_3d[2] = 0;
        local_3d[3] = 0;
        local_3d[4] = 0;
      }
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_48;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_0078e298;
      local_90 = &DAT_025796f0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_50;
      local_88 = uVar2;
      local_78 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = uVar1;
      _dispatch_async(puVar4,&local_a8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_21 = 1;
      local_3d[1] = 1;
      local_3d[2] = 0;
      local_3d[3] = 0;
      local_3d[4] = 0;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

