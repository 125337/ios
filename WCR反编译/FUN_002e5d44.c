// FUN_002e5d44 @ 002e5d44

void FUN_002e5d44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_20 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_fontWithDescriptor_size__026a1d60,
               local_20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

