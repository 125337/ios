// FUN_000e8ab4 @ 000e8ab4

void FUN_000e8ab4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = &cf__UIButtonBarStackView;
  _NSClassFromString();
  uVar2 = local_18;
  FUN_000e95c8(local_18,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

