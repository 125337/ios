// FUN_01834650 @ 01834650

byte FUN_01834650(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  long local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = false;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = "MZipUtil";
    _objc_getClass();
    if ((pcVar3 == (char *)0x0) ||
       ((pcVar4 = pcVar3,
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_UnZipFile_toPath__0269f918),
        ((ulong)pcVar4 & 1) == 0 ||
        ((*(code *)PTR__objc_msgSend_02578628)
                   (pcVar3,PTR_s_UnZipFile_toPath__0269f918,local_20,local_28),
        ((ulong)pcVar3 & 1) == 0)))) {
      pcVar5 = &cf_SSZipArchive;
      _NSClassFromString();
      if ((pcVar5 == (cfstringStruct *)0x0) ||
         (pcVar6 = pcVar5,
         (*(code *)PTR__objc_msgSend_02578628)
                   (pcVar5,PTR_s_respondsToSelector__026ca818,
                    PTR_s_unzipFileAtPath_toDestination__026ae480), ((ulong)pcVar6 & 1) == 0)) {
        local_11 = false;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_performSelector_withObject_withO_026ca7c8,
                   PTR_s_unzipFileAtPath_toDestination__026ae480,local_20,local_28);
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_11 = puVar8 != (undefined *)0x0;
      }
    }
    else {
      local_11 = true;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

