// importZipAtPath:intoPack: @ 0108d33c

/* Function Stack Size: 0x20 bytes */

long_long WCRefineLocalEmoticonStore::importZipAtPath_intoPack_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ID local_120;
  ID local_110;
  ID local_108;
  undefined *local_c0;
  ID local_b8;
  byte local_aa;
  byte local_a9;
  ID local_a8;
  ID local_a0;
  byte local_91;
  ID local_90;
  byte local_81;
  ID local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_28 = 0;
    local_4c = 1;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ensureRootDirectoryExists__026a3c70,0);
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_wcr_le___);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    uVar1 = local_40;
    FUN_0108db5c(local_40,local_58);
    if ((uVar1 & 1) == 0) {
      local_28 = 0;
      local_4c = 1;
    }
    else {
      IVar2 = local_58;
      FUN_0108de44(local_58,3);
      _objc_retainAutoreleasedReturnValue();
      local_60 = IVar2;
      FUN_0108e290();
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectForKey__0269e048,&cf_categoryName);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_48;
      local_70 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      local_81 = 0;
      if (IVar6 == 0) {
        IVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        if (IVar2 == 0) {
          local_110 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_dedicatedImportPackNameForZipPat_026ae3c0,local_40);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = local_110;
        }
        else {
          local_110 = local_70;
        }
        local_108 = local_110;
      }
      else {
        local_108 = local_48;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_108;
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      IVar2 = local_78;
      FUN_0108b178();
      if ((IVar2 & 1) != 0) {
        IVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        local_91 = 0;
        if (IVar2 == 0) {
          local_120 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_dedicatedImportPackNameForZipPat_026ae3c0,local_40);
          _objc_retainAutoreleasedReturnValue();
          local_90 = local_120;
        }
        else {
          local_120 = local_70;
        }
        local_91 = IVar2 == 0;
        _objc_storeStrong(&local_78,local_120);
        if ((local_91 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
      }
      IVar2 = local_78;
      FUN_0108b178();
      if ((IVar2 & 1) != 0) {
        _objc_storeStrong(&local_78,&cf__eQh_S);
      }
      IVar6 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      IVar2 = local_30;
      if (IVar6 == 0) {
        IVar6 = local_78;
        FUN_0108688c();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_absolutePathFromRelative__026ae2c0);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar6);
        local_a9 = 0;
        local_aa = 0;
        puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a9 = 0;
        if (((ulong)puVar3 & 1) != 0) {
          local_a9 = local_aa;
        }
        local_a9 = local_a9 & 1;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        IVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ensurePackNamed__026ae3c8,local_78);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
        if (IVar2 == 0) {
          puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_28 = 0;
          local_4c = 1;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = puVar5;
          FUN_0108eee4(local_58,puVar5);
          IVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_importImagePaths_intoPack__026ae3d0,local_c0,local_b8);
          IVar7 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_importDouTuSqliteUnderPath_intoP_026ae3d8,local_58,local_b8);
          IVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_importDouTuTextUnderPath_intoPac_026ae3e0,local_58,local_b8,0,3)
          ;
          IVar2 = IVar6 + IVar7 + IVar2;
          puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if ((IVar2 == 0) && ((local_a9 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_deleteRelativePath_error__026a3a78,local_b8,0);
          }
          local_4c = 1;
          local_28 = IVar2;
          _objc_storeStrong(&local_c0,0);
        }
        _objc_storeStrong(&local_b8);
        _objc_storeStrong(&local_a8,0);
      }
      else {
        IVar2 = local_60;
        FUN_0108e6b0(local_60,local_78);
        puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_a0 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_28 = local_a0;
        local_4c = 1;
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

