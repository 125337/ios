// wcr_libraryEventDateForAsset: @ 006ed560

/* Function Stack Size: 0x18 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_libraryEventDateForAsset_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_50 [3];
  cfstringStruct *local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  pcVar1 = &cf_addedDate;
  _NSSelectorFromString();
  local_38 = pcVar1;
  if (local_28 != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_performSelector__026ca7b8,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      local_50[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_30,local_50[0]);
      }
      _objc_storeStrong(local_50,0);
    }
  }
  if (local_30 == 0) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_modificationDate_026a6fc8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return uVar2;
}

