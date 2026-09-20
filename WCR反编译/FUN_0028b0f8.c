// FUN_0028b0f8 @ 0028b0f8

void FUN_0028b0f8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long local_50;
  long local_48;
  long local_40;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar4 = local_20;
  FUN_0027ac10(local_20,&cf_mediaWidth);
  lVar2 = local_20;
  local_28 = lVar4;
  FUN_0027ac10(local_20,&cf_mediaHeight);
  local_40 = lVar2;
  if ((0 < local_28) && (0 < lVar2)) {
    lVar4 = (long)((double)local_28 * (double)lVar2 * 0.15);
    local_48 = lVar4;
    FUN_0028e088();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    bVar1 = lVar4 != 0;
    if (bVar1) {
      pcVar3 = &cf__;
      (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    _objc_storeStrong(bVar1,&local_50,0);
    if (bVar1) goto LAB_0028b294;
  }
  local_18 = (cfstringStruct *)0x0;
LAB_0028b294:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

