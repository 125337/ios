// FUN_007d3860 @ 007d3860

void FUN_007d3860(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  uint local_30;
  undefined *local_20;
  undefined *local_18;
  
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_20 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
    goto LAB_007d3b60;
  }
  local_38 = (undefined *)0x0;
  pcVar4 = &cf_getAppViewControllerManager;
  _NSSelectorFromString();
  puVar2 = local_20;
  local_40 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar4);
  if (((ulong)puVar2 & 1) != 0) {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (local_38 == (undefined *)0x0) {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_valueForKey__0269d128,&cf_m_appViewControllerMgr);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (local_38 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
  }
  else {
    pcVar4 = &cf_getContactsViewController;
    _NSSelectorFromString();
    puVar2 = local_38;
    local_48 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)puVar2 & 1) != 0) {
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar3;
      FUN_007cdf10();
      puVar2 = local_50;
      bVar1 = ((ulong)puVar3 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar2;
      }
      local_30 = (uint)bVar1;
      _objc_storeStrong(&local_50,0);
      if (local_30 != 0) goto LAB_007d3b50;
    }
    local_30 = 0;
  }
LAB_007d3b50:
  _objc_storeStrong(&local_38,0);
LAB_007d3b60:
  _objc_storeStrong(&local_20,0);
  if (local_30 == 0) {
    local_18 = (undefined *)0x0;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

