// cachedSizeForPath: @ 0197b89c

/* Function Stack Size: 0x18 bytes */

ID WCRFileDirSizeManager::cachedSizeForPath_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID local_48;
  ID local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  bVar1 = local_30 == 0;
  if (bVar1) {
    local_48 = 0;
  }
  else {
    local_48 = *(ID *)(local_20 + 8);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKey__0269e048,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_48;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

