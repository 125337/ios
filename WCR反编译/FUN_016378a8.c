// FUN_016378a8 @ 016378a8

void FUN_016378a8(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  undefined *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_38 = &cf___;
  }
  else {
    local_38 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,
             &cf_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789____);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByAddingPercentEncodingWit_0269d900,puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_50 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_50);
  return;
}

