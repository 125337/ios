// FUN_008984c8 @ 008984c8

byte FUN_008984c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  FUN_008a28c0();
  uVar1 = (uint)uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_0089ccc0();
    if ((uVar1 & 1) != 0) {
      local_11 = 0;
      goto LAB_008985a8;
    }
  }
  uVar3 = local_20;
  (*DAT_028cdbe8)(local_20,local_28,local_30,param_4 & 1);
  local_11 = (byte)uVar3 & 1;
LAB_008985a8:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

