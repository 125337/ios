// FUN_0067ce78 @ 0067ce78

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0067ce78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  long local_88;
  byte local_80;
  byte local_7f;
  undefined **local_78;
  ulong local_70 [3];
  byte local_52;
  byte local_51;
  long local_50;
  undefined8 local_48;
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
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  uVar2 = local_40;
  FUN_00694120(local_40,local_48);
  local_51 = (byte)uVar2;
  uVar2 = local_40;
  FUN_00694194();
  local_52 = (byte)uVar2;
  if (((local_51 & 1) != 0) || ((uVar2 & 1) != 0)) {
    if ((local_51 & 1) != 0) {
      FUN_0069445c(&cf_uploadTask,local_40,local_48);
    }
    if ((local_52 & 1) != 0) {
      FUN_00694854(local_40,local_48);
    }
    uVar2 = local_40;
    if (local_50 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_70[0] = uVar2;
      ppuVar3 = &local_b0;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_00694eac;
      local_98 = &DAT_0257ea38;
      local_80 = local_51 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_50;
      local_90 = uVar2;
      local_7f = local_52 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = lVar1;
      _objc_retainBlock();
      uVar4 = local_30;
      local_78 = ppuVar3;
      (*DAT_028cbd40)(local_30,local_38,local_40,local_48,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      local_28 = uVar4;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(local_70,0);
      goto LAB_0067d154;
    }
  }
  uVar4 = local_30;
  (*DAT_028cbd40)(local_30,local_38,local_40,local_48,local_50);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar4;
LAB_0067d154:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

