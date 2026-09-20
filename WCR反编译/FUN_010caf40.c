// FUN_010caf40 @ 010caf40

byte FUN_010caf40(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  byte local_31;
  undefined *local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    _objc_alloc_init();
    local_31 = 0;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_20,&local_31);
    if ((((ulong)puVar2 & 1) == 0) || ((local_31 & 1) == 0)) {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_20,1,0);
      local_11 = (byte)puVar2 & 1;
    }
    else {
      local_11 = 1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

