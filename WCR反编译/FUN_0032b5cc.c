// FUN_0032b5cc @ 0032b5cc

ulong FUN_0032b5cc(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  uVar2 = local_18;
  FUN_00311628();
  FUN_0030fef4(uVar2,puVar1);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

