// FUN_019f22c8 @ 019f22c8

void FUN_019f22c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long local_50;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar2;
  if (lVar2 != 0) {
    if (local_20 == 0) {
      local_50 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_50 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setLibrarySourcePaths__026bb1f0,local_50);
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_librarySourcePaths_026bb208);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSourcePaths__026bb1f8);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_savePreferences_026bb238);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadTableData_0269dca8);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sourcePaths_026bb210);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

