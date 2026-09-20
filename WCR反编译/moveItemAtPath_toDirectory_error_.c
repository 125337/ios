// moveItemAtPath:toDirectory:error: @ 015bace0

/* Function Stack Size: 0x28 bytes */

ID WCRefineVoicePackStore::moveItemAtPath_toDirectory_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  uint local_150;
  uint local_14c;
  byte local_dc;
  ID local_d8;
  ID local_d0;
  byte local_c1;
  ulong local_c0;
  undefined4 local_b8;
  byte local_b4;
  byte local_b3;
  byte local_b2;
  byte local_b1;
  undefined *local_b0;
  ID local_a8;
  ID local_a0;
  ulong local_98;
  ulong local_90;
  ID *local_88;
  ulong local_80;
  ulong local_78;
  SEL local_70;
  ID local_68;
  ID local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_4);
  uVar2 = local_78;
  local_88 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_stringByStandardizingPath_026cab38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_80;
  local_90 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByStandardizingPath_026cab38);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_68;
  local_98 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rootAbsolutePath_026ae1f8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = IVar5;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_stringByAppendingString__0269d398,&cf__);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_a8 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_b1 = 0;
  local_b2 = 0;
  uVar2 = local_90;
  local_b0 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  local_dc = 0;
  if (uVar2 != 0) {
    uVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isEqualToString__0269ccc8,local_a0);
    local_dc = 0;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_hasPrefix__0269d320,local_a8);
      local_dc = 0;
      if ((uVar2 & 1) != 0) {
        puVar6 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_90,&local_b1);
        local_dc = (byte)puVar6;
      }
    }
  }
  local_b3 = local_dc & 1;
  uVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
  bVar1 = 0;
  if (uVar2 != 0) {
    uVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,local_a0);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_hasPrefix__0269d320,local_a8);
      bVar1 = 0;
      if ((uVar2 & 1) == 0) goto LAB_015bafac;
    }
    puVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_98,&local_b2);
    bVar1 = 0;
    if (((ulong)puVar6 & 1) != 0) {
      bVar1 = local_b2;
    }
  }
LAB_015bafac:
  puVar6 = PTR__OBJC_CLASS___NSError_026ce470;
  local_b4 = bVar1 & 1;
  if (((local_b3 & 1) == 0) || ((bVar1 & 1) == 0)) {
    if (local_88 != (ID *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_yR_eHe;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,6);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_88 = (ID)puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    local_60 = 0;
    local_b8 = 1;
  }
  else {
    uVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSError_026ce470;
    if ((uVar3 & 1) == 0) {
      local_c1 = 0;
      local_14c = 0;
      if ((local_b1 & 1) != 0) {
        uVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,local_90);
        uVar2 = local_98;
        local_150 = 1;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_stringByAppendingString__0269d398,&cf__);
          _objc_retainAutoreleasedReturnValue();
          local_c1 = 1;
          local_c0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasPrefix__0269d320);
          local_150 = (uint)uVar2;
        }
        local_14c = local_150;
      }
      if ((local_c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      IVar4 = local_68;
      uVar2 = local_98;
      puVar6 = PTR__OBJC_CLASS___NSError_026ce470;
      if ((local_14c & 1) == 0) {
        uVar3 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_uniquePathInDirectory_preferredN_026b0d30,uVar2);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = IVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        IVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_relativePathFromAbsolute__026ae380,local_90);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_b0;
        local_d8 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_moveItemAtPath_toPath_error__0269f940,local_90,local_d0,local_88);
        IVar5 = local_68;
        IVar4 = local_d8;
        if (((ulong)puVar6 & 1) == 0) {
          local_60 = 0;
        }
        else {
          IVar8 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_relativePathFromAbsolute__026ae380,local_d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar5,PTR_s_rebaseMetadataFromRelativePath_t_026b0d28,IVar4);
          (*(code *)PTR__objc_release_02578630)(IVar8);
          IVar4 = local_68;
          uVar2 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_stringByDeletingLastPathComponen_0269fb90);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar4,PTR_s_invalidateFolderStatsCacheForPat_026b0d20);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_invalidateFolderStatsCacheForPat_026b0d20,local_98);
          IVar4 = local_d0;
          (*(code *)PTR__objc_retain_02578638)();
          local_60 = IVar4;
        }
        local_b8 = 1;
        _objc_storeStrong(&local_d8);
        _objc_storeStrong(&local_d0,0);
      }
      else {
        if (local_88 != (ID *)0x0) {
          local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
          local_50 = &cf_vhR__MON_beN9YQ;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_58,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,8);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *local_88 = (ID)puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar7);
        }
        local_60 = 0;
        local_b8 = 1;
      }
    }
    else {
      if (local_88 != (ID *)0x0) {
        local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
        local_40 = &cf___WS_MRR__;
        puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,7);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *local_88 = (ID)puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      local_60 = 0;
      local_b8 = 1;
    }
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

