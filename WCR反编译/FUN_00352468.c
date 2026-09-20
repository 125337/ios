// FUN_00352468 @ 00352468

void FUN_00352468(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1a8;
  ulong local_198;
  ulong local_178;
  ulong local_170;
  ulong local_150;
  undefined *local_148;
  ulong local_140;
  bool local_131;
  undefined *local_130;
  undefined *local_128;
  bool local_119;
  ulong local_118;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  if (*(long *)(param_1 + 0x20) == DAT_028ca010) {
    FUN_0034e734(0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = param_1;
    _memset(auStack_108,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != 0) {
      lVar5 = *local_f8;
      local_178 = 0;
      do {
        do {
          if (*local_f8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar5,uVar2);
          }
          uVar6 = *(ulong *)(local_100 + local_178 * 8);
          local_c8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_respondsToSelector__026ca818,
                     PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
          local_119 = false;
          bVar1 = (uVar6 & 1) == 0;
          if (bVar1) {
            local_198 = 0;
          }
          else {
            local_198 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
            _objc_retainAutoreleasedReturnValue();
            local_118 = local_198;
          }
          local_119 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_110 = local_198;
          if ((local_119 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_118);
          }
          local_131 = false;
          bVar1 = local_110 == 0;
          if (bVar1) {
            local_1a8 = (undefined *)0x0;
          }
          else {
            local_1a8 = PTR_WCRefineHomeTableHeaderHost_026ce570;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_stripSlotInTableView__026a23a0
                       ,local_110);
            _objc_retainAutoreleasedReturnValue();
            local_130 = local_1a8;
          }
          local_131 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = local_1a8;
          if ((local_131 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_130);
          }
          uVar6 = local_c8;
          _objc_getAssociatedObject(local_c8,&DAT_028ca003);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_128;
          local_140 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_viewWithTag__026cabe0);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = local_140;
          local_148 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_viewWithTag__026cabe0,0x7f198);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_148;
          puVar4 = PTR_WCRefineHomeAvatarStripView_026ce538;
          local_150 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHomeAvatarStripView_026ce538,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)puVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_148,PTR_s_reloadContentWithReason_forceReb_026a24e0,
                       &cf_settings_changed,1);
          }
          uVar6 = local_150;
          puVar3 = PTR_WCRefineHomeAvatarStripView_026ce538;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHomeAvatarStripView_026ce538,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar6 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_reloadContentWithReason_forceReb_026a24e0,
                       &cf_settings_changed,1);
          }
          _objc_storeStrong(&local_150);
          _objc_storeStrong(&local_148,0);
          _objc_storeStrong(&local_140,0);
          _objc_storeStrong(&local_128,0);
          _objc_storeStrong(&local_110,0);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    FUN_00352958();
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

