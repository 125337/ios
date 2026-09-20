// FUN_001220d8 @ 001220d8

/* WARNING: Type propagation algorithm not settling */

void FUN_001220d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *local_d0;
  cfstringStruct *local_90;
  long local_48 [3];
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_48[2] = 0;
  _objc_storeStrong(local_48 + 2,param_2);
  local_48[1] = 0;
  _objc_storeStrong(local_48 + 1,param_3);
  lVar1 = local_48[2];
  FUN_00121400();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_28 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (lVar1 == 0) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_90 = &cf___;
    }
    else {
      local_90 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_90;
  }
  else {
    if (local_30 == (cfstringStruct *)0x0) {
      local_d0 = &cf___;
    }
    else {
      local_d0 = local_30;
    }
    FUN_001223a0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringWithFormat__0269cca8,
               &cf_<_wc_custom_link_color______href_____>__<__wc_custom_link_>);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(local_48 + 1,0);
  _objc_storeStrong(local_48 + 2,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

