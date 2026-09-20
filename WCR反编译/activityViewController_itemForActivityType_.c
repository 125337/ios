// activityViewController:itemForActivityType: @ 0090cec0

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

ID WCRefineLogExportItemSource::activityViewController_itemForActivityType_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_90;
  cfstringStruct *local_70;
  bool local_51;
  cfstringStruct *local_50;
  bool local_41;
  cfstringStruct *local_40;
  ulong local_38 [2];
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_38[1] = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(local_38 + 1,param_3);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_4);
  uVar1 = local_38[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38[0],PTR_s_isEqualToString__0269ccc8,
             *(undefined8 *)PTR__UIActivityTypeCopyToPasteboard_025780a8);
  if ((uVar1 & 1) == 0) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_fileURL_026aa0e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_textLogs_026aa0e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_90 = &::cf___;
      }
      else {
        local_90 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_textLogs_026aa0e0);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_90;
      }
      local_51 = pcVar3 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_90;
      if (local_51) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    else {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_fileURL_026aa0e8);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_textLogs_026aa0e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_70 = &::cf___;
    }
    else {
      local_70 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_textLogs_026aa0e0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_70;
    }
    local_41 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    if (local_41) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(local_38 + 1,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

