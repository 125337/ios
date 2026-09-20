// importData:fileName:intoPack:error: @ 0108c534

/* Function Stack Size: 0x30 bytes */

ID WCRefineLocalEmoticonStore::importData_fileName_intoPack_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID *param_6)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  undefined *puVar7;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_188;
  ID local_150;
  uint local_144;
  ID local_110;
  ID local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  ID local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  byte local_99;
  ID local_98;
  byte local_89;
  ID local_88;
  ID local_80;
  byte local_75;
  uint local_74;
  ID *local_70;
  long local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  SEL local_50;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = (cfstringStruct *)0x0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,param_4);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_5);
  pcVar2 = local_58;
  local_70 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
  if (pcVar2 == (cfstringStruct *)0x0) {
    if (local_70 != (ID *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_zzeN;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLocalEmoticon,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_70 = (ID)puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    local_40 = 0;
    local_74 = 1;
    goto LAB_0108ce9c;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_ensureRootDirectoryExists__026a3c70,0);
  lVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  local_144 = 1;
  if (lVar3 != 0) {
    lVar3 = local_68;
    FUN_01085b64();
    local_144 = (uint)lVar3;
  }
  local_75 = (byte)local_144 & 1;
  local_89 = 0;
  local_99 = 0;
  local_150 = local_48;
  if ((local_144 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_absolutePathFromRelative__026ae2c0,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_98 = local_150;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rootAbsolutePath_026ae1f8);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_150;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_150;
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_75 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a8 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2;
  FUN_0107bd28();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_a8;
    local_a8 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_a8;
  FUN_0107bd28();
  local_b9 = 0;
  local_c9 = 0;
  if (((ulong)pcVar2 & 1) == 0) {
    local_188 = local_58;
    FUN_0107c72c();
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = local_188;
  }
  else {
    local_188 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_b9 = 1;
    local_b8 = local_188;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_188;
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  IVar6 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_extensionForData__026ac368,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = IVar6;
  FUN_0107b0d4();
  if ((IVar6 & 1) == 0) {
    _objc_storeStrong(&local_d8,&cf_png);
  }
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  local_e9 = 0;
  local_f9 = 0;
  if (pcVar2 == (cfstringStruct *)0x20) {
    local_198 = local_b0;
  }
  else {
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_1a0 = &cf_h_;
    }
    else {
      local_1a0 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 1;
      local_f8 = local_1a0;
    }
    local_198 = local_1a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_198;
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  IVar6 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_uniquePathInDirectory_preferredN_026ae378,local_80,local_e0,local_d8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_b0;
  local_108 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  IVar6 = local_80;
  if (pcVar2 == (cfstringStruct *)0x20) {
    pcVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_stringByAppendingPathExtension__026a4580,local_d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_110 = IVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    bVar1 = ((ulong)puVar7 & 1) == 0;
    if (bVar1) {
      _objc_storeStrong(&local_108,local_110);
    }
    else {
      FUN_0108cf00(local_b0,local_58);
      IVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_relativePathFromAbsolute__026ae380,local_110);
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar6;
    }
    local_74 = (uint)!bVar1;
    _objc_storeStrong(&local_110,0);
    if (local_74 == 0) goto LAB_0108cd8c;
  }
  else {
LAB_0108cd8c:
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_writeToFile_options_error__026a0a68,local_108,1,local_70);
    if (((ulong)pcVar2 & 1) == 0) {
      local_40 = 0;
      local_74 = 1;
    }
    else {
      pcVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x20) {
        FUN_0108cf00(0,local_b0,local_58);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_scheduleSendablePreconvertWalk_026ae218);
      FUN_0107ad08();
      IVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_relativePathFromAbsolute__026ae380,local_108);
      _objc_retainAutoreleasedReturnValue();
      local_74 = 1;
      local_40 = IVar6;
    }
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_80,0);
LAB_0108ce9c:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

