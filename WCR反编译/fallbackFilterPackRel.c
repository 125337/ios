// fallbackFilterPackRel @ 010872a8

/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonStore::fallbackFilterPackRel(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showsAllChip_026a3ad0);
  if ((param_1 & 1) == 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_showsUngroupedChip_026a3ae8);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_listPacksSortMode__026ac360,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_relativePath_026ac370);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___all__;
      }
      else {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_relativePath_026ac370);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      _objc_storeStrong(&local_30,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___ungrouped__;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___all__;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

