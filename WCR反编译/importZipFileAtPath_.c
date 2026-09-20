// importZipFileAtPath: @ 01834940

/* Function Stack Size: 0x18 bytes */

long_long WCRefineAvatarFrameLibraryViewController::importZipFileAtPath_
                    (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  uint local_6c;
  ID local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  byte local_39;
  undefined *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_39 = 0;
  local_6c = 1;
  if (local_30 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (uint)puVar1 ^ 1;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_6c & 1) == 0) {
    if (*(long *)(local_20 + (long)_framesDirectory) == 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_avatarFrameDirectoryPath_026b63b0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = *(ID *)(local_20 + (long)_framesDirectory);
      *(ID *)(local_20 + (long)_framesDirectory) = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_48,1,0);
    uVar7 = local_30;
    FUN_01834650(local_30,local_48);
    local_51 = (byte)uVar7;
    if ((uVar7 & 1) == 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_unzipFileAtPath_toPath__026a7798,local_30,local_48);
      local_51 = (byte)IVar2;
    }
    if ((local_51 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeItemAtPath_error__0269f910,local_48,0);
      local_18 = 0;
      local_40 = 1;
    }
    else {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_recursiveImageFilePathsUnderPath_026b6558,local_48);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_20;
      local_60 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_importImageFilesAtPaths__026b6560,IVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeItemAtPath_error__0269f910,local_48);
      local_40 = 1;
      local_18 = IVar3;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_18 = 0;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

