// hasServerURL @ 00f01838

/* Function Stack Size: 0x10 bytes */

bool WCRefineCloudBackupService::hasServerURL(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_5c;
  uint local_34;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_normalizedURL_026aba48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_URLWithString__026a16d8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scheme_026a1dd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_host_0269dc50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_34 = 0;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_https);
    local_5c = 1;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_http);
      local_5c = (uint)puVar2;
    }
    local_34 = local_5c;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_34 & 1;
}

