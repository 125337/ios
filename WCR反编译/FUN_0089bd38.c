// FUN_0089bd38 @ 0089bd38

void FUN_0089bd38(undefined8 param_1)

{
  undefined *puVar1;
  byte local_2e;
  byte local_2d [13];
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_2d[0] = 0;
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_18,local_2d);
  local_2e = (byte)puVar1;
  if ((((ulong)puVar1 & 1) != 0) && ((local_2d[0] & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_removeItemAtPath_error__0269f910,local_18,0);
    local_2e = 0;
  }
  if ((local_2e & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_18,1,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

