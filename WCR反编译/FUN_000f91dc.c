// FUN_000f91dc @ 000f91dc

ulong FUN_000f91dc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_000f9998();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_000f96f8();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

