// FUN_01e9d0d0 @ 01e9d0d0

void FUN_01e9d0d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardWebJavaScriptEnabled_026c6dc0);
  FUN_01e9d1c8();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_stringWithFormat__0269cca8,&cf_html_js__d_support____hash__016llx);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

