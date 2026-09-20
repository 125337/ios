// FUN_0113c4d0 @ 0113c4d0

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0113c4d0(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_1e8;
  undefined *local_1a8;
  undefined *local_1a0;
  ulong local_158;
  byte local_14a;
  byte local_149;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8 [2];
  undefined *local_e8;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  _os_unfair_lock_lock();
  DAT_028e3600 = 0;
  local_a9 = DAT_028e35f0 & 1;
  local_b8 = DAT_028e35f8;
  puVar4 = DAT_028e35d0;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e35d0,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_c0 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar5 = &DAT_028e35c8;
  DAT_028e35f0 = 0;
  _os_unfair_lock_unlock();
  FUN_00a59890();
  puVar4 = local_c0;
  local_c8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (puVar4 == (undefined *)0x0) {
    _os_unfair_lock_lock(&DAT_028e35c8);
    if (local_c8 != (undefined *)0x0) {
      DAT_028e35d8 = local_c8;
    }
    _os_unfair_lock_unlock(&DAT_028e35c8);
    if ((local_a9 & 1) == 0) {
      local_cc = 1;
    }
    else {
      local_cc = 1;
    }
  }
  else if ((local_a9 & 1) == 0) {
    local_cc = 1;
  }
  else {
    FUN_00a5a528(local_f8);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    puVar5 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_dictionaryWithCapacity__026a1ad0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar4;
    _memset(auStack_148,0,0x40);
    puVar4 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_1a0 != (undefined *)0x0) {
      lVar7 = *local_138;
      local_1a8 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar7 != 0) {
            _objc_enumerationMutation(*local_138 - lVar7,puVar4);
          }
          uVar8 = *(ulong *)(local_140 + (long)local_1a8 * 8);
          local_108 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
          if (2 < uVar8) {
            uVar8 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_hasSuffix__0269d018,&cf__b);
            local_149 = (byte)uVar8;
            uVar6 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_hasSuffix__0269d018,&cf__i);
            uVar8 = local_108;
            local_14a = (byte)uVar6;
            uVar6 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_substringToIndex__0269d6c0,uVar6 - 2);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_108;
            local_158 = uVar8;
            FUN_01139b54();
            if (((int)uVar6 == 0) || ((local_149 & 1) != 0)) {
              uVar8 = local_158;
              FUN_0113b0b8(local_158,local_149 & 1,local_14a & 1);
              if (local_e8 == (undefined *)0x0) {
                local_1e8 = local_c8;
              }
              else {
                local_1e8 = local_e8;
              }
              uVar8 = (ulong)((byte)uVar8 & 1);
              FUN_0113ba60(uVar8,uVar6 & 0xffffffff,local_1e8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_setObject_forKeyedSubscript__0269d248,uVar8,local_108);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              local_cc = 0;
            }
            else {
              uVar8 = local_158;
              FUN_01139ef0(local_158,local_14a & 1,uVar6 & 0xffffffff,local_f8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_setObject_forKeyedSubscript__0269d248,uVar8,local_108);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              local_cc = 3;
            }
            _objc_storeStrong(&local_158,0);
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_1a8 = (undefined *)0x0;
      } while (local_1a0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = &DAT_028e35c8;
    _os_unfair_lock_lock();
    puVar5 = local_c8;
    bVar3 = true;
    if (local_b8 == DAT_028e35f8) {
      FUN_00a59890();
      bVar3 = true;
      if (puVar5 == puVar4) {
        FUN_00a59890();
        bVar3 = true;
        if (local_e8 == puVar4) {
          FUN_00a4ec00();
          bVar3 = local_f8[0] != puVar4;
        }
      }
    }
    if (!bVar3) {
      if (DAT_028e35d0 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = DAT_028e35d0;
        DAT_028e35d0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e35d0,PTR_s_addEntriesFromDictionary__026a2e30,local_100);
      if (local_c8 != (undefined *)0x0) {
        DAT_028e35d8 = local_c8;
      }
    }
    bVar2 = true;
    if ((DAT_028e35f0 & 1) == 0) {
      bVar2 = bVar3;
    }
    if (bVar3) {
      DAT_028e35f0 = 1;
    }
    _os_unfair_lock_unlock(&DAT_028e35c8);
    if (bVar2) {
      _os_unfair_lock_lock();
      bVar1 = DAT_028e3600 ^ 1;
      DAT_028e35f0 = 1;
      DAT_028e3600 = 1;
      _os_unfair_lock_unlock(&DAT_028e35c8);
      puVar4 = PTR___dispatch_main_q_02578680;
      if ((bVar1 & 1) != 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
    }
    _objc_storeStrong(&local_100,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

