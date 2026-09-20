// FUN_007393fc @ 007393fc

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_007393fc(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint local_374;
  undefined *local_308;
  undefined *local_300;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_228;
  byte local_219;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  long local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  int local_148;
  long local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  long *plVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar2 = &local_138;
  local_138 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  _WCRSideloadShareFixIsGroupRemapExtensionProcess();
  if ((uVar1 & 1) == 0) {
    local_130 = (undefined *)0x0;
    local_148 = 1;
  }
  else {
    puVar6 = DAT_028cc538;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc538,PTR_s_length_0269cca0);
    puVar3 = DAT_028cc538;
    if (puVar6 == (undefined *)0x0) {
      _WCRSideloadShareFixMarkerGroupID(0);
      _objc_retainAutoreleasedReturnValue();
      local_150 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
      if (puVar6 == (undefined *)0x0) {
        if (DAT_028cc550 == (code *)0x0) {
          local_130 = (undefined *)0x0;
          local_148 = 1;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = local_138;
          local_158 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
          puVar3 = (undefined *)0x0;
          if (lVar7 != 0) {
            puVar3 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_138);
          }
          _WCRSideloadShareFixApplicationGroupIDs();
          _objc_retainAutoreleasedReturnValue();
          local_160 = puVar3;
          _memset(auStack_1a8,0,0x40);
          puVar3 = local_160;
          (*(code *)PTR__objc_retain_02578638)();
          local_2a0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                     0x10);
          if (local_2a0 != (undefined *)0x0) {
            lVar7 = *local_198;
            local_2a8 = (undefined *)0x0;
            do {
              do {
                if (*local_198 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_198 - lVar7,puVar3);
                }
                lVar8 = *(long *)(local_1a0 + (long)local_2a8 * 8);
                local_168 = lVar8;
                (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
                if ((lVar8 != 0) &&
                   (puVar6 = local_158,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_158,PTR_s_containsObject__0269cbb8,local_168),
                   ((ulong)puVar6 & 1) == 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_158,PTR_s_addObject__0269d180,local_168);
                }
                local_2a8 = local_2a8 + 1;
              } while (local_2a8 < local_2a0);
              local_2a0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,
                         auStack_a8,0x10);
              local_2a8 = (undefined *)0x0;
            } while (local_2a0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = PTR_s_containerURLForSecurityApplicati_026a7b88;
          local_1b0 = puVar3;
          _memset(auStack_200,0,0x40);
          puVar3 = local_158;
          (*(code *)PTR__objc_retain_02578638)();
          local_300 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,
                     0x10);
          if (local_300 != (undefined *)0x0) {
            lVar7 = *local_1f0;
            local_308 = (undefined *)0x0;
            do {
              do {
                if (*local_1f0 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_1f0 - lVar7,puVar3);
                }
                local_1c0 = *(undefined8 *)(local_1f8 + (long)local_308 * 8);
                puVar6 = local_1b0;
                (*DAT_028cc550)(local_1b0,local_1b8,local_1c0);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
                local_208 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                if (((ulong)puVar6 & 1) == 0) {
                  local_148 = 5;
                }
                else {
                  puVar6 = local_208;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_208,PTR_s_URLByAppendingPathComponent_isDi_026a7b90,
                             &cf_Library_Preferences,1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_210 = puVar4;
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  local_219 = 0;
                  puVar4 = local_210;
                  (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_path_0269d4d8);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  puVar6 = local_1b0;
                  local_374 = 1;
                  if (puVar5 != (undefined *)0x0) {
                    puVar5 = local_210;
                    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_path_0269d4d8);
                    _objc_retainAutoreleasedReturnValue();
                    local_219 = 1;
                    local_218 = puVar5;
                    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_fileExistsAtPath__026ca630);
                    local_374 = (uint)puVar6 ^ 1;
                  }
                  if ((local_219 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_218);
                  }
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  if ((local_374 & 1) == 0) {
                    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,
                               PTR_s_stringWithContentsOfURL_encoding_026a7ba0,local_210,4,0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                    local_228 = puVar4;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar6 = local_228;
                    local_228 = puVar4;
                    (*(code *)PTR__objc_release_02578630)(puVar6);
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    puVar6 = local_228;
                    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_length_0269cca0);
                    uVar9 = 0;
                    if (puVar6 == (undefined *)0x0) {
LAB_00739e44:
                      local_148 = 0;
                    }
                    else {
                      puVar6 = local_158;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_158,PTR_s_containsObject__0269cbb8,local_228);
                      uVar9 = (ulong)puVar6 & 0xffffffff;
                      if (((ulong)puVar6 & 1) == 0) goto LAB_00739e44;
                      puVar4 = local_228;
                      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_copy_0269d150);
                      puVar6 = DAT_028cc538;
                      DAT_028cc538 = puVar4;
                      (*(code *)PTR__objc_release_02578630)(puVar6);
                      puVar6 = DAT_028cc538;
                      (*(code *)PTR__objc_retain_02578638)();
                      uVar9 = 1;
                      local_148 = 1;
                      local_130 = puVar6;
                    }
                    _objc_storeStrong(uVar9,&local_228,0);
                  }
                  else {
                    local_148 = 5;
                  }
                  _objc_storeStrong(&local_210,0);
                }
                _objc_storeStrong(&local_208,0);
                if ((local_148 != 0) && (local_148 != 5)) goto LAB_00739f0c;
                local_308 = local_308 + 1;
              } while (local_308 < local_300);
              local_300 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                         auStack_128,0x10);
              local_308 = (undefined *)0x0;
            } while (local_300 != (undefined *)0x0);
          }
          local_148 = 0;
LAB_00739f0c:
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_148 == 0) {
            local_130 = (undefined *)0x0;
            local_148 = 1;
          }
          _objc_storeStrong(&local_1b0);
          _objc_storeStrong(&local_160,0);
          _objc_storeStrong(&local_158,0);
        }
      }
      else {
        puVar6 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
        puVar3 = DAT_028cc538;
        DAT_028cc538 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = DAT_028cc538;
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = 1;
        local_130 = puVar3;
      }
      _objc_storeStrong(&local_150,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar3;
      local_148 = 1;
    }
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

