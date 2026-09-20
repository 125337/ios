// wcr_pinPrefixForItem: @ 01f77890

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackManagerViewController::wcr_pinPrefixForItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineVoicePackStore_026cea20;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isPinnedRelativePath__026ae2d8);
  pcVar3 = &cf_n_v;
  if (((ulong)puVar2 & 1) == 0) {
    pcVar3 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar3;
}

