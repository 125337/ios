// FUN_0150d560 @ 0150d560

void FUN_0150d560(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  uint local_24;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = (char *)0x0;
    local_24 = 1;
    goto LAB_0150d7b8;
  }
  pcVar3 = "LSBundleProxy";
  _objc_getClass();
  pcVar4 = "bundleProxyForCurrentProcess";
  local_30 = pcVar3;
  _sel_registerName();
  local_38 = pcVar4;
  if ((local_30 != (char *)0x0) &&
     (pcVar3 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar4),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    if (pcVar3 == (char *)0x0) {
LAB_0150d784:
      local_24 = 0;
    }
    else {
      pcVar4 = "groupContainerURLs";
      _sel_registerName("groupContainerURLs");
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_48 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)pcVar3 & 1) == 0) {
LAB_0150d760:
        local_24 = 0;
      }
      else {
        pcVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectForKeyedSubscript__0269d098,local_20);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
        local_50 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60)
        ;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        pcVar3 = local_50;
        bVar1 = ((ulong)pcVar4 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar3;
        }
        local_24 = (uint)bVar1;
        _objc_storeStrong(&local_50,0);
        if (local_24 == 0) goto LAB_0150d760;
      }
      _objc_storeStrong(&local_48,0);
      if (local_24 == 0) goto LAB_0150d784;
    }
    _objc_storeStrong(&local_40,0);
    if (local_24 != 0) goto LAB_0150d7b8;
  }
  local_18 = (char *)0x0;
  local_24 = 1;
LAB_0150d7b8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

