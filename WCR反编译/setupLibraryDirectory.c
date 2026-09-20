// setupLibraryDirectory @ 01fa4dcc

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::setupLibraryDirectory(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  uVar1 = 9;
  local_20 = param_2;
  local_18 = param_1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(local_18 + (long)_libraryDirectory);
  *(undefined8 *)(local_18 + (long)_libraryDirectory) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_fileExistsAtPath__026ca630,
             *(undefined8 *)(local_18 + (long)_libraryDirectory));
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_createDirectoryAtPath_withInterm_0269e230,
               *(undefined8 *)(local_18 + (long)_libraryDirectory),1,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

