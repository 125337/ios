// FUN_01adab8c @ 01adab8c

void FUN_01adab8c(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = &cf_MMServiceCenter;
  _NSClassFromString();
  pcVar2 = &cf_ContactTagMgr;
  local_20 = pcVar1;
  _NSClassFromString();
  local_28 = pcVar2;
  if ((local_20 == (cfstringStruct *)0x0) || (pcVar2 == (cfstringStruct *)0x0)) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

