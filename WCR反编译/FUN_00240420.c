// FUN_00240420 @ 00240420

void FUN_00240420(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    FUN_00240240(local_20,&cf_contact);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_0023fa84();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar1 = local_30;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      FUN_00240240(0,local_20,&cf_monoMsg);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_0023fa84();
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar2 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
      pcVar1 = local_48[0];
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar1 = local_20;
        FUN_0023fa84(0);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

