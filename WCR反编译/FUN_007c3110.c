// FUN_007c3110 @ 007c3110

void FUN_007c3110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_3e0;
  undefined *local_3d8;
  undefined *local_348;
  undefined *local_340;
  undefined *local_2f8;
  uint local_2cc;
  uint local_2a8;
  undefined *local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  ulong local_220;
  ulong local_218 [2];
  undefined *local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  ulong local_1b8;
  byte local_1a9;
  undefined *local_1a8;
  undefined *local_1a0;
  byte local_191;
  undefined8 local_190;
  byte local_181;
  undefined *local_180;
  undefined *local_178;
  ulong local_170;
  ulong local_168;
  uint local_160;
  undefined *local_150;
  ulong local_148;
  ulong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  undefined **ppuVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  ppuVar3 = &local_150;
  local_150 = (undefined *)0x0;
  _objc_storeStrong(ppuVar3,param_5);
  uVar2 = (uint)ppuVar3;
  FUN_007d92bc();
  if ((uVar2 & 1) == 0) {
    (*DAT_028ccdc0)(local_130,local_138,local_140,local_148,local_150);
    local_160 = 1;
  }
  else if (((local_140 == 0) || (local_148 == 0)) || (local_150 == (undefined *)0x0)) {
    (*DAT_028ccdc0)(local_130,local_138,local_140,local_148,local_150);
    local_160 = 1;
  }
  else {
    uVar10 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
    uVar4 = local_148;
    local_168 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_copy_0269d150);
    puVar5 = local_150;
    local_170 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
    local_181 = 0;
    local_178 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineRootViewController);
    local_2a8 = 0;
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_181 = 1;
      local_180 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_2a8 = (uint)puVar5 ^ 1;
    }
    if ((local_181 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_180);
    }
    if ((local_2a8 & 1) != 0) {
      _objc_storeStrong(&DAT_028ccd38);
      _objc_storeStrong(&DAT_028ccd40,0);
    }
    local_191 = 0;
    puVar5 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
    uVar6 = 0;
    local_2cc = 0;
    if (puVar5 != (undefined *)0x0) {
      FUN_007d5940(puVar5);
      _objc_retainAutoreleasedReturnValue();
      local_191 = 1;
      local_190 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_2cc = (uint)uVar6;
    }
    if ((local_191 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_190);
    }
    if ((local_2cc & 1) == 0) {
      local_2f8 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineRootViewController);
      if ((((ulong)local_2f8 & 1) == 0) ||
         (local_2f8 = PTR_WCRefineHelper_026ce000,
         (*(code *)PTR__objc_msgSend_02578628)
                   (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50),
         ((ulong)local_2f8 & 1) == 0)) {
        local_1a9 = 0;
        FUN_007d92bc();
        if (((ulong)local_2f8 & 1) == 0) {
          FUN_007d9414();
          _objc_retainAutoreleasedReturnValue();
          local_1a9 = 1;
          local_1a8 = local_2f8;
        }
        else {
          local_2f8 = *(undefined **)PTR____NSDictionary0___02578288;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1a0 = local_2f8;
        if ((local_1a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1a8);
        }
        puVar5 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0);
        uVar10 = local_168;
        if (puVar5 == (undefined *)0x0) {
          puVar5 = local_178;
          FUN_007d9888(local_178,local_168,local_170);
          if (((ulong)puVar5 & 1) == 0) {
            (*DAT_028ccdc0)(local_130,local_138,local_168,local_170,local_178);
            FUN_007d9c4c(local_178,local_168,local_170);
            local_160 = 1;
          }
          else {
            local_160 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_1b8 = uVar10;
          _memset(auStack_200,0,0x40);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_retain_02578638)();
          local_340 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,
                     0x10);
          if (local_340 != (undefined *)0x0) {
            lVar9 = *local_1f0;
            local_348 = (undefined *)0x0;
            do {
              do {
                if (*local_1f0 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_1f0 - lVar9,puVar5);
                }
                uVar10 = *(ulong *)(local_1f8 + (long)local_348 * 8);
                puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_1c0 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar7);
                if (((uVar10 & 1) != 0) &&
                   (uVar10 = local_1c0,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0),
                   uVar10 != 0)) {
                  puVar7 = local_1a0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1a0,PTR_s_objectForKey__0269e048,local_1c0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_208 = puVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar8)
                  ;
                  if (((ulong)puVar7 & 1) == 0) {
                    local_160 = 4;
                  }
                  else {
                    uVar10 = local_1b8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1b8,PTR_s_containsString__0269d0b0,local_1c0);
                    if ((uVar10 & 1) != 0) {
                      uVar4 = local_1b8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1b8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,local_1c0
                                 ,local_208);
                      _objc_retainAutoreleasedReturnValue();
                      uVar10 = local_1b8;
                      local_1b8 = uVar4;
                      (*(code *)PTR__objc_release_02578630)(uVar10);
                    }
                    local_160 = 0;
                  }
                  _objc_storeStrong(&local_208,0);
                }
                local_348 = local_348 + 1;
              } while (local_348 < local_340);
              local_340 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                         auStack_a8,0x10);
              local_348 = (undefined *)0x0;
            } while (local_340 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar5);
          uVar10 = local_170;
          (*(code *)PTR__objc_retain_02578638)();
          local_218[0] = uVar10;
          _memset(auStack_260,0,0x40);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_retain_02578638)();
          local_3d8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128,
                     0x10);
          if (local_3d8 != (undefined *)0x0) {
            lVar9 = *local_250;
            local_3e0 = (undefined *)0x0;
            do {
              do {
                if (*local_250 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_250 - lVar9,puVar5);
                }
                uVar10 = *(ulong *)(local_258 + (long)local_3e0 * 8);
                puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_220 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar7);
                if (((uVar10 & 1) != 0) &&
                   (uVar10 = local_220,
                   (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_length_0269cca0),
                   uVar10 != 0)) {
                  puVar7 = local_1a0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1a0,PTR_s_objectForKey__0269e048,local_220);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_268 = puVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar8)
                  ;
                  if (((ulong)puVar7 & 1) == 0) {
                    local_160 = 7;
                  }
                  else {
                    uVar10 = local_218[0];
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_218[0],PTR_s_containsString__0269d0b0,local_220);
                    if ((uVar10 & 1) != 0) {
                      uVar4 = local_218[0];
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_218[0],PTR_s_stringByReplacingOccurrencesOfSt_0269d188,
                                 local_220,local_268);
                      _objc_retainAutoreleasedReturnValue();
                      uVar10 = local_218[0];
                      local_218[0] = uVar4;
                      (*(code *)PTR__objc_release_02578630)(uVar10);
                    }
                    local_160 = 0;
                  }
                  _objc_storeStrong(&local_268,0);
                }
                local_3e0 = local_3e0 + 1;
              } while (local_3e0 < local_3d8);
              local_3d8 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,
                         auStack_128,0x10);
              local_3e0 = (undefined *)0x0;
            } while (local_3d8 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_178;
          FUN_007d9888(local_178,local_1b8,local_218[0]);
          bVar1 = ((ulong)puVar5 & 1) == 0;
          if (bVar1) {
            (*DAT_028ccdc0)(local_130,local_138,local_1b8,local_218[0],local_178);
            FUN_007d9c4c(local_178,local_1b8,local_218[0]);
          }
          local_160 = (uint)!bVar1;
          _objc_storeStrong(local_218);
          _objc_storeStrong(&local_1b8,0);
        }
        _objc_storeStrong(&local_1a0,0);
      }
      else {
        local_160 = 1;
      }
    }
    else {
      local_160 = 1;
    }
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

