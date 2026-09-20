// FUN_01506f40 @ 01506f40

void FUN_01506f40(void)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  uint local_36c;
  void *local_340;
  void *local_338;
  uint local_2dc;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined *local_270;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  long local_1f0;
  undefined *local_1e8;
  byte local_1d9;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  uint local_1b4;
  undefined *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160;
  bool local_151;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_270 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_138 = local_270;
  FUN_0150d4c8();
  _objc_retainAutoreleasedReturnValue();
  local_151 = false;
  bVar1 = local_270 == (undefined *)0x0;
  local_140 = local_270;
  if (bVar1) {
    local_270 = (undefined *)0x0;
  }
  else {
    pcVar2 = "groupContainerURLs";
    _sel_registerName("groupContainerURLs");
    (*(code *)PTR__objc_msgSend_02578628)(local_270,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_150 = local_270;
  }
  local_151 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = local_270;
  if ((local_151 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  puVar4 = local_148;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)puVar4 & 1) != 0) &&
     (puVar4 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0),
     puVar4 != (undefined *)0x0)) {
    local_160 = (undefined *)0x0;
    _memset(auStack_1a8,0,0x40);
    puVar4 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_2a8 != (undefined *)0x0) {
      lVar8 = *local_198;
      local_2b0 = (undefined *)0x0;
      do {
        do {
          if (*local_198 - lVar8 != 0) {
            _objc_enumerationMutation(*local_198 - lVar8,puVar4);
          }
          local_168 = *(undefined8 *)(local_1a0 + (long)local_2b0 * 8);
          puVar3 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_objectForKeyedSubscript__0269d098,local_168);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
          local_1b0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((ulong)puVar3 & 1) == 0) {
            local_1b4 = 3;
          }
          else {
            puVar3 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b0,PTR_s_URLByAppendingPathComponent_isDi_026a7b90,
                       &cf_Library_Preferences,1);
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_URLByAppendingPathComponent__026a7b98,
                       &cf_com_qimiao_WCRefine_sideload_share_fix_group);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = local_1c0;
            local_1c8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_URLByAppendingPathComponent__026a7b98,
                       &cf_com_qimiao_WCRefine_sideload_share_fix_log);
            _objc_retainAutoreleasedReturnValue();
            local_1d0 = puVar5;
            if (local_160 == (undefined *)0x0) {
              _objc_storeStrong(&local_160,puVar5);
            }
            puVar5 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_path_0269d4d8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            puVar3 = local_138;
            local_1d9 = 0;
            local_2dc = 0;
            if (puVar6 != (undefined *)0x0) {
              puVar6 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_path_0269d4d8);
              _objc_retainAutoreleasedReturnValue();
              local_1d9 = 1;
              local_1d8 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fileExistsAtPath__026ca630);
              local_2dc = (uint)puVar3;
            }
            if ((local_1d9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1d8);
            }
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar3 = local_1d0;
            bVar1 = (local_2dc & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = puVar3;
            }
            local_1b4 = (uint)bVar1;
            _objc_storeStrong(&local_1d0);
            _objc_storeStrong(&local_1c8,0);
            _objc_storeStrong(&local_1c0,0);
          }
          _objc_storeStrong(&local_1b0,0);
          if ((local_1b4 != 0) && (local_1b4 != 3)) goto LAB_01507514;
          local_2b0 = local_2b0 + 1;
        } while (local_2b0 < local_2a8);
        local_2a8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_2b0 = (undefined *)0x0;
      } while (local_2a8 != (undefined *)0x0);
    }
    local_1b4 = 0;
LAB_01507514:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_160;
    if (local_1b4 == 0) {
      if (local_160 == (undefined *)0x0) {
        local_1b4 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar4;
        local_1b4 = 1;
      }
    }
    _objc_storeStrong(&local_160,0);
    if (local_1b4 != 0) goto LAB_01507a1c;
  }
  local_1e8 = (undefined *)0x0;
  pvVar7 = _memset(auStack_230,0,0x40);
  _WCRSideloadShareFixApplicationGroupIDs();
  _objc_retainAutoreleasedReturnValue();
  local_338 = pvVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_338 != (void *)0x0) {
    lVar8 = *local_220;
    local_340 = (void *)0x0;
    do {
      do {
        if (*local_220 - lVar8 != 0) {
          _objc_enumerationMutation(*local_220 - lVar8,pvVar7);
        }
        lVar9 = *(long *)(local_228 + (long)local_340 * 8);
        local_1f0 = lVar9;
        (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
        if (lVar9 != 0) {
          puVar4 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_containerURLForSecurityApplicati_026a7b88,local_1f0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
          local_238 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)puVar4 & 1) == 0) {
            local_1b4 = 5;
          }
          else {
            puVar4 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_238,PTR_s_URLByAppendingPathComponent_isDi_026a7b90,
                       &cf_Library_Preferences,1);
            _objc_retainAutoreleasedReturnValue();
            local_240 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_URLByAppendingPathComponent__026a7b98,
                       &cf_com_qimiao_WCRefine_sideload_share_fix_group);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_240;
            local_248 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_240,PTR_s_URLByAppendingPathComponent__026a7b98,
                       &cf_com_qimiao_WCRefine_sideload_share_fix_log);
            _objc_retainAutoreleasedReturnValue();
            local_250 = puVar3;
            if (local_1e8 == (undefined *)0x0) {
              _objc_storeStrong(&local_1e8,puVar3);
            }
            puVar3 = local_248;
            (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_path_0269d4d8);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            puVar4 = local_138;
            local_36c = 0;
            if (puVar5 != (undefined *)0x0) {
              puVar5 = local_248;
              (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_path_0269d4d8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_fileExistsAtPath__026ca630);
              local_36c = (uint)puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar4 = local_250;
            bVar1 = (local_36c & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = puVar4;
            }
            local_1b4 = (uint)bVar1;
            _objc_storeStrong(&local_250);
            _objc_storeStrong(&local_248,0);
            _objc_storeStrong(&local_240,0);
          }
          _objc_storeStrong(&local_238,0);
          if ((local_1b4 != 0) && (local_1b4 != 5)) goto LAB_015079bc;
        }
        local_340 = (void *)((long)local_340 + 1);
      } while (local_340 < local_338);
      local_338 = pvVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,0x10
                );
      local_340 = (void *)0x0;
    } while (local_338 != (void *)0x0);
  }
  local_1b4 = 0;
LAB_015079bc:
  (*(code *)PTR__objc_release_02578630)(pvVar7);
  puVar4 = local_1e8;
  if (local_1b4 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar4;
    local_1b4 = 1;
  }
  _objc_storeStrong(&local_1e8,0);
LAB_01507a1c:
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

