// FUN_002e06c4 @ 002e06c4

uint FUN_002e06c4(void)

{
  undefined8 uVar1;
  uint local_a0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  byte *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_48 = &local_11;
  local_11 = 0;
  local_70 = &local_20;
  local_20 = 0;
  local_68 = &local_28;
  local_28 = 0x3ff0000000000000;
  local_60 = &local_30;
  local_30 = 0;
  local_58 = &local_38;
  local_38 = 0;
  local_50 = &local_40;
  local_40 = 0;
  local_90 = PTR___NSConcreteGlobalBlock_02578658;
  local_88 = 0xd0800000;
  local_84 = 0;
  local_80 = FUN_002e43b0;
  local_78 = &DAT_0257bba8;
  _dispatch_sync(DAT_028c9870,&local_90);
  local_a0 = 0;
  if ((local_11 & 1) != 0) {
    uVar1 = local_20;
    FUN_002e4444(local_28,local_38,local_40,local_20,local_30);
    local_a0 = (uint)uVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_a0 & 1;
}

