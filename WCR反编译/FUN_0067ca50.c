// FUN_0067ca50 @ 0067ca50

void FUN_0067ca50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  long local_80;
  byte local_78;
  byte local_77;
  undefined **local_70;
  ulong local_68;
  byte local_5d;
  byte local_49;
  long local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar2 = local_40;
  FUN_00694120(local_40,0);
  local_49 = (byte)uVar2;
  uVar2 = local_40;
  FUN_00694194();
  local_5d = (byte)uVar2;
  if (((local_49 & 1) != 0) || ((uVar2 & 1) != 0)) {
    if ((local_49 & 1) != 0) {
      FUN_0069445c(&cf_dataTask,local_40,0);
    }
    if ((local_5d & 1) != 0) {
      FUN_00694854(local_40,0);
    }
    uVar2 = local_40;
    if (local_48 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = uVar2;
      ppuVar3 = &local_a8;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_00694ad8;
      local_90 = &DAT_0257ea38;
      local_78 = local_49 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_48;
      local_88 = uVar2;
      local_77 = local_5d & 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = lVar1;
      _objc_retainBlock();
      uVar4 = local_30;
      local_70 = ppuVar3;
      (*DAT_028cbd30)(local_30,local_38,local_40,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      local_28 = uVar4;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_68,0);
      goto LAB_0067cd1c;
    }
  }
  uVar4 = local_30;
  (*DAT_028cbd30)(local_30,local_38,local_40,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar4;
LAB_0067cd1c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

