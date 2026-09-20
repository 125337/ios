// absolutePathForRelativePath: @ 010d7544

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateHelper::absolutePathForRelativePath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID local_d0;
  ID local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_normalizedRelativePath__026ae7b8,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    FUN_010d6dfc();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
    if (IVar1 == 0) {
      local_18 = 0;
      local_3c = 1;
    }
    else {
      IVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_stringByAppendingPathComponent__026cab30,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_50 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar4 = local_48;
      IVar1 = local_50;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (((ulong)puVar3 & 1) == 0) {
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_58 = IVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(IVar1);
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        IVar1 = local_58;
        if (((ulong)puVar3 & 1) == 0) {
          IVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_libraryDirectoryPath_026ae7c0);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_60 = IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(IVar1);
          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (((ulong)puVar3 & 1) == 0) {
            local_d0 = 0;
          }
          else {
            local_d0 = local_60;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_d0;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_3c = 1;
          _objc_storeStrong(&local_60,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = IVar1;
          local_3c = 1;
        }
        _objc_storeStrong(&local_58,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = IVar1;
        local_3c = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

