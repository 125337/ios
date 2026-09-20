// navigateToPath: @ 019ac1f0

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::navigateToPath_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *local_40;
  undefined4 local_38;
  byte local_31;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_28,&local_31);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eN_NX__W);
    local_38 = 1;
  }
  else {
    if ((local_31 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_openFileAtPath__026ba558,local_28);
    }
    else {
      puVar2 = PTR_WCRefineFileManagerViewController_026ceec8;
      _objc_alloc();
      uVar1 = local_28;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithDirectory_title__026b2df8,uVar1);
      local_40 = puVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      _objc_storeStrong(&local_40,0);
    }
    local_38 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

