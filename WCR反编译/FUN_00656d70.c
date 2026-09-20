// FUN_00656d70 @ 00656d70

void FUN_00656d70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar1 = local_18;
  FUN_00656eac();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf______);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

