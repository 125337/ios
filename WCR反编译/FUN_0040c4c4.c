// FUN_0040c4c4 @ 0040c4c4

void FUN_0040c4c4(cfstringStruct *param_1)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50 [2];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  uint local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  FUN_0040c944();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  pcVar2 = local_20;
  if (param_1 == (cfstringStruct *)0x0) {
    pcVar1 = "MMContext";
    _objc_getClass(0);
    local_38 = (cfstringStruct *)pcVar1;
    if (((cfstringStruct *)pcVar1 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentUserName_0269d6f8),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentUserName_0269d6f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (pcVar2 != (cfstringStruct *)0x0) {
        FUN_00404b34(pcVar2,local_40);
        pcVar3 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
      local_30 = (uint)(pcVar2 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_40,0);
      if (local_30 != 0) goto LAB_0040c868;
    }
    pcVar2 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      FUN_00404b34(pcVar2,local_50[0]);
      pcVar2 = local_50[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_30 = 1;
    _objc_storeStrong(local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_30 = 1;
  }
LAB_0040c868:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

