// preconvertSendableInDirectory: @ 0107cbac

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonStore::preconvertSendableInDirectory_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ID IVar9;
  long lVar10;
  ulong local_1f8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_180;
  undefined *local_168;
  byte local_159;
  ID local_158;
  bool local_149;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  byte local_121;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  lVar10 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (lVar10 == 0) {
    local_c4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_180 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_180;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_118,0,0x40);
    puVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_1a8 != (undefined *)0x0) {
      lVar10 = *local_108;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          puVar3 = local_1a8;
          if (*local_108 - lVar10 != 0) {
            puVar3 = puVar2;
            _objc_enumerationMutation(*local_108 - lVar10);
          }
          local_d8 = *(ulong *)(local_110 + (long)local_1b0 * 8);
          _objc_autoreleasePoolPush();
          uVar4 = local_d8;
          FUN_0107d2f4();
          if ((uVar4 & 1) == 0) {
            lVar5 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
            _objc_retainAutoreleasedReturnValue();
            local_121 = 0;
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            local_120 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
            if (((ulong)puVar7 & 1) == 0) {
              local_c4 = 3;
            }
            else if ((local_121 & 1) == 0) {
              uVar4 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_130 = uVar8;
              (*(code *)PTR__objc_release_02578630)(uVar4);
              uVar4 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_isEqualToString__0269ccc8,&cf_gif);
              if (((((uVar4 & 1) == 0) &&
                   (uVar4 = local_130,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_130,PTR_s_isEqualToString__0269ccc8,&cf_png), (uVar4 & 1) == 0))
                  && (uVar4 = local_130,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_130,PTR_s_isEqualToString__0269ccc8,&cf_jpg), (uVar4 & 1) == 0
                     )) && (uVar4 = local_130,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_130,PTR_s_isEqualToString__0269ccc8,&cf_jpeg),
                           (uVar4 & 1) == 0)) {
                uVar4 = local_130;
                FUN_0107b0d4();
                if ((uVar4 & 1) == 0) {
                  local_c4 = 3;
                }
                else {
                  uVar4 = local_d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d8,PTR_s_stringByDeletingPathExtension_0269fd18);
                  _objc_retainAutoreleasedReturnValue();
                  local_138 = uVar4;
                  FUN_0107bd28();
                  local_149 = false;
                  bVar1 = (uVar4 & 1) == 0;
                  if (bVar1) {
                    local_1f8 = 0;
                  }
                  else {
                    local_1f8 = local_138;
                    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_lowercaseString_0269d9c0);
                    _objc_retainAutoreleasedReturnValue();
                    local_148 = local_1f8;
                  }
                  local_149 = !bVar1;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_140 = local_1f8;
                  if ((local_149 & 1U) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_148);
                  }
                  uVar4 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
                  local_159 = 0;
                  bVar1 = false;
                  if (uVar4 != 0) {
                    IVar9 = local_b0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_b0,PTR_s_cachedSendableDataForMd5__026ae230,local_140);
                    _objc_retainAutoreleasedReturnValue();
                    local_159 = 1;
                    local_158 = IVar9;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    bVar1 = IVar9 != 0;
                  }
                  if ((local_159 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_158);
                  }
                  if (bVar1) {
                    local_c4 = 3;
                  }
                  else {
                    puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSData_026ce1d0,
                               PTR_s_dataWithContentsOfFile__0269e0b8,local_120);
                    _objc_retainAutoreleasedReturnValue();
                    local_168 = puVar6;
                    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
                    if (puVar6 == (undefined *)0x0) {
                      local_c4 = 3;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_b0,PTR_s_persistSendableIfNeededForMd5_ra_026ae248,local_140,
                                 local_168);
                      local_c4 = 0;
                    }
                    _objc_storeStrong(&local_168,0);
                  }
                  _objc_storeStrong(&local_140);
                  _objc_storeStrong(&local_138,0);
                }
              }
              else {
                local_c4 = 3;
              }
              _objc_storeStrong(&local_130,0);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_preconvertSendableInDirectory__026ae240,local_120);
              local_c4 = 3;
            }
            _objc_storeStrong(&local_120,0);
          }
          else {
            local_c4 = 3;
          }
          _objc_autoreleasePoolPop(puVar3);
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

