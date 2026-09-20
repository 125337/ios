// supportsVersionHistory @ 00f01b60

/* Function Stack Size: 0x10 bytes */

bool WCRefineCloudBackupService::supportsVersionHistory(ID param_1,SEL param_2)

{
  ID IVar1;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_normalizedProvider_026aba30);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEqualToString__0269ccc8,&cf_webdav);
  local_2c = 1;
  if ((param_1 & 1) == 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_openlist);
    local_2c = (uint)IVar1;
  }
  _objc_storeStrong(&local_28,0);
  return local_2c & 1;
}

