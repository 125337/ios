// FUN_0051897c @ 0051897c

void FUN_0051897c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong local_2b8;
  ulong local_2b0;
  undefined *local_278;
  undefined *local_270;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  byte local_1b9;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  ulong local_150;
  undefined4 local_144;
  undefined *local_140;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = (undefined *)0x0;
  _objc_storeStrong(&local_140,param_2);
  puVar2 = local_140;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_140;
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar1;
    local_144 = 1;
  }
  else {
    local_150 = 0;
    uVar5 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_microMerchantFeedsMgr_026a4850);
    if ((uVar5 & 1) != 0) {
      uVar3 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_microMerchantFeedsMgr_026a4850);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_150;
      local_150 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    puVar1 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_158 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_160 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar1;
    _memset(auStack_1b0,0,0x40);
    puVar2 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_270 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10);
    if (local_270 != (undefined *)0x0) {
      lVar4 = *local_1a0;
      local_278 = (undefined *)0x0;
      do {
        do {
          if (*local_1a0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar4,puVar2);
          }
          uVar5 = *(ulong *)(local_1a8 + (long)local_278 * 8);
          local_1b8 = 0;
          local_170 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_wsGroup_026a4858);
          if ((uVar5 & 1) != 0) {
            uVar3 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_wsGroup_026a4858);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_1b8;
            local_1b8 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          local_1b9 = 0;
          uVar5 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_respondsToSelector__026ca818,PTR_s_isWsPlaceHolder_026a4860);
          if ((uVar5 & 1) != 0) {
            uVar5 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_isWsPlaceHolder_026a4860);
            local_1b9 = (byte)uVar5;
          }
          uVar5 = local_1b8;
          FUN_00519058();
          local_1c8 = uVar5;
          if (uVar5 < 2) {
            if ((local_1b9 & 1) == 0) {
              if (local_1b8 != 0) {
                FUN_0051915c(local_170);
              }
              FUN_00519224(local_160,local_168,local_170);
              local_144 = 3;
            }
            else {
              local_144 = 3;
            }
          }
          else {
            uVar3 = local_170;
            FUN_00519384(uVar5 - 2,local_170,local_1b8);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_150;
            local_1d0 = uVar3;
            FUN_00519600(local_150,local_1b8);
            _objc_retainAutoreleasedReturnValue();
            local_1d8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_count_0269cfe0);
            if (uVar5 < 2) {
              FUN_00519a64(uVar5 - 2,local_150,local_1d0);
              FUN_00519cc8(local_150,local_1b8,local_170);
              FUN_00519224(local_160,local_168,local_170);
              local_144 = 0;
            }
            else {
              FUN_00519a64(uVar5 - 2,local_150,local_1d0);
              _memset(auStack_220,0,0x40);
              uVar5 = local_1d8;
              FUN_00519b64();
              _objc_retainAutoreleasedReturnValue();
              local_2b0 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_2b0 != 0) {
                lVar6 = *local_210;
                local_2b8 = 0;
                do {
                  do {
                    if (*local_210 - lVar6 != 0) {
                      _objc_enumerationMutation(*local_210 - lVar6,uVar5);
                    }
                    local_1e0 = *(undefined8 *)(local_218 + local_2b8 * 8);
                    FUN_0051915c(local_1e0);
                    FUN_00519224(local_160,local_168,local_1e0);
                    local_2b8 = local_2b8 + 1;
                  } while (local_2b8 < local_2b0);
                  local_2b0 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                             auStack_128,0x10);
                  local_2b8 = 0;
                } while (local_2b0 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar5);
              local_144 = 3;
            }
            _objc_storeStrong(&local_1d8);
            _objc_storeStrong(&local_1d0,0);
          }
          _objc_storeStrong(&local_1b8,0);
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                   0x10);
        local_278 = (undefined *)0x0;
      } while (local_270 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar2;
    local_144 = 1;
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

