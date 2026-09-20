// FUN_01e73df8 @ 01e73df8

void FUN_01e73df8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardWebJavaScriptEnabled_026c6dc0);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_absoluteString_026a1de0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_url_js__d_support______);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

