// FUN_010cbd9c @ 010cbd9c

void FUN_010cbd9c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_010b6fcc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  FUN_010cbfb4();
  uVar1 = local_28;
  if ((uVar2 & 1) == 0) {
    if (*(ulong *)(param_1 + 0x48) < 0x78) {
      FUN_010b95bc(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                   *(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x48) + 1);
    }
    else {
      _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),DAT_0280e198,0,1);
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_010cc414;
    local_50 = &DAT_0257d718;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    local_40 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    local_38 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar3;
    _dispatch_async(uVar5,&local_68);
    _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),DAT_0280e198,0,1);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

