// FUN_005c8b90 @ 005c8b90

void FUN_005c8b90(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_3a0;
  undefined *local_398;
  void *local_330;
  void *local_328;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  undefined *local_1d8;
  ulong local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  ulong local_188;
  undefined *local_180;
  undefined1 *local_178;
  undefined **local_170 [2];
  undefined *local_160;
  undefined *local_158 [3];
  undefined4 local_140;
  byte local_139;
  undefined **local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = (undefined *)0x0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = (undefined **)0x0;
  _objc_storeStrong(&local_138,param_2);
  local_139 = param_3;
  if (local_130 == (undefined *)0x0) {
    local_140 = 1;
  }
  else {
    ppuVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
    if (ppuVar2 == (undefined **)0x0) {
      puVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_sourceUserName_026a5ae0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_005c78e0();
      _objc_retainAutoreleasedReturnValue();
      local_158[0] = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_158[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_length_0269cca0);
      if (puVar3 == (undefined *)0x0) {
        puVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_dataItem_026a13c8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        FUN_005c78e0();
        _objc_retainAutoreleasedReturnValue();
        local_160 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
        if (puVar3 != (undefined *)0x0) {
          _objc_storeStrong(puVar3,&local_138,local_160);
        }
        _objc_storeStrong(&local_160,0);
      }
      else {
        _objc_storeStrong(puVar3,&local_138,local_158[0]);
      }
      ppuVar2 = local_158;
      _objc_storeStrong(ppuVar2,0);
    }
    FUN_005a6698();
    _objc_retainAutoreleasedReturnValue();
    local_170[0] = ppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)(ppuVar2,PTR_s_length_0269cca0);
    if ((ppuVar2 == (undefined **)0x0) ||
       (ppuVar2 = local_138,
       (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isEqualToString__0269ccc8,local_170[0])
       , ((ulong)ppuVar2 & 1) == 0)) {
      ppuVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
      if (ppuVar2 == (undefined **)0x0) {
        local_140 = 1;
      }
      else {
        puVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isPrivate_026a4710);
        if ((((ulong)puVar3 & 1) == 0) &&
           (puVar3 = local_130,
           (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_visibilityType_026a5ae8),
           (int)puVar3 != 2)) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
          local_178 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
          _objc_retainAutoreleasedReturnValue();
          local_180 = puVar3;
          if ((((local_139 & 1) != 0) || (local_178 == (undefined1 *)0x0)) ||
             (local_178 == (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,local_138);
          }
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = false;
          if (((ulong)puVar4 & 1) != 0) {
            bVar1 = local_178 == (undefined1 *)((long)&MACH_HEADER.magic + 1) ||
                    local_178 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (bVar1) {
            pvVar7 = _memset(auStack_1c8,0,0x40);
            FUN_005c982c();
            _objc_retainAutoreleasedReturnValue();
            local_328 = pvVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_328 != (void *)0x0) {
              lVar8 = *local_1b8;
              local_330 = (void *)0x0;
              do {
                do {
                  if (*local_1b8 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_1b8 - lVar8,pvVar7);
                  }
                  uVar9 = *(ulong *)(local_1c0 + (long)local_330 * 8);
                  local_188 = uVar9;
                  FUN_005c78e0();
                  _objc_retainAutoreleasedReturnValue();
                  local_1d0 = uVar9;
                  FUN_005ca0b4();
                  if ((uVar9 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_180,PTR_s_addObject__0269d180,local_1d0);
                  }
                  _objc_storeStrong(&local_1d0,0);
                  local_330 = (void *)((long)local_330 + 1);
                } while (local_330 < local_328);
                local_328 = pvVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pvVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,
                           auStack_a8,0x10);
                local_330 = (void *)0x0;
              } while (local_328 != (void *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(pvVar7);
          }
          puVar3 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_count_0269cfe0);
          if (puVar3 == (undefined *)0x0) {
            local_140 = 1;
          }
          else {
            puVar3 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_blackUserList_026a5af8);
            _objc_retainAutoreleasedReturnValue();
            local_1d8 = puVar3;
            if (puVar3 == (undefined *)0x0) {
              puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = local_1d8;
              local_1d8 = puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_setBlackUserList__026a5b00,local_1d8);
            }
            _memset(auStack_220,0,0x40);
            puVar3 = local_180;
            (*(code *)PTR__objc_retain_02578638)();
            local_398 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                       auStack_128,0x10);
            if (local_398 != (undefined *)0x0) {
              lVar8 = *local_210;
              local_3a0 = (undefined *)0x0;
              do {
                do {
                  if (*local_210 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_210 - lVar8,puVar3);
                  }
                  local_1e0 = *(undefined8 *)(local_218 + (long)local_3a0 * 8);
                  puVar4 = local_1d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d8,PTR_s_containsObject__0269cbb8,local_1e0);
                  if (((ulong)puVar4 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1d8,PTR_s_addObject__0269d180,local_1e0);
                  }
                  local_3a0 = local_3a0 + 1;
                } while (local_3a0 < local_398);
                local_398 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                           auStack_128,0x10);
                local_3a0 = (undefined *)0x0;
              } while (local_398 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar3 = local_1d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_count_0269cfe0);
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTempUserCount__026a5b08,puVar3)
            ;
            puVar3 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_visibilityType_026a5ae8);
            if ((int)puVar3 < 2) {
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setVisibilityType__026a5508,4);
            }
            _objc_storeStrong(&local_1d8,0);
            local_140 = 0;
          }
          _objc_storeStrong(&local_180,0);
        }
        else {
          local_140 = 1;
        }
      }
    }
    else {
      local_140 = 1;
    }
    _objc_storeStrong(local_170,0);
  }
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

