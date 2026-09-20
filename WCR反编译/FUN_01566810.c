// FUN_01566810 @ 01566810

void FUN_01566810(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_40 = param_4;
  local_38 = param_3;
  if (param_3 == DAT_028e3a00) {
    local_50 = 0;
    local_58 = 0;
    uVar2 = local_28;
    FUN_01566b64(local_28,local_30,&local_58);
    _objc_storeStrong(&local_50,local_58);
    if ((uVar2 & 1) == 0) {
      if (local_40 < 1) {
        FUN_01566b24(local_40,local_38);
        local_44 = 1;
      }
      else {
        dVar3 = _dispatch_time(0,80000000);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_28;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_01567168;
        local_80 = &DAT_02582b88;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_30;
        local_78 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = uVar1;
        local_68 = local_38;
        local_60 = local_40;
        _dispatch_after(dVar3,puVar4,&local_98);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_78,0);
        local_44 = 0;
      }
    }
    else {
      FUN_01566fb8(local_30,local_50,local_38,10);
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_44 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

