// FUN_004da8f0 @ 004da8f0

void FUN_004da8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *local_90;
  long local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar1 = local_20;
  FUN_004da4f0(local_20,&cf_66CD00);
  _objc_retainAutoreleasedReturnValue();
  if (local_18 == (cfstringStruct *)0x0) {
    local_90 = &cf___;
  }
  else {
    local_90 = local_18;
  }
  FUN_004db89c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_stringWithFormat__0269cca8,
             &cf_<_wc_custom_link_color______href_____>__<__wc_custom_link_>);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(local_90);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

