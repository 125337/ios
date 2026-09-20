// FUN_003b7b24 @ 003b7b24

ulong FUN_003b7b24(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_003b90d0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0037a830();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

