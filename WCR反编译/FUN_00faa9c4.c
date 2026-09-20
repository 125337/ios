// FUN_00faa9c4 @ 00faa9c4

void FUN_00faa9c4(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int local_2c;
  undefined *local_28;
  int local_1c;
  undefined8 local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  local_1c = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithCapacity__0269fc10,
             (long)param_2);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  for (local_2c = 0; puVar1 = local_28, local_2c < local_1c; local_2c = local_2c + 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendFormat__0269d148,&cf__c);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

