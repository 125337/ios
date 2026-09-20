// uniqueImageFileNameInFramesDirectory: @ 018368cc

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarFrameLibraryViewController::uniqueImageFileNameInFramesDirectory_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *local_68;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  uint local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(local_20 + (long)_framesDirectory);
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_38;
  local_40 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileExistsAtPath__026ca630,uVar3);
  puVar2 = local_30;
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_30;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar4;
    for (local_60 = 1; puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8, local_60 < 1000;
        local_60 = local_60 + 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_____ld___);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(local_20 + (long)_framesDirectory);
      local_68 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_stringByAppendingPathComponent__026cab30,puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_40;
      local_40 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileExistsAtPath__026ca630,local_40);
      puVar2 = local_68;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar2;
      }
      local_44 = (uint)bVar1;
      _objc_storeStrong(&local_68,0);
      if (local_44 != 0) goto LAB_01836c78;
    }
    puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_________);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_44 = 1;
LAB_01836c78:
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

