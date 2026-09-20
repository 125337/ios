// autoDownloadSessionSelectorCellTitle @ 01a56d18

/* Function Stack Size: 0x10 bytes */

ID WCRefineGeneralFunctionViewController::autoDownloadSessionSelectorCellTitle
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoDownloadPrivateChatDefaultEn_0269d990);
  if (((ulong)puVar1 & 1) == 0) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_autoDownloadSessionRule_0269d998);
    local_18 = &::cf__;
    if (puVar2 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_18 = &::cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_autoDownloadSessionRule_0269d998);
    local_18 = &::cf__;
    if (puVar2 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_18 = &::cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

