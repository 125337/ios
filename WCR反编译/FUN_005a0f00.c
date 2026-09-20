// FUN_005a0f00 @ 005a0f00

void FUN_005a0f00(long param_1,byte param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined **local_38;
  double local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    local_30 = 0.35;
    if ((param_2 & 1) == 0) {
      local_30 = 0.0;
    }
    ppuVar2 = &local_60;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_005a10c8;
    local_48 = &DAT_02579910;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    local_28 = param_1;
    local_19 = param_2;
    local_18 = param_1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar1;
    _objc_retainBlock();
    local_38 = ppuVar2;
    if (local_30 <= 0.0) {
      (*(code *)ppuVar2[2])();
    }
    else {
      dVar3 = _dispatch_time(0,(long)(local_30 * 1000000000.0));
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar3,puVar4,local_38);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

