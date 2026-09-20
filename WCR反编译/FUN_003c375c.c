// FUN_003c375c @ 003c375c

ulong FUN_003c375c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_003c37d0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_003c32ec();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

