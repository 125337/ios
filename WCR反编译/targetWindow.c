// targetWindow @ 011259b8

/* WARNING: Removing unreachable block (ram,0x011260c4) */
/* WARNING: Removing unreachable block (ram,0x01126128) */
/* WARNING: Removing unreachable block (ram,0x01126148) */
/* WARNING: Removing unreachable block (ram,0x01126168) */
/* WARNING: Removing unreachable block (ram,0x0112616c) */
/* WARNING: Removing unreachable block (ram,0x01126170) */
/* WARNING: Removing unreachable block (ram,0x01126184) */
/* Function Stack Size: 0x10 bytes */

ID WCRefineProgressToast::targetWindow(ID param_1,SEL param_2)

{
  double dVar1;
  bool bVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  char *local_310;
  char *local_300;
  ulong local_2c0;
  ulong local_2b8;
  undefined *local_278;
  undefined *local_270;
  char *local_228 [2];
  byte local_211;
  ulong local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  char *local_178;
  char *local_170;
  int local_164;
  char *local_160;
  char *local_158;
  cfstringStruct *local_150;
  char *local_148;
  SEL local_140;
  ID local_138;
  char *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar1 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar3 = "CAppViewControllerManager";
  dVar12 = DAT_02323d38;
  local_140 = param_2;
  local_138 = param_1;
  _objc_getClass();
  pcVar4 = &cf_getCurrentNavigationController;
  local_148 = pcVar3;
  _NSSelectorFromString();
  local_150 = pcVar4;
  if ((local_148 != (char *)0x0) &&
     (pcVar3 = local_148,
     (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_respondsToSelector__026ca818,pcVar4),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar3 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,local_150);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_158 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)pcVar3 & 1) == 0) {
LAB_01125b9c:
      local_164 = 0;
    }
    else {
      pcVar3 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_160 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (((local_160 == (char *)0x0) ||
          (pcVar3 = local_160,
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isHidden_026ca768),
          ((ulong)pcVar3 & 1) != 0)) ||
         ((*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_alpha_026ca4d8), pcVar3 = local_160,
         dVar12 <= dVar1)) {
        local_164 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = pcVar3;
        local_164 = 1;
      }
      _objc_storeStrong(&local_160,0);
      if (local_164 == 0) goto LAB_01125b9c;
    }
    _objc_storeStrong(&local_158,0);
    if (local_164 != 0) goto LAB_01126290;
  }
  local_170 = (char *)0x0;
  local_178 = (char *)0x0;
  _memset(auStack_1c0,0,0x40);
  puVar5 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  local_270 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10);
  if (local_270 != (undefined *)0x0) {
    lVar8 = *local_1b0;
    local_278 = (undefined *)0x0;
    do {
      do {
        if (*local_1b0 - lVar8 != 0) {
          _objc_enumerationMutation(*local_1b0 - lVar8,puVar7);
        }
        uVar9 = *(ulong *)(local_1b8 + (long)local_278 * 8);
        puVar5 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_180 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((uVar9 & 1) != 0) &&
           (uVar9 = local_180,
           (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_activationState_026ca490),
           uVar9 == 0)) {
          _memset(auStack_208,0,0x40);
          uVar9 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_2b8 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_2b8 != 0) {
            lVar10 = *local_1f8;
            local_2c0 = 0;
            do {
              do {
                if (*local_1f8 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_1f8 - lVar10,uVar9);
                }
                uVar11 = *(ulong *)(local_200 + local_2c0 * 8);
                local_1c8 = uVar11;
                (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isHidden_026ca768);
                local_211 = 0;
                bVar2 = true;
                if ((uVar11 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_alpha_026ca4d8);
                  bVar2 = true;
                  if (dVar1 < dVar12) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_windowLevel_026a0f70);
                    bVar2 = true;
                    if (dVar12 == *(double *)PTR__UIWindowLevelNormal_02578238) {
                      uVar11 = local_1c8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1c8,PTR_s_rootViewController_026ca820);
                      _objc_retainAutoreleasedReturnValue();
                      local_211 = 1;
                      bVar2 = uVar11 == 0;
                      local_210 = uVar11;
                    }
                  }
                }
                if ((local_211 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_210);
                }
                if (!bVar2) {
                  uVar11 = local_1c8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_isKeyWindow_0269cd70);
                  if ((uVar11 & 1) != 0) {
                    _objc_storeStrong(&local_170,local_1c8);
                    local_164 = 4;
                    goto LAB_01125fec;
                  }
                  if (local_178 == (char *)0x0) {
                    _objc_storeStrong(&local_178,local_1c8);
                  }
                }
                local_2c0 = local_2c0 + 1;
              } while (local_2c0 < local_2b8);
              local_2b8 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                         auStack_128,0x10);
              local_2c0 = 0;
            } while (local_2b8 != 0);
          }
          local_164 = 0;
LAB_01125fec:
          (*(code *)PTR__objc_release_02578630)(uVar9);
          if ((local_170 != (char *)0x0) || (local_178 != (char *)0x0)) {
            local_164 = 2;
            goto LAB_0112609c;
          }
        }
        local_278 = local_278 + 1;
      } while (local_278 < local_270);
      local_270 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10)
      ;
      local_278 = (undefined *)0x0;
    } while (local_270 != (undefined *)0x0);
  }
  local_164 = 0;
LAB_0112609c:
  (*(code *)PTR__objc_release_02578630)(puVar7);
  pcVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_228[0] = pcVar6;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (local_170 == (char *)0x0) {
    if (local_178 == (char *)0x0) {
      local_310 = local_228[0];
    }
    else {
      local_310 = local_178;
    }
    local_300 = local_310;
  }
  else {
    local_300 = local_170;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_300;
  local_164 = 1;
  _objc_storeStrong(local_228);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_170,0);
LAB_01126290:
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

