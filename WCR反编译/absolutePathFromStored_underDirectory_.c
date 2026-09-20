// absolutePathFromStored:underDirectory: @ 01109548

/* Function Stack Size: 0x20 bytes */

ID WCRefinePluginIconCatalog::absolutePathFromStored_underDirectory_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  uint local_f4;
  ID local_c8;
  ID local_b0;
  ID local_a8;
  byte local_99;
  ID local_98;
  ID local_90;
  ID local_88;
  bool local_79;
  ID local_78;
  ID local_70;
  undefined *local_68;
  uint local_5c;
  ID local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  IVar2 = local_40;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_48;
  local_50 = IVar2;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_50;
  local_58 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if ((IVar2 == 0) ||
     (IVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     IVar2 == 0)) {
    local_28 = 0;
    local_5c = 1;
    goto LAB_01109b7c;
  }
  puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_50;
  local_68 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf__);
  if (((IVar2 & 1) == 0) ||
     (puVar4 = local_68,
     (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_fileExistsAtPath__026ca630,local_50),
     IVar2 = local_50, ((ulong)puVar4 & 1) == 0)) {
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf__);
    local_79 = false;
    bVar1 = (IVar2 & 1) == 0;
    if (bVar1) {
      local_c8 = local_50;
    }
    else {
      local_c8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_relativePathFromAbsolute_underDi_026aee88,local_50,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_c8;
    }
    local_79 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_c8;
    if ((local_79 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      IVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_70;
      local_70 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    IVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_stringByAppendingPathComponent__026cab30,local_70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_68;
    local_88 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_fileExistsAtPath__026ca630,IVar2);
    IVar3 = local_58;
    IVar2 = local_88;
    if (((ulong)puVar4 & 1) == 0) {
      IVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_90 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isEqualToString__0269ccc8,local_88);
      if (((IVar2 & 1) == 0) &&
         (puVar4 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_fileExistsAtPath__026ca630,local_90),
         IVar2 = local_90, ((ulong)puVar4 & 1) != 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = IVar2;
        local_5c = 1;
      }
      else {
        IVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_99 = 0;
        local_f4 = 0;
        if ((IVar3 & 1) == 0) {
          IVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          local_98 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_f4 = (uint)IVar3 ^ 1;
        }
        if ((local_99 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if ((local_f4 & 1) != 0) {
          IVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_stringByDeletingPathExtension_0269fd18);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_58;
          local_a8 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_stringByAppendingString__0269d398,&cf__light_png);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = IVar2;
          (*(code *)PTR__objc_release_02578630)(IVar3);
          puVar4 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_fileExistsAtPath__026ca630,local_b0);
          IVar2 = local_b0;
          bVar1 = ((ulong)puVar4 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = IVar2;
          }
          local_5c = (uint)bVar1;
          _objc_storeStrong(&local_b0);
          _objc_storeStrong(&local_a8,0);
          if (local_5c != 0) goto LAB_01109b3c;
        }
        local_28 = 0;
        local_5c = 1;
      }
LAB_01109b3c:
      _objc_storeStrong(&local_90,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = IVar2;
      local_5c = 1;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_70,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = IVar2;
    local_5c = 1;
  }
  _objc_storeStrong(&local_68,0);
LAB_01109b7c:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

