// representativeBubblePathInPackNamed: @ 015cf0ec

/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeStore::representativeBubblePathInPackNamed_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong local_200;
  undefined *local_1b0;
  undefined *local_1a8;
  ID local_168;
  ulong local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  undefined *local_f8;
  int local_f0;
  bool local_e9;
  ID local_e8;
  byte local_d9;
  ID local_d8;
  ID local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar8 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  local_d9 = 0;
  local_e9 = false;
  if (lVar8 == 0) {
    local_168 = 0;
  }
  else {
    local_168 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_168;
  }
  local_e9 = lVar8 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_168;
  if ((local_e9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  IVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_b0 = 0;
    local_f0 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath_isDirectory__026a8f30,local_d0
               ,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_enumeratorAtURL_includingPropert_026b0eb8,puVar3,0,4);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    _memset(auStack_158,0,0x40);
    puVar2 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_1a8 != (undefined *)0x0) {
      lVar8 = *local_148;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          if (*local_148 - lVar8 != 0) {
            _objc_enumerationMutation(*local_148 - lVar8,puVar2);
          }
          uVar9 = *(ulong *)(local_150 + (long)local_1b0 * 8);
          local_110 = local_110 + 1;
          local_118 = uVar9;
          if (400 < local_110) {
            local_f0 = 2;
            goto LAB_015cf6a0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_hasDirectoryPath_026b0ec0);
          if ((uVar9 & 1) == 0) {
            uVar9 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            if ((uVar6 & 1) != 0) {
              uVar9 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar9;
              FUN_015ca2a4();
              _objc_retainAutoreleasedReturnValue();
              local_160 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar9);
              uVar9 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_hasPrefix__0269d320,&cf_chatroom_bubble_text_sender);
              if ((uVar9 & 1) == 0) {
                if ((local_100 == 0) && (uVar9 = local_160, FUN_015cc93c(), (uVar9 & 1) != 0)) {
                  uVar5 = local_118;
                  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_path_0269d4d8);
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = local_100;
                  local_100 = uVar5;
                  (*(code *)PTR__objc_release_02578630)(uVar9);
                }
                if (local_108 == 0) {
                  uVar5 = local_118;
                  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_path_0269d4d8);
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = local_108;
                  local_108 = uVar5;
                  (*(code *)PTR__objc_release_02578630)(uVar9);
                }
                local_f0 = 0;
              }
              else {
                uVar9 = local_118;
                (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_path_0269d4d8);
                _objc_retainAutoreleasedReturnValue();
                local_f0 = 1;
                local_b0 = uVar9;
              }
              _objc_storeStrong(&local_160,0);
              if (local_f0 != 0) goto LAB_015cf6a0;
            }
          }
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    local_f0 = 0;
LAB_015cf6a0:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_f0 == 0) || (iVar7 = local_f0 + -2, iVar7 == 0)) {
      if (local_100 == 0) {
        local_200 = local_108;
      }
      else {
        local_200 = local_100;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_200;
      iVar7 = 1;
      local_f0 = 1;
    }
    _objc_storeStrong(iVar7,&local_108);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

