// FUN_0051d5c8 @ 0051d5c8

void FUN_0051d5c8(undefined8 param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "TLProfileLikeButton";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_18 = 0;
  }
  else {
    uVar2 = local_20;
    FUN_0051f374();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_0051fccc();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

