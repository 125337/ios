// FUN_00327370 @ 00327370

void FUN_00327370(long param_1)

{
  byte bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_2d8;
  ulong local_2d0;
  ulong local_288;
  ulong local_280;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  byte local_1b1;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  cfstringStruct *local_168;
  ulong local_150;
  undefined4 local_144;
  ulong local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar2 = param_1 + 0x20;
  local_138 = param_1;
  local_130 = param_1;
  _objc_loadWeakRetained();
  local_140 = uVar2;
  if (uVar2 == 0) {
    local_144 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    FUN_00327b1c();
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_150 == 0) {
      local_144 = 1;
    }
    else {
      pcVar3 = &cf_NewContactsItemCell;
      _NSClassFromString();
      uVar2 = local_140;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_168 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&_kWCContactsTopShortcutRefreshingKey,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar2 = local_150;
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      FUN_00327f30(uVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _memset(auStack_1b0,0,0x40);
      uVar2 = local_150;
      FUN_00328b48();
      _objc_retainAutoreleasedReturnValue();
      local_280 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_280 != 0) {
        lVar6 = *local_1a0;
        local_288 = 0;
        do {
          do {
            if (*local_1a0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar6,uVar2);
            }
            local_170 = *(ulong *)(local_1a8 + local_288 * 8);
            bVar1 = (byte)local_170;
            FUN_00310b74();
            local_1b1 = bVar1;
            if (((local_168 == (cfstringStruct *)0x0) ||
                (uVar7 = local_170,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_170,PTR_s_isKindOfClass__0269cd68,local_168), (uVar7 & 1) != 0)) ||
               ((local_1b1 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setNeedsLayout_0269deb8);
            }
            local_288 = local_288 + 1;
          } while (local_288 < local_280);
          local_280 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                     0x10);
          local_288 = 0;
        } while (local_280 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setNeedsLayout_0269deb8);
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_layoutIfNeeded_026ca790);
      _memset(auStack_200,0,0x40);
      uVar2 = local_150;
      FUN_00328b48();
      _objc_retainAutoreleasedReturnValue();
      local_2d0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2d0 != 0) {
        lVar6 = *local_1f0;
        local_2d8 = 0;
        do {
          do {
            if (*local_1f0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1f0 - lVar6,uVar2);
            }
            uVar7 = *(ulong *)(local_1f8 + local_2d8 * 8);
            local_1c0 = uVar7;
            FUN_00310b74();
            if (((local_168 == (cfstringStruct *)0x0) ||
                (uVar5 = local_1c0,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c0,PTR_s_isKindOfClass__0269cd68,local_168), (uVar5 & 1) != 0)) ||
               ((uVar7 & 1) != 0)) {
              uVar7 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_superview_026cab50);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (uVar7 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_layoutIfNeeded_026ca790);
              }
            }
            local_2d8 = local_2d8 + 1;
          } while (local_2d8 < local_2d0);
          local_2d0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,
                     0x10);
          local_2d8 = 0;
        } while (local_2d0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_setAssociatedObject(local_140,&_kWCContactsTopShortcutRefreshingKey,0,1);
      local_144 = 0;
    }
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

