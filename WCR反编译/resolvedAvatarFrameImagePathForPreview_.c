// resolvedAvatarFrameImagePathForPreview: @ 01818b70

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarCornerBeautifyViewController::resolvedAvatarFrameImagePathForPreview_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_80;
  byte local_69;
  undefined *local_68;
  bool local_59;
  ID local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  uint local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (IVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     IVar2 = local_30, IVar1 == 0)) {
    local_18 = 0;
    local_34 = 1;
    goto LAB_01818f00;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = IVar2;
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
  if ((IVar2 & 1) == 0) {
    IVar2 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
    local_59 = false;
    if (IVar2 == 0) {
      local_80 = 0;
    }
    else {
      local_80 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectAtIndex__026b0360,0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_80;
    }
    local_59 = IVar2 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_80;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (IVar2 != 0) {
      IVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_40;
      local_40 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      local_18 = 0;
    }
    local_34 = (uint)(IVar2 == 0);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    if (local_34 == 0) goto LAB_01818d98;
  }
  else {
LAB_01818d98:
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_40,&local_69);
    IVar2 = local_20;
    if (((ulong)puVar4 & 1) == 0) {
      local_18 = 0;
    }
    else if ((local_69 & 1) == 0) {
      IVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isSupportedAvatarFrameImageExt__026b60e8);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_40;
      if ((IVar2 & 1) == 0) {
        local_18 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = IVar1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_firstImagePathInDirectoryForPrev_026b60f0,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar2;
    }
    local_34 = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_01818f00:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

