// FUN_01092c58 @ 01092c58

byte FUN_01092c58(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined4 local_24;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = false;
    local_24 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileHandle_026cea88;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileHandle_026cea88,PTR_s_fileHandleForReadingAtPath__026ad8c8,
               local_20);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_11 = false;
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_readDataOfLength__026ad8d0,0x10);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_closeFile_026aa440);
      puVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      puVar5 = local_38;
      if ((undefined1 *)((long)&MACH_HEADER.filetype + 3) < puVar4) {
        _objc_retainAutorelease(puVar4 + -0x10);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_bytes_026a9630);
        iVar1 = _memcmp(puVar5,"SQLite format 3",0xf);
        local_11 = iVar1 == 0;
      }
      else {
        local_11 = false;
      }
      local_24 = 1;
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

