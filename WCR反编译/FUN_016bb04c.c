// FUN_016bb04c @ 016bb04c

ulong FUN_016bb04c(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  uVar2 = local_18;
  FUN_016bb314();
  FUN_016bb174(uVar2,puVar1);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

