// FUN_0033f8f4 @ 0033f8f4

byte FUN_0033f8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  uint uVar1;
  ulong uVar3;
  undefined8 uVar4;
  byte local_d8;
  uint local_b8;
  byte local_a8;
  undefined8 local_68;
  byte local_5a;
  byte local_59;
  undefined4 local_58;
  code *local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  puVar2 = &local_40;
  local_40 = 0;
  _objc_storeStrong(puVar2,param_5);
  uVar1 = (uint)puVar2;
  local_48 = param_6;
  FUN_0033a150();
  if ((uVar1 & 1) == 0) {
    if (local_48 == (code *)0x0) {
      local_a8 = 1;
    }
    else {
      uVar3 = local_20;
      (*local_48)(local_20,local_28,local_30,local_38,local_40);
      local_a8 = (byte)uVar3;
    }
  }
  else {
    uVar3 = local_20;
    FUN_0033fc64(local_20,local_30,local_38,local_40);
    local_59 = (byte)uVar3;
    local_b8 = 1;
    if ((((uVar3 & 1) == 0) && (local_b8 = 1, (DAT_028c9ee1 & 1) == 0)) &&
       (local_b8 = 1, (DAT_028c9ee0 & 1) == 0)) {
      uVar3 = local_20;
      FUN_0033f024();
      local_b8 = 1;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_40;
        FUN_0033f024();
        local_b8 = 1;
        if ((uVar3 & 1) == 0) {
          uVar4 = local_38;
          FUN_0033f024();
          local_b8 = (uint)uVar4;
        }
      }
    }
    local_5a = (byte)local_b8 & 1;
    if ((local_b8 & 1) != 0) {
      uVar4 = local_30;
      FUN_0034004c(local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar4;
      _objc_storeStrong(&local_68,0);
    }
    if ((local_59 & 1) != 0) {
      FUN_0034028c();
    }
    if (local_48 == (code *)0x0) {
      local_d8 = 1;
    }
    else {
      uVar3 = local_20;
      (*local_48)(local_20,local_28,local_30,local_38,local_40);
      local_d8 = (byte)uVar3;
    }
    local_a8 = local_d8;
    if ((local_59 & 1) != 0) {
      FUN_003402a0();
    }
  }
  local_11 = local_a8 & 1;
  local_58 = 1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

