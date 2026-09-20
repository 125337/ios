// ensureDirectoryAtPath: @ 010c8f7c

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsMonitor::ensureDirectoryAtPath_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  byte local_39;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    _objc_alloc_init();
    local_39 = 0;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_28,&local_39);
    if ((((ulong)puVar2 & 1) == 0) || ((local_39 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_28,1,0);
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

