// FUN_00721720 @ 00721720

void FUN_00721720(void)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_68;
  char *local_38;
  undefined4 local_30;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMAlbumChangeObserver";
  _objc_getClass();
  FUN_00722634();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_lastCaptureAssetURL_026a7810);
  if (((ulong)pcVar1 & 1) == 0) {
    local_18 = (char *)0x0;
    local_30 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lastCaptureAssetURL_026a7810);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      local_68 = (char *)0x0;
    }
    else {
      local_68 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

