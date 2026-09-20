// createPermanentVideoDirectory @ 010b2298

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftManager::createPermanentVideoDirectory(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_permanentVideoDirectory_026ae5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630,local_28);
  if (((ulong)puVar1 & 1) == 0) {
    local_38 = 0;
    local_40 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_28,1,0,&local_40);
    _objc_storeStrong(&local_38,local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

