// FUN_003e6808 @ 003e6808

void FUN_003e6808(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_026ce418;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Frameworks);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

