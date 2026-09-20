// FUN_0156ecf0 @ 0156ecf0

byte FUN_0156ecf0(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  dispatch_time_t dVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  double local_240;
  ulong local_210;
  ulong local_208;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  ulong local_1b8;
  char *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined8 local_178;
  double local_170;
  undefined *local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8;
  char *local_f0;
  char *local_e8;
  undefined *local_e0;
  char *local_d8;
  ulong local_d0;
  undefined4 local_c4;
  double local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = param_1;
  if ((local_b8 == 0) || (uVar2 = local_b8, FUN_01564574(), (uVar2 & 1) == 0)) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    uVar2 = local_b8;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_a9 = 0;
      local_c4 = 1;
    }
    else {
      pcVar3 = "MMServiceCenter";
      _objc_getClass();
      FUN_01533df4();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = PTR_s_getService__0269d170;
      pcVar4 = "SendPatMgr";
      local_d8 = pcVar3;
      _objc_getClass();
      local_f0 = (char *)0x0;
      local_e8 = pcVar4;
      if (((local_d8 != (char *)0x0) && (pcVar4 != (char *)0x0)) &&
         (pcVar3 = local_d8,
         (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_respondsToSelector__026ca818,local_e0)
         , ((ulong)pcVar3 & 1) != 0)) {
        pcVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_e0,local_e8);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_f0;
        local_f0 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if ((local_f0 == (char *)0x0) ||
         (pcVar3 = local_f0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_f0,PTR_s_respondsToSelector__026ca818,
                    PTR_s_sendPatToUser_inGroup_scene__026a63d8), ((ulong)pcVar3 & 1) == 0)) {
        local_a9 = 0;
        local_c4 = 1;
      }
      else {
        puVar5 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        FUN_01528c84();
        _objc_retainAutoreleasedReturnValue();
        local_f8 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar5;
        _memset(auStack_148,0,0x40);
        uVar2 = local_b8;
        FUN_01534040();
        _objc_retainAutoreleasedReturnValue();
        local_208 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_208 != 0) {
          lVar8 = *local_138;
          local_210 = 0;
          do {
            do {
              if (*local_138 - lVar8 != 0) {
                _objc_enumerationMutation(*local_138 - lVar8,uVar2);
              }
              uVar9 = *(ulong *)(local_140 + local_210 * 8);
              local_108 = uVar9;
              FUN_01528c84();
              _objc_retainAutoreleasedReturnValue();
              local_150 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_length_0269cca0);
              if (uVar9 == 0) {
                local_c4 = 3;
              }
              else {
                puVar5 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
                if ((puVar5 == (undefined *)0x0) ||
                   (uVar9 = local_150,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_150,PTR_s_isEqualToString__0269ccc8,local_f8), (uVar9 & 1) == 0)
                   ) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_100,PTR_s_addObject__0269d180,local_150);
                  local_c4 = 0;
                }
                else {
                  local_c4 = 3;
                }
              }
              _objc_storeStrong(&local_150,0);
              local_210 = local_210 + 1;
            } while (local_210 < local_208);
            local_208 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                       0x10);
            local_210 = 0;
          } while (local_208 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        puVar5 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_158 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_count_0269cfe0);
        if (puVar5 == (undefined *)0x0) {
          local_a9 = 0;
        }
        else {
          FUN_015794bc();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          _objc_sync_enter();
          FUN_015794bc();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          _objc_sync_exit(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if (local_c0 <= 0.0) {
            local_240 = 0.5;
          }
          else {
            local_240 = local_c0;
          }
          local_170 = local_240;
          local_178 = 0;
          for (local_180 = (undefined *)0x0; puVar5 = local_180, puVar6 = local_158,
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0), puVar5 < puVar6
              ; local_180 = local_180 + 1) {
            puVar5 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_objectAtIndexedSubscript__0269cc78,local_180);
            _objc_retainAutoreleasedReturnValue();
            dVar10 = (double)NEON_ucvtf(local_180);
            local_188 = puVar5;
            dVar7 = _dispatch_time(0,(long)(local_170 * dVar10 * 1000000000.0));
            puVar5 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_d0;
            local_1d8 = PTR___NSConcreteStackBlock_02578660;
            local_1d0 = 0xc2000000;
            local_1cc = 0;
            local_1c8 = FUN_01579594;
            local_1c0 = &DAT_025868e0;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar3 = local_f0;
            local_1b8 = uVar2;
            (*(code *)PTR__objc_retain_02578638)();
            puVar6 = local_188;
            local_1b0 = pcVar3;
            (*(code *)PTR__objc_retain_02578638)();
            puVar1 = local_158;
            local_1a8 = puVar6;
            local_198 = local_178;
            local_190 = local_180;
            (*(code *)PTR__objc_retain_02578638)();
            local_1a0 = puVar1;
            _dispatch_after(dVar7,puVar5,&local_1d8);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            _objc_storeStrong(&local_1a0);
            _objc_storeStrong(&local_1a8,0);
            _objc_storeStrong(&local_1b0,0);
            _objc_storeStrong(&local_1b8,0);
            _objc_storeStrong(&local_188,0);
          }
          local_a9 = 1;
        }
        local_c4 = 1;
        _objc_storeStrong(&local_158);
        _objc_storeStrong(&local_100,0);
        _objc_storeStrong(&local_f8,0);
      }
      _objc_storeStrong(&local_f0);
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

