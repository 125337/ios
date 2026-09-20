// FUN_00f573b8 @ 00f573b8

void FUN_00f573b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_30;
  undefined4 local_24;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,PTR_s_isValidJSONObject__026ac5b0,
                local_20), ((ulong)puVar1 & 1) == 0)) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_dataWithJSONObject_options_error_026a64a8,local_20,1,0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_18 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = puVar1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

