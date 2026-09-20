// packForDouTuImport @ 01b70220

/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonLibraryViewController::packForDouTuImport(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isRootLevel_026bf878);
  if ((param_1 & 1) == 0) {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentPackForImport_026bfa98);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ensurePackNamed__026ae3c8,&cf_eVRKb);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    if (puVar1 == (undefined *)0x0) {
      local_38 = _WCRLocalEmoticonUngroupedId;
    }
    else {
      local_38 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_38;
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

