// FUN_0030f9ec @ 0030f9ec

ulong FUN_0030f9ec(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  uVar2 = local_18;
  FUN_0031003c();
  FUN_0030fef4(uVar2,puVar1);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

