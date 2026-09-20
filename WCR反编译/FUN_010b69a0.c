// FUN_010b69a0 @ 010b69a0

byte FUN_010b69a0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong local_1e0;
  ulong local_1d8;
  char *local_1b0;
  char *local_1a0;
  ulong local_188;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  ulong local_128;
  byte local_11a;
  byte local_119;
  char *local_118;
  char *local_110;
  bool local_101;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  undefined4 local_dc;
  ulong local_d8;
  byte local_c9;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  FUN_010c86d4(local_b8,&cf_contentObj);
  _objc_retainAutoreleasedReturnValue();
  local_c9 = 0;
  local_188 = uVar2;
  if (uVar2 == 0) {
    local_188 = local_b8;
    FUN_010c86d4(local_b8,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_188;
  }
  local_c9 = uVar2 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_188;
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_c0;
  FUN_010c86d4(local_c0,&cf_mediaList);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_d8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_a9 = 0;
    local_dc = 1;
  }
  else {
    pcVar4 = "MMContext";
    _objc_getClass();
    pcVar5 = "WCFacade";
    local_e8 = pcVar4;
    _objc_getClass();
    pcVar4 = local_e8;
    local_f0 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
    local_101 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_1a0 = (char *)0x0;
    }
    else {
      local_1a0 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_1a0;
    }
    local_101 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_1a0;
    if ((local_101 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    local_119 = 0;
    if (((local_f8 == (char *)0x0) || (local_f0 == (char *)0x0)) ||
       (pcVar4 = local_f8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar4 & 1) == 0)) {
      local_1b0 = (char *)0x0;
    }
    else {
      local_1b0 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_getService__0269d170,local_f0);
      _objc_retainAutoreleasedReturnValue();
      local_119 = 1;
      local_118 = local_1b0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = local_1b0;
    if ((local_119 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    if ((local_110 == (char *)0x0) ||
       (pcVar4 = local_110,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_110,PTR_s_respondsToSelector__026ca818,
                  PTR_s_startDownloadSightMedia_Download_026a5648), ((ulong)pcVar4 & 1) == 0)) {
      local_a9 = 0;
    }
    else {
      local_11a = 0;
      _memset(auStack_168,0,0x40);
      uVar2 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10);
      if (local_1d8 != 0) {
        lVar6 = *local_158;
        local_1e0 = 0;
        do {
          do {
            if (*local_158 - lVar6 != 0) {
              _objc_enumerationMutation(*local_158 - lVar6,uVar2);
            }
            uVar7 = *(ulong *)(local_160 + local_1e0 * 8);
            local_128 = uVar7;
            FUN_010ca3c0();
            _objc_retainAutoreleasedReturnValue();
            local_170 = uVar7;
            if (uVar7 == 0) {
              local_dc = 3;
            }
            else {
              FUN_010ca4b4(uVar7,PTR_s_getFormatVideoPath_026a16d0);
              _objc_retainAutoreleasedReturnValue();
              local_178 = uVar7;
              FUN_010ca620();
              if ((uVar7 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_110,PTR_s_startDownloadSightMedia_Download_026a5648,local_170,0x22)
                ;
                local_11a = 1;
              }
              _objc_storeStrong(&local_178,0);
              local_dc = 0;
            }
            _objc_storeStrong(&local_170,0);
            local_1e0 = local_1e0 + 1;
          } while (local_1e0 < local_1d8);
          local_1d8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,
                     0x10);
          local_1e0 = 0;
        } while (local_1d8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_a9 = local_11a & 1;
    }
    local_dc = 1;
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

