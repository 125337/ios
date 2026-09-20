// performRenameWithNewName: @ 01fae490

/* Function Stack Size: 0x18 bytes */

void WCRefineWatermarkLibraryViewController::performRenameWithNewName_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (*(long *)(local_18 + (long)_selectedImagePath) == 0) {
    local_2c = 1;
  }
  else {
    uVar2 = *(undefined8 *)(local_18 + (long)_selectedImagePath);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(local_18 + (long)_libraryDirectory);
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_stringByAppendingPathComponent__026cab30,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      local_50 = 0;
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_50,lVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_50 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__TTbR);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadWatermarks_026c9d78);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(local_18 + (long)_collectionView),PTR_s_reloadData_0269e400);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__TT1Y_);
      }
      _objc_storeStrong(&local_50,0);
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Ty_X__W);
      local_2c = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

