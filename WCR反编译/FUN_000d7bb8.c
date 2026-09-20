// FUN_000d7bb8 @ 000d7bb8

void FUN_000d7bb8(double param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_168;
  undefined *local_160;
  ulong local_128;
  byte local_119;
  ulong local_118;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar3;
  _memset(auStack_100,0,0x40);
  puVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_windows_0269dde0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_160 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_160 != (undefined *)0x0) {
    lVar7 = *local_f0;
    local_168 = (undefined *)0x0;
    do {
      do {
        if (*local_f0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar7,puVar4);
        }
        uVar8 = *(ulong *)(local_f8 + (long)local_168 * 8);
        local_119 = 0;
        puVar3 = PTR__OBJC_CLASS___UIWindow_026cdf68;
        local_c0 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        bVar2 = true;
        if ((uVar8 & 1) != 0) {
          uVar8 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isHidden_026ca768);
          bVar2 = true;
          if ((uVar8 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_alpha_026ca4d8);
            bVar2 = true;
            if (DAT_02323cd0 <= param_1) {
              uVar8 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_rootViewController_026ca820);
              _objc_retainAutoreleasedReturnValue();
              local_119 = 1;
              bVar2 = uVar8 == 0;
              local_118 = uVar8;
            }
          }
        }
        if ((local_119 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_118);
        }
        if (!bVar2) {
          uVar8 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_rootViewController_026ca820);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar8;
          FUN_000f464c();
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar8);
          uVar8 = local_128;
          pcVar6 = &cf_BaseMsgContentViewController;
          _NSClassFromString();
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,pcVar6);
          uVar5 = local_128;
          bVar2 = (uVar8 & 1) != 0;
          if (bVar2) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar5;
          }
          _objc_storeStrong(&local_128,0);
          bVar1 = true;
          if (bVar2) goto LAB_000d8080;
        }
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10)
      ;
      local_168 = (undefined *)0x0;
    } while (local_160 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_000d8080:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (!bVar1) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

