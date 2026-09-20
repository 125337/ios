// FUN_0073bfb0 @ 0073bfb0

byte FUN_0073bfb0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 local_50;
  byte local_41;
  undefined8 local_40;
  undefined *local_38;
  undefined4 local_30;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630,local_20);
    if (((ulong)puVar2 & 1) == 0) {
      local_40 = 0;
      local_50 = 0;
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_20,1,0,&local_50);
      _objc_storeStrong(&local_40,local_50);
      local_41 = (byte)puVar2;
      local_11 = local_41 & 1;
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_11 = 1;
      local_30 = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

