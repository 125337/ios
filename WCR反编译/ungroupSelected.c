// ungroupSelected @ 01b67eac

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::ungroupSelected(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  lVar2 = *(long *)(param_1 + (long)_selectedExportRels);
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_allObjects_0269d228);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_count_0269cfe0);
  uVar1 = _WCRLocalEmoticonUngroupedId;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbh_);
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar1;
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_moveRelativePaths_toPack__026a3b18,
               local_28,uVar1);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_yQ1Y_);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + (long)_selectedExportRels),
                 PTR_s_removeAllObjects_0269d508);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__yQR_);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

