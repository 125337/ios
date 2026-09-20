// importFileAtPath:toDirectory:preferredName:error: @ 015bbbfc

/* Function Stack Size: 0x30 bytes */

ID WCRefineVoicePackStore::importFileAtPath_toDirectory_preferredName_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID *param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  ID IVar5;
  ulong uVar6;
  undefined *puVar7;
  uint local_254;
  uint local_22c;
  ulong local_220;
  ulong local_1a8;
  ID local_180;
  uint local_12c;
  ID local_128;
  byte local_119;
  ulong local_118;
  ulong local_110;
  ID local_108;
  ID local_100;
  ID local_f8;
  byte local_e9;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  byte local_c9;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  ID local_a8;
  ID local_a0;
  byte local_91;
  undefined4 local_90;
  byte local_89;
  undefined *local_88;
  ID *local_80;
  ulong local_78;
  ID local_70;
  ulong local_68;
  SEL local_60;
  ID local_58;
  ID local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  local_60 = param_2;
  local_58 = param_1;
  _objc_storeStrong(&local_68,param_3);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_4);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_5);
  uVar1 = local_68;
  local_80 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  local_89 = 0;
  local_12c = 1;
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_12c = (uint)puVar2 ^ 1;
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
  if ((local_12c & 1) == 0) {
    local_91 = 0;
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_91 & 1) == 0) {
      IVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_a9 = 0;
      if (IVar3 == 0) {
        local_180 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rootAbsolutePath_026ae1f8);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = local_180;
      }
      else {
        local_180 = local_70;
      }
      local_a9 = IVar3 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_180;
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_ensureRootDirectoryExists__026a3c70);
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isEqualToString__0269ccc8,&cf_zip);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
        local_119 = 0;
        if (uVar1 == 0) {
          local_220 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_118 = local_220;
        }
        else {
          local_220 = local_78;
        }
        local_119 = uVar1 == 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_110 = local_220;
        if ((local_119 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_118);
        }
        IVar3 = local_58;
        uVar1 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isSupportedAudioExtension__026a9d50);
        local_22c = 0;
        if ((IVar3 & 1) == 0) {
          IVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_isSupportedAudioExtension__026a9d50,local_b8);
          local_22c = (uint)IVar3;
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if ((local_22c & 1) != 0) {
          uVar4 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_110,PTR_s_stringByDeletingPathExtension_0269fd18);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_110;
          local_110 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        IVar3 = local_58;
        uVar1 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isSupportedAudioExtension__026a9d50);
        local_254 = 0;
        if ((IVar3 & 1) == 0) {
          IVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_isSupportedAudioExtension__026a9d50,local_b8);
          local_254 = (uint)IVar3 ^ 1;
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
        if ((local_254 & 1) == 0) {
          IVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_uniquePathInDirectory_preferredN_026b0d30,local_a0,local_110);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          local_128 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (((ulong)puVar7 & 1) == 0) {
            local_50 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_invalidateFolderStatsCacheForPat_026b0d20,local_a0);
            IVar3 = local_128;
            (*(code *)PTR__objc_retain_02578638)();
            local_50 = IVar3;
          }
          local_90 = 1;
          _objc_storeStrong(&local_128,0);
        }
        else {
          if (local_80 != (ID *)0x0) {
            local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
            local_40 = &cf_N_ecv<h_;
            puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,10
                      );
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *local_80 = (ID)puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          local_50 = 0;
          local_90 = 1;
        }
        _objc_storeStrong(&local_110,0);
      }
      else {
        uVar1 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
        local_c9 = 0;
        local_d9 = 0;
        local_e9 = 0;
        if (uVar1 == 0) {
          local_1a8 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          local_d8 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_e9 = 1;
          local_e8 = local_1a8;
        }
        else {
          local_1a8 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_stringByDeletingPathExtension_0269fd18);
          _objc_retainAutoreleasedReturnValue();
          local_c9 = 1;
          local_c8 = local_1a8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = local_1a8;
        if ((local_e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        if ((local_c9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_c8);
        }
        uVar1 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          _objc_storeStrong(&local_c0,&::cf_S);
        }
        IVar3 = local_a0;
        IVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rootAbsolutePath_026ae1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        if ((IVar3 & 1) == 0) {
          IVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_uniquePathInDirectory_preferredN_026b0d30,local_a0,local_c0);
          _objc_retainAutoreleasedReturnValue();
          local_100 = 0;
          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          local_f8 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_108 = local_100;
          puVar7 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_storeStrong(&local_100,local_108);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          IVar3 = local_100;
          if (((ulong)puVar7 & 1) == 0) {
            if (local_80 != (ID *)0x0) {
              _objc_retainAutorelease();
              *local_80 = IVar3;
            }
            local_50 = 0;
          }
          else {
            IVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_unzipFileAtPath_toDirectory_erro_026b0d50,local_68,local_f8,
                       local_80);
            if ((IVar3 & 1) == 0) {
              puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar2);
              local_50 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_wcr_flattenSingleRootFolderIfNee_026b0d58,local_f8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_invalidateFolderStatsCacheForPat_026b0d20,local_a0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_invalidateFolderStatsCacheForPat_026b0d20,local_f8);
              IVar3 = local_f8;
              (*(code *)PTR__objc_retain_02578638)();
              local_50 = IVar3;
            }
          }
          local_90 = 1;
          _objc_storeStrong(&local_100);
          _objc_storeStrong(&local_f8,0);
        }
        else {
          IVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_unzipArchiveAtPath_toRootAsNamed_026a9d80,local_68,local_c0,
                     local_80);
          _objc_retainAutoreleasedReturnValue();
          local_90 = 1;
          local_50 = IVar3;
        }
        _objc_storeStrong(&local_c0,0);
      }
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      IVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_importFolderAtPath_toDirectory_e_026b0d48,local_68,local_70,local_80
                );
      _objc_retainAutoreleasedReturnValue();
      local_90 = 1;
      local_50 = IVar3;
    }
  }
  else {
    if (local_80 != (ID *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_neNNX__W;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,5);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_80 = (ID)puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    local_50 = 0;
    local_90 = 1;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_50;
}

