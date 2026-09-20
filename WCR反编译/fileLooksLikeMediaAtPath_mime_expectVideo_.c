// fileLooksLikeMediaAtPath:mime:expectVideo: @ 00fff1f4

/* Function Stack Size: 0x24 bytes */

bool WCRefineLinkMediaSender::fileLooksLikeMediaAtPath_mime_expectVideo_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ID IVar5;
  uint local_6c;
  undefined *local_68;
  undefined *local_60;
  undefined1 *local_58;
  undefined4 local_50;
  byte local_49;
  undefined *local_48;
  byte local_39;
  undefined8 local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_39 = (byte)param_5;
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_49 = 0;
  local_6c = 1;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (uint)puVar2 ^ 1;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_6c & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_58 = puVar4;
    if ((undefined1 *)((long)&MACH_HEADER.reserved + 3) < puVar4) {
      puVar2 = PTR__OBJC_CLASS___NSFileHandle_026cea88;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileHandle_026cea88,PTR_s_fileHandleForReadingAtPath__026ad8c8,
                 local_30);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_readDataOfLength__026ad8d0,0x40);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_closeFile_026aa440);
      IVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_looksLikeMediaData_mime_expectVi_026ad8d8,local_68,local_38,
                 local_39 & 1);
      if ((IVar5 & 1) == 0) {
        local_11 = 0;
      }
      else if (((local_39 & 1) == 0) ||
              ((undefined1 *)((long)&dylib_command_00001ff0.dylib.timestamp + 3) < local_58)) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
      local_50 = 1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_11 = 0;
      local_50 = 1;
    }
  }
  else {
    local_11 = 0;
    local_50 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

