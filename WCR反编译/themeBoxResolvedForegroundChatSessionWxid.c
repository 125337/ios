// themeBoxResolvedForegroundChatSessionWxid @ 00fa56c0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineHelper::themeBoxResolvedForegroundChatSessionWxid
          (WCRefineHelper *this,ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double in_d0;
  undefined *local_388;
  undefined *local_380;
  ulong local_330;
  ulong local_328;
  undefined *local_2e8;
  undefined *local_2e0;
  cfstringStruct *local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  ulong local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  undefined8 local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  undefined *local_1c8;
  SEL local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1c0 = param_2;
  local_1b8 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = puVar3;
  _memset(auStack_210,0,0x40);
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_2e0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10);
  if (local_2e0 != (undefined *)0x0) {
    lVar8 = *local_200;
    local_2e8 = (undefined *)0x0;
    do {
      do {
        if (*local_200 - lVar8 != 0) {
          _objc_enumerationMutation(*local_200 - lVar8,puVar4);
        }
        uVar10 = *(ulong *)(local_208 + (long)local_2e8 * 8);
        puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_1d0 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar10 & 1) != 0) {
          _memset(auStack_258,0,0x40);
          uVar10 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_328 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_328 != 0) {
            lVar9 = *local_248;
            local_330 = 0;
            do {
              do {
                if (*local_248 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_248 - lVar9,uVar10);
                }
                local_218 = *(undefined8 *)(local_250 + local_330 * 8);
                (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,local_218)
                ;
                local_330 = local_330 + 1;
              } while (local_330 < local_328);
              local_328 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar10,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,
                         auStack_128,0x10);
              local_330 = 0;
            } while (local_328 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar10);
        }
        local_2e8 = local_2e8 + 1;
      } while (local_2e8 < local_2e0);
      local_2e0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10)
      ;
      local_2e8 = (undefined *)0x0;
    } while (local_2e0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_count_0269cfe0);
  puVar3 = local_1c8;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  _memset(auStack_2a0,0,0x40);
  puVar3 = local_1c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_380 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_1a8,0x10);
  if (local_380 != (undefined *)0x0) {
    lVar8 = *local_290;
    local_388 = (undefined *)0x0;
    do {
      do {
        if (*local_290 - lVar8 != 0) {
          _objc_enumerationMutation(*local_290 - lVar8,puVar3);
        }
        uVar10 = *(ulong *)(local_298 + (long)local_388 * 8);
        local_260 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isHidden_026ca768);
        if (((uVar10 & 1) == 0) &&
           ((*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_alpha_026ca4d8),
           pcVar6 = local_1b8, DAT_02323d38 <= in_d0)) {
          uVar10 = local_260;
          (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_rootViewController_026ca820);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_themeBoxChatSessionWxidFromViewC_026ace58);
          _objc_retainAutoreleasedReturnValue();
          local_2a8 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(uVar10);
          pcVar7 = local_2a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_length_0269cca0);
          pcVar6 = local_2a8;
          bVar2 = pcVar7 != (cfstringStruct *)0x0;
          if (bVar2) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1b0 = pcVar6;
          }
          _objc_storeStrong(bVar2,&local_2a8,0);
          bVar1 = true;
          if (bVar2) goto LAB_00fa5d68;
        }
        local_388 = local_388 + 1;
      } while (local_388 < local_380);
      local_380 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_1a8,0x10
                );
      local_388 = (undefined *)0x0;
    } while (local_380 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_00fa5d68:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = &::cf___;
  }
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

