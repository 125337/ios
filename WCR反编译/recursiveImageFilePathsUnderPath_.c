// recursiveImageFilePathsUnderPath: @ 01835ce0

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarFrameLibraryViewController::recursiveImageFilePathsUnderPath_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *local_230;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1c8;
  undefined8 local_1a0;
  ulong local_198;
  byte local_189;
  undefined8 local_188;
  undefined8 local_180;
  cfstringStruct *local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  cfstringStruct *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  bool local_109;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  undefined4 local_ec;
  ulong local_e8;
  ulong local_e0;
  SEL local_d8;
  ID local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [128];
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  uVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_stringByStandardizingPath_026cab38);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_ec = 1;
    local_c8 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 0;
    local_f8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_e8,&local_f9);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_ec = 1;
      local_c8 = puVar3;
    }
    else {
      uVar2 = local_e8;
      FUN_018364f8();
      if ((uVar2 & 1) == 0) {
        if ((local_f9 & 1) == 0) {
          uVar2 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          FUN_01826888();
          local_109 = false;
          bVar1 = (uVar4 & 1) == 0;
          if (bVar1) {
            local_1c8 = *(undefined **)PTR____NSArray0___02578280;
          }
          else {
            local_30 = local_e8;
            local_1c8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_30,1);
            _objc_retainAutoreleasedReturnValue();
            local_108 = local_1c8;
          }
          local_109 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = local_1c8;
          if ((local_109 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_108);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_ec = 1;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_40 = *(undefined8 *)PTR__NSURLIsDirectoryKey_02578260;
          local_38 = *(undefined8 *)PTR__NSURLIsSymbolicLinkKey_02578268;
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_118 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_40,2);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_f8;
          puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
          local_120 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath_isDirectory__026a8f30,
                     local_e8,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_enumeratorAtURL_includingPropert_026b0eb8,puVar6,local_120,6,
                     &PTR___NSConcreteGlobalBlock_025898a8);
          _objc_retainAutoreleasedReturnValue();
          local_128 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          _memset(auStack_170,0,0x40);
          puVar3 = local_128;
          (*(code *)PTR__objc_retain_02578638)();
          local_200 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_c0,
                     0x10);
          if (local_200 != (undefined *)0x0) {
            lVar9 = *local_160;
            local_208 = (undefined *)0x0;
            do {
              do {
                if (*local_160 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_160 - lVar9,puVar3);
                }
                pcVar10 = *(cfstringStruct **)(local_168 + (long)local_208 * 8);
                local_130 = pcVar10;
                (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_path_0269d4d8);
                _objc_retainAutoreleasedReturnValue();
                local_230 = pcVar10;
                if (pcVar10 == (cfstringStruct *)0x0) {
                  local_230 = &::cf___;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_178 = local_230;
                (*(code *)PTR__objc_release_02578630)(pcVar10);
                local_180 = 0;
                local_188 = 0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_130,PTR_s_getResourceValue_forKey_error__026b2d98,&local_188,
                           *(undefined8 *)PTR__NSURLIsDirectoryKey_02578260,0);
                _objc_storeStrong(&local_180,local_188);
                uVar7 = local_180;
                (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_boolValue_026ca540);
                local_189 = (byte)uVar7;
                pcVar10 = local_178;
                FUN_018364f8();
                if (((ulong)pcVar10 & 1) == 0) {
                  local_198 = 0;
                  local_1a0 = 0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_130,PTR_s_getResourceValue_forKey_error__026b2d98,&local_1a0,
                             *(undefined8 *)PTR__NSURLIsSymbolicLinkKey_02578268,0);
                  _objc_storeStrong(&local_198,local_1a0);
                  uVar2 = local_198;
                  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_boolValue_026ca540);
                  if ((uVar2 & 1) == 0) {
                    if ((local_189 & 1) == 0) {
                      pcVar10 = local_130;
                      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pathExtension_0269e090);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar8 = pcVar10;
                      FUN_01826888();
                      (*(code *)PTR__objc_release_02578630)(pcVar10);
                      if (((ulong)pcVar8 & 1) == 0) {
                        local_ec = 3;
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_118,PTR_s_addObject__0269d180,local_178);
                        local_ec = 0;
                      }
                    }
                    else {
                      local_ec = 3;
                    }
                  }
                  else {
                    if ((local_189 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_128,PTR_s_skipDescendants_026b0be8);
                    }
                    local_ec = 3;
                  }
                  _objc_storeStrong(&local_198,0);
                }
                else {
                  if ((local_189 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_skipDescendants_026b0be8);
                  }
                  local_ec = 3;
                }
                _objc_storeStrong(&local_180);
                _objc_storeStrong(&local_178,0);
                local_208 = local_208 + 1;
              } while (local_208 < local_200);
              local_200 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,
                         auStack_c0,0x10);
              local_208 = (undefined *)0x0;
            } while (local_200 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_sortUsingComparator__0269d168,
                     &PTR___NSConcreteGlobalBlock_025898c8);
          puVar3 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_copy_0269d150);
          local_ec = 1;
          local_c8 = puVar3;
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_120,0);
          _objc_storeStrong(&local_118,0);
        }
      }
      else {
        puVar3 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_ec = 1;
        local_c8 = puVar3;
      }
    }
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_c8;
}

