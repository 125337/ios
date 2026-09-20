// imagePickerController:didFinishPickingMediaWithInfo: @ 01fa8940

/* Function Stack Size: 0x20 bytes */

void WCRefineWatermarkLibraryViewController::imagePickerController_didFinishPickingMediaWithInfo_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long local_60;
  undefined8 local_58;
  undefined *local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,
             *(undefined8 *)PTR__UIImagePickerControllerOriginalImage_02578188);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_3c = 1;
  }
  else {
    lVar1 = *(long *)(local_18 + (long)_watermarkPaths);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    local_48 = lVar1 + 1;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(local_18 + (long)_libraryDirectory);
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_stringByAppendingPathComponent__026cab30,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar3;
    while( true ) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar4 & 1) == 0) break;
      local_48 = local_48 + 1;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar5 = *(undefined8 *)(local_18 + (long)_libraryDirectory);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_stringByAppendingPathComponent__026cab30,local_50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_58;
      local_58 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    lVar1 = local_38;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_writeToFile_atomically__0269f928,local_58,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadWatermarks_026c9d78);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_18 + (long)_collectionView),PTR_s_reloadData_0269e400);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_4lpS__eQ);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

