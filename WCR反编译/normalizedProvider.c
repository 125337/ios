// normalizedProvider @ 00f00ea0

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::normalizedProvider(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_trimmed__026aba28);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar3;
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_openlist);
  if (((IVar3 & 1) == 0) &&
     (IVar3 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_alist),
     (IVar3 & 1) == 0)) {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_http);
    if (((IVar3 & 1) == 0) &&
       ((IVar3 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_web),
        (IVar3 & 1) == 0 &&
        (IVar3 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_custom),
        (IVar3 & 1) == 0)))) {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_webdav);
      if (((IVar3 & 1) == 0) &&
         ((IVar3 = local_30,
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_dav),
          (IVar3 & 1) == 0 &&
          (IVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
          IVar3 != 0)))) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_webdav;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_webdav;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_http;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_openlist;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

