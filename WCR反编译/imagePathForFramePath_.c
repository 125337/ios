// imagePathForFramePath: @ 01829b5c

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarFrameLibraryViewController::imagePathForFramePath_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  byte local_49;
  undefined *local_48;
  ID local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_absolutePathForRelative__026b6400,local_30)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar2;
    if (IVar2 == 0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 0;
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_40,&local_49);
      if ((((ulong)puVar3 & 1) == 0) || ((local_49 & 1) != 0)) {
        local_18 = 0;
      }
      else {
        IVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar2;
        FUN_01826888();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        local_18 = local_40;
        if ((IVar4 & 1) == 0) {
          local_18 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
        }
      }
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

