// beginFileOperationWithText: @ 01993d84

/* Function Stack Size: 0x18 bytes */

ID WCRefineFileManagerViewController::beginFileOperationWithText_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cancelActiveFileOperation_026ba2e0);
  puVar1 = PTR_WCRFileDirSizeCancelToken_026cf1e0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileDirSizeCancelToken_026cf1e0,PTR_s_new_0269d288);
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActiveOperationToken__026ba5e0,puVar1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,local_28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActiveOperationToast__026ba5e8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

