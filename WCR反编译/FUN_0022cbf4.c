// FUN_0022cbf4 @ 0022cbf4

void FUN_0022cbf4(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_1c0;
  ulong local_1b8;
  char *local_158;
  char *local_150;
  char *local_148;
  byte local_139;
  ulong local_138;
  undefined1 local_129;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  undefined4 local_c8;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar1 = local_b0;
  FUN_0022a660();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_c8 = 1;
  }
  else {
    pcVar2 = "MMHeadImageMgr";
    _objc_getClass();
    local_d0 = pcVar2;
    FUN_0022e3e0();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_c8 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_deleteUsrHeadImg__026a0a38);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_deleteUsrHeadImg__026a0a38,local_b8);
      }
      pcVar2 = local_d8;
      FUN_0022e5e4();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar2;
      if (pcVar2 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_deleteUsrHeadImg__026a0a38);
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_deleteUsrHeadImg__026a0a38,local_b8);
        }
        pcVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_respondsToSelector__026ca818,
                   PTR_s_deleteUsrHeadImgFromLocal_isHD__026a0a40);
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_deleteUsrHeadImgFromLocal_isHD__026a0a40,local_b8,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_deleteUsrHeadImgFromLocal_isHD__026a0a40,local_b8,1);
        }
        pcVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_respondsToSelector__026ca818,
                   PTR_s_deleteUsrHDHeadImgFromLocal__026a0a48);
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_deleteUsrHDHeadImgFromLocal__026a0a48,local_b8);
        }
      }
      _memset(auStack_128,0,0x40);
      uVar1 = local_b8;
      FUN_002311a0();
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1b8 != 0) {
        lVar3 = *local_118;
        local_1c0 = 0;
        do {
          do {
            if (*local_118 - lVar3 != 0) {
              _objc_enumerationMutation(*local_118 - lVar3,uVar1);
            }
            uVar4 = *(undefined8 *)(local_120 + local_1c0 * 8);
            local_e8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_unsignedCharValue_026a0a00);
            local_129 = (undefined1)uVar4;
            for (local_138 = 0; local_138 < 2; local_138 = local_138 + 1) {
              local_139 = local_138 == 1;
              if ((local_e0 != (char *)0x0) &&
                 (pcVar2 = local_e0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_e0,PTR_s_respondsToSelector__026ca818,
                            PTR_s_getImgSavePath_forCategory_isHD__026a0a10),
                 ((ulong)pcVar2 & 1) != 0)) {
                pcVar2 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_getImgSavePath_forCategory_isHD__026a0a10,local_b8,
                           local_129,local_139 & 1);
                _objc_retainAutoreleasedReturnValue();
                local_148 = pcVar2;
                FUN_002314ac(pcVar2);
                _objc_storeStrong(&local_148,0);
              }
              if ((local_d0 != (char *)0x0) &&
                 (pcVar2 = local_d0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_d0,PTR_s_respondsToSelector__026ca818,
                            PTR_s_getHeadImgPathForNewVersionForLo_026a0a50),
                 ((ulong)pcVar2 & 1) != 0)) {
                pcVar2 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0,PTR_s_getHeadImgPathForNewVersionForLo_026a0a50,local_b8,
                           local_129,local_139 & 1);
                _objc_retainAutoreleasedReturnValue();
                local_150 = pcVar2;
                FUN_002314ac(pcVar2);
                _objc_storeStrong(&local_150,0);
              }
              if ((local_d0 != (char *)0x0) &&
                 (pcVar2 = local_d0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_d0,PTR_s_respondsToSelector__026ca818,
                            PTR_s_getHeadImgPathForNewVersion_forC_026a0a58),
                 ((ulong)pcVar2 & 1) != 0)) {
                pcVar2 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0,PTR_s_getHeadImgPathForNewVersion_forC_026a0a58,local_b8,
                           local_129,local_139 & 1);
                _objc_retainAutoreleasedReturnValue();
                local_158 = pcVar2;
                FUN_002314ac(pcVar2);
                _objc_storeStrong(&local_158,0);
              }
            }
            local_1c0 = local_1c0 + 1;
          } while (local_1c0 < local_1b8);
          local_1b8 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1c0 = 0;
        } while (local_1b8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((local_d0 != (char *)0x0) &&
         (pcVar2 = local_d0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_d0,PTR_s_respondsToSelector__026ca818,
                    PTR_s_getHeadImgPathForOldVersion_isHD_026a0a60), ((ulong)pcVar2 & 1) != 0)) {
        pcVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_getHeadImgPathForOldVersion_isHD_026a0a60,local_b8,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_002314ac();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_getHeadImgPathForOldVersion_isHD_026a0a60,local_b8,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_002314ac();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      FUN_0022ed84(local_e0,local_b8);
      _objc_storeStrong(&local_e0,0);
      local_c8 = 0;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

