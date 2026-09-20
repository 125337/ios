// FUN_00120b64 @ 00120b64

void FUN_00120b64(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  FUN_0012257c();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__lu);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

