// currentFilteredLogsForExport @ 00913364

/* Function Stack Size: 0x10 bytes */

ID LogViewerViewController::currentFilteredLogsForExport(ID param_1,SEL param_2)

{
  undefined1 *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_48;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getLogsForType_026aa1a8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if ((param_1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0), param_1 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_componentsSeparatedByString__0269d3c0,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    local_48 = (cfstringStruct *)0x0;
    pcVar3 = local_20;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_logType_026aa0f8);
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_filteredNavigationLinesForExport_026aa1f0,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_48 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    else {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_logType_026aa0f8);
      puVar1 = (undefined1 *)((long)&pcVar3[-1].field3_0x18 + 5);
      if (puVar1 == (undefined1 *)0x0) {
        pcVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_filteredLinesByKeywordFromLines__026aa1c0,local_40);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_48;
        local_48 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      else {
        _objc_storeStrong(puVar1,&local_48,local_40);
      }
    }
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf___;
    }
    else {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    local_34 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

