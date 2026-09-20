// FUN_01b4dc94 @ 01b4dc94

ulong FUN_01b4dc94(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_01b4a294(local_18,param_2);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

