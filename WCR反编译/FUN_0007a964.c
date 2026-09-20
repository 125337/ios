// FUN_0007a964 @ 0007a964

byte FUN_0007a964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  byte local_78 [50];
  byte local_46;
  byte local_45;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_29 = 0;
  local_38 = 0;
  local_28 = param_3;
  FUN_00077e3c(local_20,&local_29,&local_38);
  uVar2 = local_20;
  FUN_0007804c(local_20,local_29 & 1,local_38);
  local_45 = (byte)uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_00080b08(local_18,local_20,local_29 & 1,local_38);
  }
  uVar2 = local_18;
  FUN_00080eb8(local_18,local_20,local_29 & 1,local_38,local_28);
  local_46 = (byte)uVar2;
  uVar2 = local_18;
  FUN_00081828(local_18,local_20,local_29 & 1,local_38);
  bVar1 = 1;
  if ((uVar2 & 1) == 0) {
    bVar1 = local_46;
  }
  local_46 = bVar1 & 1;
  FUN_0007814c(local_78,local_20);
  if ((((local_45 & 1) == 0) && ((local_29 & 1) == 0)) && ((local_78[0] & 1) == 0)) {
    FUN_000794a8(local_18);
  }
  bVar1 = local_46;
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return bVar1 & 1;
}

