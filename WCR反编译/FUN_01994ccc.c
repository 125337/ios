// FUN_01994ccc @ 01994ccc

byte FUN_01994ccc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_01994ffc;
  }
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_28,1,0);
  pcVar4 = "MZipUtil";
  _objc_getClass();
  if ((pcVar4 == (char *)0x0) ||
     (pcVar5 = pcVar4,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_UnZipFile_toPath__0269f918),
     ((ulong)pcVar5 & 1) == 0)) {
LAB_01994ef4:
    pcVar4 = "SSZipArchive";
    _objc_getClass();
    if ((pcVar4 == (char *)0x0) ||
       (pcVar5 = pcVar4,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar4,PTR_s_respondsToSelector__026ca818,
                  PTR_s_unzipFileAtPath_toDestination__026ae480), ((ulong)pcVar5 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_unzipFileAtPath_toDestination__026ae480,local_20,local_28);
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_28,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = puVar6 != (undefined *)0x0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_UnZipFile_toPath__0269f918,local_20,local_28)
    ;
    bVar1 = false;
    if (((ulong)pcVar4 & 1) != 0) {
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_28,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar6 != (undefined *)0x0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (!bVar1) goto LAB_01994ef4;
    local_11 = 1;
  }
  local_2c = 1;
  _objc_storeStrong(&local_38,0);
LAB_01994ffc:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

