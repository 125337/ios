// clearSourceSelection @ 019f24e4

/* Function Stack Size: 0x10 bytes */

void WCRefineFontConvertViewController::clearSourceSelection(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  ID IVar5;
  ID IVar6;
  ID local_38;
  ID local_28;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar5 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sourcePaths_026bb210);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar2 = false;
  bVar1 = false;
  bVar4 = false;
  if (IVar6 == 0) {
    local_28 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_fileSourcePaths_026bb200);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar4 = false;
    if (IVar6 == 0) {
      local_38 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_librarySourcePaths_026bb208);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      IVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar4 = IVar6 == 0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar3 = PTR____NSArray0___02578280;
  if (bVar4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRlg_nW_SO);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setSourcePaths__026bb1f8,*(undefined8 *)PTR____NSArray0___02578280);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setFileSourcePaths__026bb1e0,*(undefined8 *)puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setLibrarySourcePaths__026bb1f0,*(undefined8 *)puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_savePreferences_026bb238);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__ndnW_SO);
  }
  return;
}

