// processZip: @ 018342e8

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameLibraryViewController::processZip_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  ID IVar6;
  ID local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_38,1,0);
  uVar1 = local_30;
  FUN_01834650(local_30,local_38);
  local_41 = (byte)uVar1;
  if ((uVar1 & 1) == 0) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_unzipFileAtPath_toPath__026a7798,local_30,local_38);
    local_41 = (byte)IVar5;
  }
  if ((local_41 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showToast__026b3a18,&cf_Z);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_removeItemAtPath_error__0269f910,local_38,0);
    local_48 = 1;
  }
  else {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_recursiveImageFilePathsUnderPath_026b6558,local_38);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_18;
    local_50 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_importImageFilesAtPaths__026b6560,IVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_removeItemAtPath_error__0269f910,local_38,0);
    IVar5 = local_18;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_bR_eQ);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_showToast__026b3a18);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (0 < (long)IVar6) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyAvatarFrameAssetsChanged_026b6530);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadFrames_026b63c0);
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

