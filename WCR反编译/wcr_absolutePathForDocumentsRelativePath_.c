// wcr_absolutePathForDocumentsRelativePath: @ 007089d8

/* Function Stack Size: 0x18 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_absolutePathForDocumentsRelativePath_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = 0;
    local_40 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
    uVar1 = local_30;
    if ((uVar2 & 1) == 0) {
      uVar2 = 9;
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_40 = 1;
      local_18 = uVar1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

