// FUN_01796f88 @ 01796f88

void FUN_01796f88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  code *local_78;
  undefined8 local_70 [3];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_48 = &local_50;
  local_50 = 0;
  local_40 = 0x20000000;
  local_3c = 0x20;
  local_38 = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  local_30 = param_1;
  local_28 = param_1;
  FUN_017971a4();
  local_58 = 0x1e;
  if (lVar1 != 0) {
    local_58 = 0x50;
  }
  local_98 = 0;
  local_88 = 0x32000000;
  local_84 = 0x30;
  local_80 = FUN_017972e0;
  local_78 = FUN_0179731c;
  local_70[0] = 0;
  ppuVar3 = &local_e0;
  local_e0 = PTR___NSConcreteStackBlock_02578660;
  local_d8 = 0xc2000000;
  local_d4 = 0;
  local_d0 = FUN_01797348;
  local_c8 = &DAT_02588be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_90 = &local_98;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = *(undefined8 *)(param_1 + 0x28);
  local_b8 = &local_50;
  local_a0 = local_58;
  local_c0 = uVar2;
  local_b0 = &local_98;
  _objc_retainBlock();
  uVar2 = local_90[5];
  local_90[5] = ppuVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (**(code **)(local_90[5] + 0x10))();
  _objc_storeStrong(&local_c0);
  __Block_object_dispose(&local_98,8);
  _objc_storeStrong(local_70,0);
  __Block_object_dispose(&local_50,8);
  return;
}

