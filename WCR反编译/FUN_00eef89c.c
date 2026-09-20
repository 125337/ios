// FUN_00eef89c @ 00eef89c

void FUN_00eef89c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)0x0;
  _objc_storeStrong(&local_18,param_1);
  ppuVar2 = &local_30;
  local_30 = local_18;
  puVar1 = local_18;
  local_20 = param_2;
  _object_getClass();
  _class_getSuperclass();
  local_28 = puVar1;
  _objc_msgSendSuper(ppuVar2,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_18;
  local_18 = ppuVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    FUN_00efdc74(local_18);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

