// getRootViewController @ 0090af68

/* WARNING: Removing unreachable block (ram,0x0090b59c) */
/* WARNING: Removing unreachable block (ram,0x0090b638) */
/* WARNING: Removing unreachable block (ram,0x0090b65c) */
/* WARNING: Removing unreachable block (ram,0x0090b680) */
/* WARNING: Removing unreachable block (ram,0x0090b690) */
/* WARNING: Removing unreachable block (ram,0x0090b6bc) */
/* WARNING: Removing unreachable block (ram,0x0090b6dc) */
/* WARNING: Removing unreachable block (ram,0x0090b6e0) */
/* WARNING: Removing unreachable block (ram,0x0090b6e4) */
/* WARNING: Removing unreachable block (ram,0x0090b70c) */
/* WARNING: Removing unreachable block (ram,0x0090b710) */
/* WARNING: Removing unreachable block (ram,0x0090b714) */
/* WARNING: Removing unreachable block (ram,0x0090b728) */
/* WARNING: Removing unreachable block (ram,0x0090b76c) */
/* WARNING: Removing unreachable block (ram,0x0090b77c) */
/* WARNING: Removing unreachable block (ram,0x0090b780) */
/* WARNING: Removing unreachable block (ram,0x0090b7a0) */
/* WARNING: Removing unreachable block (ram,0x0090b7dc) */
/* WARNING: Removing unreachable block (ram,0x0090b7e0) */
/* WARNING: Removing unreachable block (ram,0x0090b7e8) */
/* WARNING: Removing unreachable block (ram,0x0090b808) */
/* WARNING: Removing unreachable block (ram,0x0090b800) */
/* WARNING: Removing unreachable block (ram,0x0090b80c) */
/* WARNING: Removing unreachable block (ram,0x0090b814) */
/* WARNING: Removing unreachable block (ram,0x0090b8b4) */
/* WARNING: Removing unreachable block (ram,0x0090b8d8) */
/* WARNING: Removing unreachable block (ram,0x0090b8fc) */
/* WARNING: Removing unreachable block (ram,0x0090b90c) */
/* WARNING: Removing unreachable block (ram,0x0090b938) */
/* WARNING: Removing unreachable block (ram,0x0090b94c) */
/* WARNING: Removing unreachable block (ram,0x0090b990) */
/* WARNING: Removing unreachable block (ram,0x0090b9a0) */
/* WARNING: Removing unreachable block (ram,0x0090b9a4) */
/* WARNING: Removing unreachable block (ram,0x0090b9c4) */
/* WARNING: Removing unreachable block (ram,0x0090ba00) */
/* WARNING: Removing unreachable block (ram,0x0090ba04) */
/* WARNING: Removing unreachable block (ram,0x0090ba0c) */
/* WARNING: Removing unreachable block (ram,0x0090ba2c) */
/* WARNING: Removing unreachable block (ram,0x0090ba24) */
/* WARNING: Removing unreachable block (ram,0x0090ba30) */
/* WARNING: Removing unreachable block (ram,0x0090ba34) */
/* Function Stack Size: 0x10 bytes */

ID LogFloatingBall::getRootViewController(ID param_1,SEL param_2)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  ulong local_4e8;
  ulong local_4e0;
  ulong local_4a8;
  ulong local_4a0;
  undefined *local_468;
  undefined *local_460;
  undefined1 auStack_3a0 [8];
  long local_398;
  long *local_390;
  ID local_360;
  undefined4 local_354;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  ID local_310;
  undefined1 auStack_308 [8];
  long local_300;
  long *local_2f8;
  ulong local_2c8;
  ID local_2c0;
  SEL local_2b8;
  ID local_2b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar1 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2c0 = 0;
  dVar10 = DAT_02323d38;
  local_2b8 = param_2;
  local_2b0 = param_1;
  _memset(auStack_308,0,0x40);
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_460 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_a8,0x10);
  if (local_460 != (undefined *)0x0) {
    lVar6 = *local_2f8;
    local_468 = (undefined *)0x0;
    do {
      do {
        if (*local_2f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_2f8 - lVar6,puVar3);
        }
        uVar7 = *(ulong *)(local_300 + (long)local_468 * 8);
        local_2c8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_activationState_026ca490);
        if (uVar7 == 0) {
          _memset(auStack_350,0,0x40);
          uVar7 = local_2c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_4a0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_4a0 != 0) {
            lVar8 = *local_340;
            local_4a8 = 0;
            do {
              do {
                if (*local_340 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_340 - lVar8,uVar7);
                }
                uVar9 = *(ID *)(local_348 + local_4a8 * 8);
                local_310 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isHidden_026ca768);
                if (((((uVar9 & 1) == 0) &&
                     ((*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_alpha_026ca4d8),
                     dVar1 < dVar10)) &&
                    ((*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_windowLevel_026a0f70),
                    dVar10 == *(double *)PTR__UIWindowLevelNormal_02578238)) &&
                   (local_310 != local_2b0)) {
                  IVar4 = local_310;
                  (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_rootViewController_026ca820)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  IVar5 = local_2c0;
                  local_2c0 = IVar4;
                  (*(code *)PTR__objc_release_02578630)(IVar5);
                  if (local_2c0 != 0) {
                    local_354 = 4;
                    goto LAB_0090b2e0;
                  }
                }
                local_4a8 = local_4a8 + 1;
              } while (local_4a8 < local_4a0);
              local_4a0 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,
                         auStack_128,0x10);
              local_4a8 = 0;
            } while (local_4a0 != 0);
          }
          local_354 = 0;
LAB_0090b2e0:
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if (local_2c0 == 0) {
            _memset(auStack_3a0,0,0x40);
            uVar7 = local_2c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_4e0 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_4e0 != 0) {
              lVar8 = *local_390;
              local_4e8 = 0;
              do {
                do {
                  if (*local_390 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_390 - lVar8,uVar7);
                  }
                  uVar9 = *(ID *)(local_398 + local_4e8 * 8);
                  local_360 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKeyWindow_0269cd70);
                  if (((uVar9 & 1) != 0) && (local_360 != local_2b0)) {
                    IVar4 = local_360;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_360,PTR_s_rootViewController_026ca820);
                    _objc_retainAutoreleasedReturnValue();
                    IVar5 = local_2c0;
                    local_2c0 = IVar4;
                    (*(code *)PTR__objc_release_02578630)(IVar5);
                    if (local_2c0 != 0) {
                      local_354 = 6;
                      goto LAB_0090b4c8;
                    }
                  }
                  local_4e8 = local_4e8 + 1;
                } while (local_4e8 < local_4e0);
                local_4e0 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a0,
                           auStack_1a8,0x10);
                local_4e8 = 0;
              } while (local_4e0 != 0);
            }
            local_354 = 0;
LAB_0090b4c8:
            (*(code *)PTR__objc_release_02578630)(uVar7);
          }
          if (local_2c0 != 0) {
            local_354 = 2;
            goto LAB_0090b574;
          }
        }
        local_468 = local_468 + 1;
      } while (local_468 < local_460);
      local_460 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_a8,0x10)
      ;
      local_468 = (undefined *)0x0;
    } while (local_460 != (undefined *)0x0);
  }
  local_354 = 0;
LAB_0090b574:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  while( true ) {
    IVar4 = local_2c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    IVar5 = local_2c0;
    if (IVar4 == 0) break;
    IVar4 = local_2c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_2c0;
    local_2c0 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_354 = 1;
  _objc_storeStrong(&local_2c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return IVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

