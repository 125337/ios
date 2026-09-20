// FUN_002472c0 @ 002472c0

void FUN_002472c0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_b0;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = "MMLanguageMgr";
  _objc_getClass();
  FUN_00246b28();
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)pcVar2;
  if (((cfstringStruct *)pcVar2 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getStringForCurLanguage__0269f768),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getStringForCurLanguage__0269f768,local_20)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_00245428();
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar4 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
    pcVar3 = local_48[0];
    bVar1 = pcVar4 != (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
    }
    _objc_storeStrong(bVar1,local_48,0);
    if (bVar1) goto LAB_00247500;
  }
  if (local_28 == (cfstringStruct *)0x0) {
    local_b0 = &cf___;
  }
  else {
    local_b0 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_b0;
LAB_00247500:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

