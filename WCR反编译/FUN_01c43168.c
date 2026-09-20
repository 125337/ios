// FUN_01c43168 @ 01c43168

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01c43168(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *local_3c0;
  undefined *local_390;
  undefined *local_388;
  ulong local_338;
  ulong local_330;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined *local_2b0;
  undefined *local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  undefined *local_258;
  int local_24c;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  undefined *local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = (undefined *)0x0;
  _memset(auStack_200,0,0x40);
  puVar6 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_2e8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,0x10);
  if (local_2e8 != (undefined *)0x0) {
    lVar4 = *local_1f0;
    local_2f0 = (undefined *)0x0;
    do {
      do {
        if (*local_1f0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_1f0 - lVar4,puVar2);
        }
        uVar7 = *(ulong *)(local_1f8 + (long)local_2f0 * 8);
        puVar6 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_1c0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar6);
        if ((uVar7 & 1) != 0) {
          _memset(auStack_248,0,0x40);
          uVar7 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_330 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_330 != 0) {
            lVar5 = *local_238;
            local_338 = 0;
            do {
              do {
                if (*local_238 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_238 - lVar5,uVar7);
                }
                puVar6 = *(undefined **)(local_240 + local_338 * 8);
                local_208 = puVar6;
                FUN_01c472cc();
                if (((ulong)puVar6 & 1) == 0) {
                  puVar3 = local_208;
                  (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_isKeyWindow_0269cd70);
                  puVar6 = local_208;
                  if (((ulong)puVar3 & 1) != 0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_1b0 = puVar6;
                    local_24c = 1;
                    goto LAB_01c434c0;
                  }
                  if (local_1b8 == (undefined *)0x0) {
                    _objc_storeStrong(&local_1b8,local_208);
                  }
                }
                local_338 = local_338 + 1;
              } while (local_338 < local_330);
              local_330 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,
                         auStack_128,0x10);
              local_338 = 0;
            } while (local_330 != 0);
          }
          local_24c = 0;
LAB_01c434c0:
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if (local_24c != 0) goto LAB_01c43548;
        }
        local_2f0 = local_2f0 + 1;
      } while (local_2f0 < local_2e8);
      local_2e8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,0x10)
      ;
      local_2f0 = (undefined *)0x0;
    } while (local_2e8 != (undefined *)0x0);
  }
  local_24c = 0;
LAB_01c43548:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar6 = local_1b8;
  if (local_24c == 0) {
    if (local_1b8 == (undefined *)0x0) {
      _memset(auStack_298,0,0x40);
      puVar6 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_388 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_1a8,0x10
                );
      if (local_388 != (undefined *)0x0) {
        lVar4 = *local_288;
        local_390 = (undefined *)0x0;
        do {
          do {
            if (*local_288 - lVar4 != 0) {
              _objc_enumerationMutation(*local_288 - lVar4,puVar2);
            }
            puVar6 = *(undefined **)(local_290 + (long)local_390 * 8);
            local_258 = puVar6;
            FUN_01c472cc();
            if (((ulong)puVar6 & 1) == 0) {
              puVar3 = local_258;
              (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_isKeyWindow_0269cd70);
              puVar6 = local_258;
              if (((ulong)puVar3 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_1b0 = puVar6;
                local_24c = 1;
                goto LAB_01c43798;
              }
              if (local_1b8 == (undefined *)0x0) {
                _objc_storeStrong(&local_1b8,local_258);
              }
            }
            local_390 = local_390 + 1;
          } while (local_390 < local_388);
          local_388 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_1a8,
                     0x10);
          local_390 = (undefined *)0x0;
        } while (local_388 != (undefined *)0x0);
      }
      local_24c = 0;
LAB_01c43798:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_24c == 0) {
        local_3c0 = local_1b8;
        bVar1 = local_1b8 == (undefined *)0x0;
        if (bVar1) {
          local_2a0 = PTR__OBJC_CLASS___UIApplication_026ce010;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
          _objc_retainAutoreleasedReturnValue();
          local_3c0 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_2b0 = local_3c0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1b0 = local_3c0;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_2b0);
          (*(code *)PTR__objc_release_02578630)(local_2a0);
        }
        local_24c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = puVar6;
      local_24c = 1;
    }
  }
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

