// FUN_00849728 @ 00849728

ulong FUN_00849728(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _object_getClass();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

