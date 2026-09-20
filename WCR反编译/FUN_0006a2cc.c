// FUN_0006a2cc @ 0006a2cc

ulong FUN_0006a2cc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00069c80(local_18,param_2,param_3 & 1,DAT_028c7cf8);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

