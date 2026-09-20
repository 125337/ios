// FUN_016c8d60 @ 016c8d60

byte FUN_016c8d60(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *local_50;
  undefined4 local_48;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_21 = 0;
    local_48 = 1;
    goto LAB_016c91ac;
  }
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_38,1,0);
  pcVar4 = "MZipUtil";
  _objc_getClass();
  if ((pcVar4 == (char *)0x0) ||
     (pcVar5 = pcVar4,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_UnZipFile_toPath__0269f918),
     ((ulong)pcVar5 & 1) == 0)) {
LAB_016c9040:
    pcVar4 = "SSZipArchive";
    _objc_getClass();
    if ((pcVar4 == (char *)0x0) ||
       (pcVar5 = pcVar4,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar4,PTR_s_respondsToSelector__026ca818,
                  PTR_s_unzipFileAtPath_toDestination__026ae480), ((ulong)pcVar5 & 1) == 0)) {
      local_21 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_unzipFileAtPath_toDestination__026ae480,local_30,local_38);
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_38,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_21 = puVar6 != (undefined *)0x0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_UnZipFile_toPath__0269f918,local_30,local_38)
    ;
    bVar1 = false;
    if (((ulong)pcVar4 & 1) != 0) {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_38,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar6 != (undefined *)0x0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (!bVar1) goto LAB_016c9040;
    local_21 = 1;
  }
  local_48 = 1;
  _objc_storeStrong(&local_50,0);
LAB_016c91ac:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

