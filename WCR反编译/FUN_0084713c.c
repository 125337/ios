// FUN_0084713c @ 0084713c

byte FUN_0084713c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 ***pppuVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  ulong uVar9;
  undefined8 ***local_2d0;
  undefined8 ***local_218;
  undefined8 ***local_210;
  undefined8 ***local_198;
  byte local_189;
  undefined8 ***local_188;
  undefined8 ***local_180;
  byte local_171;
  undefined8 ***local_170;
  byte local_161;
  undefined8 ***local_160;
  byte local_151;
  undefined8 ***local_150;
  undefined8 ***local_148;
  undefined8 ***local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  byte local_e9;
  undefined8 ***local_e8;
  undefined4 local_e0;
  char *local_d0;
  undefined8 *local_c8;
  long *local_c0;
  undefined8 ***local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined8 ****)0x0;
  _objc_storeStrong(&local_b8,param_1);
  pcVar3 = "WCTimelineTableView";
  local_c8 = param_3;
  local_c0 = param_2;
  _objc_getClass();
  local_d0 = pcVar3;
  if ((pcVar3 == (char *)0x0) ||
     (ppppuVar4 = (undefined8 ****)local_b8,
     (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isKindOfClass__0269cd68,pcVar3),
     ((ulong)ppppuVar4 & 1) == 0)) {
    if (local_c0 != (long *)0x0) {
      *local_c0 = 0;
    }
    if (local_c8 != (undefined8 *)0x0) {
      _objc_retainAutorelease();
      *local_c8 = &cf_non_moments_table;
    }
    local_a9 = 0;
    local_e0 = 1;
  }
  else {
    ppppuVar4 = (undefined8 ****)local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_backgroundView_026a0320);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    local_e8 = ppppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    local_e9 = false;
    if (((ulong)ppppuVar4 & 1) != 0) {
      ppppuVar4 = (undefined8 ****)local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_tag_026cab98);
      local_e9 = ppppuVar4 == (undefined8 ****)0x24f6e7;
    }
    if ((bool)local_e9 == false) {
      _memset(auStack_138,0,0x40);
      ppppuVar4 = (undefined8 ****)local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_210 = ppppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if ((undefined8 ****)local_210 != (undefined8 ****)0x0) {
        lVar8 = *local_128;
        local_218 = (undefined8 ****)0x0;
        do {
          do {
            if (*local_128 - lVar8 != 0) {
              _objc_enumerationMutation(*local_128 - lVar8,ppppuVar4);
            }
            uVar9 = *(ulong *)(local_130 + (long)local_218 * 8);
            local_f8 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_tag_026cab98);
            uVar6 = local_f8;
            if (uVar9 == 0x24f6e7) {
              puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
              if ((uVar6 & 1) != 0) {
                local_e9 = 1;
                local_e0 = 2;
                goto LAB_0084756c;
              }
            }
            local_218 = (undefined8 ***)((long)local_218 + 1);
          } while (local_218 < local_210);
          local_210 = ppppuVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (ppppuVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,
                     auStack_a8,0x10);
          local_218 = (undefined8 ****)0x0;
        } while ((undefined8 ****)local_210 != (undefined8 ****)0x0);
      }
      local_e0 = 0;
LAB_0084756c:
      (*(code *)PTR__objc_release_02578630)();
    }
    if ((local_e9 & 1) == 0) {
      ppppuVar4 = (undefined8 ****)local_b8;
      FUN_0082fb1c();
      _objc_retainAutoreleasedReturnValue();
      local_140 = ppppuVar4;
      _objc_getAssociatedObject(ppppuVar4,&DAT_028cd0e0);
      _objc_retainAutoreleasedReturnValue();
      local_151 = 0;
      local_161 = 0;
      local_171 = 0;
      puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      local_148 = ppppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(ppppuVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      bVar2 = false;
      if (((ulong)ppppuVar4 & 1) != 0) {
        ppppuVar4 = (undefined8 ****)local_148;
        FUN_00814d40();
        bVar2 = false;
        if (((ulong)ppppuVar4 & 1) != 0) {
          ppppuVar4 = (undefined8 ****)local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_151 = 1;
          ppppuVar7 = (undefined8 ****)local_140;
          local_150 = ppppuVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_161 = 1;
          bVar2 = true;
          local_160 = ppppuVar7;
          if (ppppuVar4 != ppppuVar7) {
            ppppuVar4 = (undefined8 ****)local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_171 = 1;
            bVar2 = ppppuVar4 == (undefined8 ****)local_b8;
            local_170 = ppppuVar4;
          }
        }
      }
      if ((local_171 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_170);
      }
      if ((local_161 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_160);
      }
      if ((local_151 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_150);
      }
      if (bVar2) {
        local_e9 = 1;
      }
      _objc_storeStrong(&local_148);
      ppppuVar4 = &local_140;
      _objc_storeStrong(ppppuVar4,0);
    }
    local_189 = 0;
    if (((local_e9 & 1) == 0) && (FUN_0082d7bc(), ((ulong)ppppuVar4 & 1) == 0)) {
      local_2d0 = (undefined8 ****)0x0;
    }
    else {
      local_2d0 = local_b8;
      FUN_0082fb1c();
      _objc_retainAutoreleasedReturnValue();
      local_189 = 1;
      local_188 = local_2d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = local_2d0;
    if ((local_189 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_188);
    }
    pppuVar1 = local_180;
    if (local_c0 != (long *)0x0) {
      _objc_retainAutorelease();
      *local_c0 = (long)pppuVar1;
    }
    if ((local_e9 & 1) == 0) {
      if (local_c8 != (undefined8 *)0x0) {
        _objc_retainAutorelease();
        *local_c8 = &cf_no_wallpaper;
      }
      local_a9 = 0;
      local_e0 = 1;
    }
    else if ((undefined8 ****)local_180 == (undefined8 ****)0x0) {
      if (local_c8 != (undefined8 *)0x0) {
        _objc_retainAutorelease();
        *local_c8 = &cf_no_owner_vc;
      }
      local_a9 = 0;
      local_e0 = 1;
    }
    else {
      ppppuVar4 = (undefined8 ****)local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_198 = ppppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)(ppppuVar4,PTR_s_hasPrefix__0269d320,&cf_WCRefine);
      if ((((ulong)ppppuVar4 & 1) == 0) &&
         (ppppuVar4 = (undefined8 ****)local_198,
         (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_hasPrefix__0269d320,&cf_WCR),
         ((ulong)ppppuVar4 & 1) == 0)) {
        if (local_c8 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_c8 = &cf_wallpaper_on_wechat_page;
        }
        local_a9 = 1;
      }
      else {
        if (local_c8 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_c8 = &cf_wcr_owned_page;
        }
        local_a9 = 0;
      }
      local_e0 = 1;
      _objc_storeStrong(&local_198,0);
    }
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

