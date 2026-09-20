// _WCRefineProfileBgHTMLPersistRuntimeStorage @ 01cbd55c

void _WCRefineProfileBgHTMLPersistRuntimeStorage(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long local_60;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  FUN_01cbd47c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_createDirectoryAtPath_withInterm_0269e230,lVar1,1,0);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_20 == 0) {
      local_60 = *(long *)PTR____NSDictionary0___02578288;
    }
    else {
      local_60 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_writeToFile_atomically__0269f928,local_28,1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

