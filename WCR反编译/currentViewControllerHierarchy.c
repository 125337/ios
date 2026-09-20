// currentViewControllerHierarchy @ 0092293c

/* WARNING: Removing unreachable block (ram,0x00922d74) */
/* WARNING: Removing unreachable block (ram,0x00922f40) */
/* Function Stack Size: 0x10 bytes */

ID WCNavigationMonitor::currentViewControllerHierarchy(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong local_2d0;
  ulong local_2c8;
  undefined *local_280;
  undefined *local_278;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  long local_238;
  int local_22c;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined *local_190;
  long local_188;
  SEL local_180;
  ID local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_188 = 0;
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_180 = param_2;
  local_178 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_1d8,0,0x40);
  puVar2 = local_190;
  (*(code *)PTR__objc_retain_02578638)();
  local_278 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10);
  if (local_278 != (undefined *)0x0) {
    lVar7 = *local_1c8;
    local_280 = (undefined *)0x0;
    do {
      do {
        if (*local_1c8 - lVar7 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar7,puVar2);
        }
        uVar8 = *(ulong *)(local_1d0 + (long)local_280 * 8);
        local_198 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_activationState_026ca490);
        uVar4 = local_198;
        if (uVar8 == 0) {
          puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar8 = local_198;
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1e0 = uVar8;
            _memset(auStack_228,0,0x40);
            uVar4 = local_1e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_2c8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_2c8 != 0) {
              lVar9 = *local_218;
              local_2d0 = 0;
              do {
                do {
                  if (*local_218 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_218 - lVar9,uVar4);
                  }
                  uVar8 = *(ulong *)(local_220 + local_2d0 * 8);
                  local_1e8 = uVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKeyWindow_0269cd70);
                  if ((uVar8 & 1) != 0) {
                    _objc_storeStrong(&local_188,local_1e8);
                    local_22c = 4;
                    goto LAB_00922c78;
                  }
                  local_2d0 = local_2d0 + 1;
                } while (local_2d0 < local_2c8);
                local_2c8 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                           auStack_128,0x10);
                local_2d0 = 0;
              } while (local_2c8 != 0);
            }
            local_22c = 0;
LAB_00922c78:
            (*(code *)PTR__objc_release_02578630)(uVar4);
            if (local_188 == 0) {
              local_22c = 0;
            }
            else {
              local_22c = 2;
            }
            _objc_storeStrong(&local_1e0,0);
            if (local_22c != 0) goto LAB_00922d40;
          }
        }
        local_280 = local_280 + 1;
      } while (local_280 < local_278);
      local_278 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10)
      ;
      local_280 = (undefined *)0x0;
    } while (local_278 != (undefined *)0x0);
  }
  local_22c = 0;
LAB_00922d40:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_190,0);
  if (local_188 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_22c = 1;
    local_170 = puVar2;
  }
  else {
    lVar7 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    local_238 = lVar7;
    if (lVar7 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_22c = 1;
      local_170 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
      _objc_alloc_init();
      puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      local_240 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_boldSystemFontOfSize__0269cf28);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_248 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_250 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_250;
      local_250 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_240;
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
      _objc_alloc();
      puVar3 = PTR__NSForegroundColorAttributeName_02578070;
      puVar2 = PTR__NSFontAttributeName_02578068;
      local_148 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
      local_138 = local_248;
      local_140 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
      local_130 = local_250;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_138,&local_148);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_initWithString_attributes__026a02b0,&cf_S_MRVc6RhVB__k_g);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendAttributedString__026a6388);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar1 = local_240;
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
      _objc_alloc();
      local_168 = *(undefined8 *)puVar2;
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      local_160 = *(undefined8 *)puVar3;
      local_150 = local_250;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_158 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_158,&local_168,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_initWithString_attributes__026a02b0,
                 &cf_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_P_);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendAttributedString__026a6388);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_appendViewController_toHierarchy_026aa588,local_238,local_240,
                 &::cf___,1,0);
      puVar2 = local_240;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = puVar2;
      local_22c = 1;
      _objc_storeStrong(&local_250);
      _objc_storeStrong(&local_248,0);
      _objc_storeStrong(&local_240,0);
    }
    _objc_storeStrong(&local_238,0);
  }
  _objc_storeStrong(&local_188,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_170;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

