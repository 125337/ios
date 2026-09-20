// importMediaAtURL:error: @ 015da76c

/* Function Stack Size: 0x20 bytes */

ID WCRGlobalPageBackgroundStore::importMediaAtURL_error_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID local_c8;
  uint local_68;
  ID local_60;
  ID local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  ulong local_40;
  ID *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  IVar3 = local_20;
  local_41 = 0;
  local_68 = 1;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isSupportedFileName__026b0fd0);
    local_68 = (uint)IVar3 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_68 & 1) == 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_jpeg);
    if ((uVar2 & 1) != 0) {
      _objc_storeStrong(&local_50,&cf_jpg);
    }
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_uniqueFileNameWithExtension__026b0ff0,local_50);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_20;
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_startAccessingSecurityScopedReso_026a22c0);
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_60);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_copyItemAtURL_toURL_error__026a22c8,uVar2,puVar6,local_38);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
    }
    if (((ulong)puVar7 & 1) == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_c8;
    local_48 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_18 = 0;
    local_48 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

