// FUN_00fadab8 @ 00fadab8

byte FUN_00fadab8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_50;
  char *local_48;
  undefined1 local_39;
  char *local_38;
  int local_2c;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_00faddb8;
  }
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = "MZipUtil";
  _objc_getClass();
  local_38 = pcVar3;
  if ((pcVar3 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_UnZipFile_toPath__0269f918),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_UnZipFile_toPath__0269f918,local_20,local_28);
    local_39 = SUB81(pcVar3,0);
    if (((ulong)pcVar3 & 1) != 0) {
      local_11 = 1;
      local_2c = 1;
      goto LAB_00faddb8;
    }
  }
  pcVar3 = "ZipArchive";
  _objc_getClass();
  local_48 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    _objc_alloc_init();
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_UnzipOpenFile__026ad0b0);
    if (((((ulong)pcVar3 & 1) == 0) ||
        (pcVar3 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_UnzipFileTo_overWrite__026ad0b8
                  ), ((ulong)pcVar3 & 1) == 0)) ||
       (pcVar3 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_UnzipOpenFile__026ad0b0,local_20),
       ((ulong)pcVar3 & 1) == 0)) {
LAB_00fadd78:
      local_2c = 0;
    }
    else {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_UnzipFileTo_overWrite__026ad0b8,local_28,1);
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_UnzipCloseFile_026ad0c0);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_UnzipCloseFile_026ad0c0);
      }
      if (((ulong)pcVar3 & 1) == 0) goto LAB_00fadd78;
      local_11 = 1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_50,0);
    if (local_2c != 0) goto LAB_00faddb8;
  }
  local_11 = 0;
  local_2c = 1;
LAB_00faddb8:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

