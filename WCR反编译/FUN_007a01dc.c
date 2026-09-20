// FUN_007a01dc @ 007a01dc

void FUN_007a01dc(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_540;
  undefined *local_538;
  undefined *local_4c0;
  undefined *local_4b8;
  undefined *local_450;
  undefined *local_448;
  undefined *local_3d0;
  undefined *local_3c8;
  undefined1 auStack_398 [8];
  long local_390;
  long *local_388;
  ulong local_358;
  byte local_349;
  undefined *local_348;
  undefined1 auStack_340 [8];
  long local_338;
  long *local_330;
  undefined *local_300;
  undefined1 auStack_2f8 [8];
  long local_2f0;
  long *local_2e8;
  undefined *local_2b8;
  byte local_2a9;
  undefined *local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  undefined *local_260;
  cfstringStruct *local_248;
  int local_23c;
  undefined *local_238;
  undefined *local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_238 = (undefined *)0x0;
  _objc_storeStrong(&local_238,param_1);
  if (local_238 == (undefined *)0x0) {
    local_230 = (undefined *)0x0;
    local_23c = 1;
  }
  else {
    pcVar2 = &cf_UITableViewWrapperView;
    _NSClassFromString();
    local_248 = pcVar2;
    _memset(auStack_2a0,0,0x40);
    puVar3 = local_238;
    (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_3c8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_3c8 != (undefined *)0x0) {
      lVar4 = *local_290;
      local_3d0 = (undefined *)0x0;
      do {
        do {
          if (*local_290 - lVar4 != 0) {
            _objc_enumerationMutation(*local_290 - lVar4,puVar3);
          }
          puVar5 = *(undefined **)(local_298 + (long)local_3d0 * 8);
          local_2a9 = 0;
          local_260 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_tag_026cab98);
          bVar1 = true;
          if (puVar5 != &DAT_0024cbe8) {
            puVar6 = local_260;
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_tag_026cab98);
            puVar5 = local_260;
            bVar1 = true;
            if (puVar6 != &UNK_0000271a) {
              puVar6 = local_238;
              (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_backgroundView_026a0320);
              _objc_retainAutoreleasedReturnValue();
              local_2a9 = 1;
              bVar1 = puVar5 == puVar6;
              local_2a8 = puVar6;
            }
          }
          if ((local_2a9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_2a8);
          }
          if (((!bVar1) && (local_248 != (cfstringStruct *)0x0)) &&
             (puVar6 = local_260,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_260,PTR_s_isKindOfClass__0269cd68,local_248), puVar5 = local_260,
             ((ulong)puVar6 & 1) != 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_230 = puVar5;
            local_23c = 1;
            goto LAB_007a0554;
          }
          local_3d0 = local_3d0 + 1;
        } while (local_3d0 < local_3c8);
        local_3c8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_a8,
                   0x10);
        local_3d0 = (undefined *)0x0;
      } while (local_3c8 != (undefined *)0x0);
    }
    local_23c = 0;
LAB_007a0554:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_23c == 0) {
      _memset(auStack_2f8,0,0x40);
      puVar3 = local_238;
      (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_448 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_448 != (undefined *)0x0) {
        lVar4 = *local_2e8;
        local_450 = (undefined *)0x0;
        do {
          do {
            if (*local_2e8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_2e8 - lVar4,puVar3);
            }
            puVar6 = *(undefined **)(local_2f0 + (long)local_450 * 8);
            local_2b8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_tag_026cab98);
            puVar5 = local_2b8;
            if (puVar6 != &DAT_0024cbe8) {
              puVar6 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
              puVar6 = local_2b8;
              if (((ulong)puVar5 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_230 = puVar6;
                local_23c = 1;
                goto LAB_007a07a4;
              }
            }
            local_450 = local_450 + 1;
          } while (local_450 < local_448);
          local_448 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_128,
                     0x10);
          local_450 = (undefined *)0x0;
        } while (local_448 != (undefined *)0x0);
      }
      local_23c = 0;
LAB_007a07a4:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_23c == 0) {
        _memset(auStack_340,0,0x40);
        puVar3 = local_238;
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_4b8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_4b8 != (undefined *)0x0) {
          lVar4 = *local_330;
          local_4c0 = (undefined *)0x0;
          do {
            do {
              if (*local_330 - lVar4 != 0) {
                _objc_enumerationMutation(*local_330 - lVar4,puVar3);
              }
              puVar5 = *(undefined **)(local_338 + (long)local_4c0 * 8);
              local_349 = 0;
              local_300 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_tag_026cab98);
              bVar1 = true;
              if (puVar5 != &DAT_0024cbe8) {
                puVar6 = local_300;
                (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_tag_026cab98);
                puVar5 = local_300;
                bVar1 = true;
                if (puVar6 != &UNK_0000271a) {
                  puVar6 = local_238;
                  (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_backgroundView_026a0320);
                  _objc_retainAutoreleasedReturnValue();
                  local_349 = 1;
                  bVar1 = puVar5 == puVar6;
                  local_348 = puVar6;
                }
              }
              if ((local_349 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_348);
              }
              if ((!bVar1) &&
                 ((puVar5 = local_300,
                  (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_tag_026cab98),
                  (long)puVar5 < 0x24f6e1 ||
                  (puVar5 = local_300,
                  (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_tag_026cab98),
                  0x251df0 < (long)puVar5)))) {
                _memset(auStack_398,0,0x40);
                puVar5 = local_300;
                (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                local_538 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                if (local_538 != (undefined *)0x0) {
                  lVar7 = *local_388;
                  local_540 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_388 - lVar7 != 0) {
                        _objc_enumerationMutation(*local_388 - lVar7,puVar5);
                      }
                      uVar8 = *(ulong *)(local_390 + (long)local_540 * 8);
                      puVar6 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
                      local_358 = uVar8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar8,PTR_s_isKindOfClass__0269cd68,puVar6);
                      puVar6 = local_300;
                      if ((uVar8 & 1) != 0) {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_230 = puVar6;
                        local_23c = 1;
                        goto LAB_007a0c38;
                      }
                      local_540 = local_540 + 1;
                    } while (local_540 < local_538);
                    local_538 = puVar5;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,
                               auStack_228,0x10);
                    local_540 = (undefined *)0x0;
                  } while (local_538 != (undefined *)0x0);
                }
                local_23c = 0;
LAB_007a0c38:
                (*(code *)PTR__objc_release_02578630)(puVar5);
                if (local_23c != 0) goto LAB_007a0ccc;
              }
              local_4c0 = local_4c0 + 1;
            } while (local_4c0 < local_4b8);
            local_4b8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_340,
                       auStack_1a8,0x10);
            local_4c0 = (undefined *)0x0;
          } while (local_4b8 != (undefined *)0x0);
        }
        local_23c = 0;
LAB_007a0ccc:
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (local_23c == 0) {
          local_230 = (undefined *)0x0;
          local_23c = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_238,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_230);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

