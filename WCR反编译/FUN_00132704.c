// FUN_00132704 @ 00132704

void FUN_00132704(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c867a);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

