// FUN_00697b68 @ 00697b68

void FUN_00697b68(void)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_498;
  undefined *local_490;
  undefined *local_448;
  undefined *local_440;
  ulong local_3f8;
  ulong local_3f0;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined1 auStack_370 [8];
  long local_368;
  long *local_360;
  ulong local_330;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  long local_2e8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  long local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  ulong local_258;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  char *local_238;
  ulong local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = "MoreViewController";
  _objc_getClass();
  local_238 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_230 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_248 = (undefined *)0x0;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_240 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_250 = puVar4;
    _memset(auStack_298,0,0x40);
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_3a8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_a8,0x10);
    if (local_3a8 != (undefined *)0x0) {
      lVar7 = *local_288;
      local_3b0 = (undefined *)0x0;
      do {
        do {
          if (*local_288 - lVar7 != 0) {
            _objc_enumerationMutation(*local_288 - lVar7,puVar4);
          }
          uVar8 = *(ulong *)(local_290 + (long)local_3b0 * 8);
          puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          local_258 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar8 & 1) != 0) {
            _memset(auStack_2e0,0,0x40);
            uVar8 = local_258;
            (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_3f0 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_3f0 != 0) {
              lVar9 = *local_2d0;
              local_3f8 = 0;
              do {
                do {
                  if (*local_2d0 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_2d0 - lVar9,uVar8);
                  }
                  local_2a0 = *(long *)(local_2d8 + local_3f8 * 8);
                  if (local_2a0 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_250,PTR_s_addObject__0269d180,local_2a0);
                  }
                  local_3f8 = local_3f8 + 1;
                } while (local_3f8 < local_3f0);
                local_3f0 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,
                           auStack_128,0x10);
                local_3f8 = 0;
              } while (local_3f0 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar8);
          }
          local_3b0 = local_3b0 + 1;
        } while (local_3b0 < local_3a8);
        local_3a8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_a8,
                   0x10);
        local_3b0 = (undefined *)0x0;
      } while (local_3a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_248,local_250);
    _objc_storeStrong(&local_250,0);
    puVar3 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_248;
      local_248 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _memset(auStack_328,0,0x40);
    puVar3 = local_248;
    (*(code *)PTR__objc_retain_02578638)();
    local_440 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_1a8,0x10);
    if (local_440 != (undefined *)0x0) {
      lVar7 = *local_318;
      local_448 = (undefined *)0x0;
      do {
        do {
          if (*local_318 - lVar7 != 0) {
            _objc_enumerationMutation(*local_318 - lVar7,puVar3);
          }
          lVar9 = *(long *)(local_320 + (long)local_448 * 8);
          local_2e8 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_rootViewController_026ca820);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar9 != 0) {
            lVar9 = local_2e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_rootViewController_026ca820);
            _objc_retainAutoreleasedReturnValue();
            FUN_006996b0();
            (*(code *)PTR__objc_release_02578630)(lVar9);
          }
          local_448 = local_448 + 1;
        } while (local_448 < local_440);
        local_440 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_1a8,
                   0x10);
        local_448 = (undefined *)0x0;
      } while (local_440 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _memset(auStack_370,0,0x40);
    puVar3 = local_240;
    (*(code *)PTR__objc_retain_02578638)();
    local_490 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,auStack_228,0x10);
    if (local_490 != (undefined *)0x0) {
      lVar7 = *local_360;
      local_498 = (undefined *)0x0;
      do {
        do {
          if (*local_360 - lVar7 != 0) {
            _objc_enumerationMutation(*local_360 - lVar7,puVar3);
          }
          uVar8 = *(ulong *)(local_368 + (long)local_498 * 8);
          local_330 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,local_238);
          if (((uVar8 & 1) != 0) &&
             (uVar6 = local_330,
             (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_isViewLoaded_0269cde0),
             uVar8 = local_330, (uVar6 & 1) != 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_230 = uVar8;
            bVar1 = true;
            goto LAB_00698388;
          }
          local_498 = local_498 + 1;
        } while (local_498 < local_490);
        local_490 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,auStack_228,
                   0x10);
        local_498 = (undefined *)0x0;
      } while (local_490 != (undefined *)0x0);
    }
    bVar1 = false;
LAB_00698388:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (!bVar1) {
      local_230 = 0;
    }
    _objc_storeStrong(&local_248);
    _objc_storeStrong(&local_240,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_230);
  return;
}

