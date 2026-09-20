// FUN_000c0e04 @ 000c0e04

ulong FUN_000c0e04(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  (*DAT_028c8168)(local_20,local_28,local_30);
  uVar2 = uVar1;
  FUN_000c17c8();
  local_18 = uVar1;
  if ((uVar2 & 1) != 0) {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

