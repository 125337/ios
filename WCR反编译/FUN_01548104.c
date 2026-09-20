// FUN_01548104 @ 01548104

void FUN_01548104(undefined8 param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  uVar2 = DAT_02324040;
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    bVar1 = (param_2 & 1) == 0;
    if (bVar1) {
      local_80 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_80;
    }
    else {
      local_80 = &cf__2D3238;
      FUN_01551c04(uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_30 = local_80;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_80;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
  }
  else {
    bVar1 = (param_2 & 1) == 0;
    local_90 = local_20;
    if (bVar1) {
      FUN_0157fe2c(DAT_0232c678,0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_90;
    }
    else {
      FUN_01580028(DAT_02323e80,uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_90;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_90;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

