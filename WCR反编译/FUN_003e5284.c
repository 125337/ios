// FUN_003e5284 @ 003e5284

void FUN_003e5284(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  FUN_003e5978();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_stringWithContentsOfFile_encodin_026a3340,param_1,4,0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = local_18;
  FUN_003e5724();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

