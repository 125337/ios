// FUN_004fa134 @ 004fa134

void FUN_004fa134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *local_a8;
  cfstringStruct *local_90;
  cfstringStruct *local_58;
  cfstringStruct *local_50 [3];
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_20;
  FUN_004f5168(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  if (local_30 == (cfstringStruct *)0x0) {
    local_90 = &cf___;
  }
  else {
    local_90 = local_30;
  }
  local_38 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_90;
  if (local_18 == (cfstringStruct *)0x0) {
    local_a8 = &cf___;
  }
  else {
    local_a8 = local_18;
  }
  FUN_004f535c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_58 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_<_wc_custom_link_color______href_____>__<__wc_custom_link_>);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

