// providerDisplayName @ 00f01184

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::providerDisplayName(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_normalizedProvider_026aba30);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEqualToString__0269ccc8,&cf_openlist);
  if ((param_1 & 1) == 0) {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_http);
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_WebDAV;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Web;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_OpenList;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

