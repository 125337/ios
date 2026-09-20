// currentPackForImport @ 01b6d0f0

/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonLibraryViewController::currentPackForImport(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined *local_48;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_packRelativePath_026bf868);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_filterPackRel_026bf8f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (puVar3 == (undefined *)0x0) {
      local_70 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_selectedFilterPackRel_026a3dd0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_70;
    }
    else {
      local_70 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_filterPackRel_026bf8f8);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_70;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if ((puVar2 == (undefined *)0x0) ||
       (puVar3 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonGroupAllId),
       puVar2 = local_30, ((ulong)puVar3 & 1) != 0)) {
      puVar2 = _WCRLocalEmoticonUngroupedId;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
    }
    _objc_storeStrong(&local_30,0);
  }
  else {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_packRelativePath_026bf868);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

