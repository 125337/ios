// FUN_022194d8 @ 022194d8

void FUN_022194d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  undefined1 auStack_50 [8];
  ulong local_48;
  undefined8 local_40;
  undefined1 *local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_30 = *(long *)(param_3 + -8);
  local_48 = *(long *)(local_30 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_40 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_3;
  (*(code *)PTR____chkstk_darwin_02578668)(param_2,param_2);
  local_38 = auStack_50 + -local_48;
  (**(code **)(extraout_x8 + 0x10))();
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(local_40,local_38,local_20);
  (**(code **)(local_30 + 8))(local_28,local_20);
  return;
}

