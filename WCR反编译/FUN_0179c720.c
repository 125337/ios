// FUN_0179c720 @ 0179c720

void FUN_0179c720(cfstringStruct *param_1,undefined8 param_2)

{
  bool bVar1;
  uint local_48;
  cfstringStruct *local_30;
  cfstringStruct *local_18;
  
  bVar1 = false;
  local_48 = 0;
  if ((DAT_028e41c8 & 1) != 0) {
    local_30 = (cfstringStruct *)PTR__OBJC_CLASS___NSBundle_026ce418;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_48 = 0;
    if (param_1 == local_30) {
      local_48 = 0;
      FUN_017aed24(0);
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if ((local_48 & 1) == 0) {
    (*DAT_028e40c0)(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_com_tencent_xin;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

