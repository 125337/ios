// FUN_020a00b4 @ 020a00b4

/* WARNING: Type propagation algorithm not settling */

void FUN_020a00b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long local_20 [2];
  
  local_20[1] = 0;
  _objc_storeStrong(local_20 + 1,param_1);
  local_20[0] = 0;
  _objc_storeStrong(local_20,param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_20);
  _objc_storeStrong(local_20 + 1,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

