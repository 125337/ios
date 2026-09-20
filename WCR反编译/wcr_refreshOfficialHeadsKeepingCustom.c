// wcr_refreshOfficialHeadsKeepingCustom @ 01af7ed8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineHomeAvatarStripView::wcr_refreshOfficialHeadsKeepingCustom
          (WCRefineHomeAvatarStripView *this,ID param_1,SEL param_2)

{
  ID IVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  double in_d0;
  ulong local_2a8;
  ulong local_2a0;
  ulong local_240;
  ulong local_238;
  ulong local_1e0;
  ulong local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  byte local_181;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  _memset(auStack_180,0,0x40);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_cellViews_026be660);
  _objc_retainAutoreleasedReturnValue();
  local_238 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_238 != 0) {
    lVar5 = *local_170;
    local_240 = 0;
    do {
      do {
        if (*local_170 - lVar5 != 0) {
          _objc_enumerationMutation(*local_170 - lVar5,IVar1);
        }
        uVar8 = *(ulong *)(local_178 + local_240 * 8);
        local_140 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_nameLabel_026ad1e8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar7;
        FUN_01af8544();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar8);
        local_181 = (byte)uVar3;
        _memset(auStack_1d0,0,0x40);
        uVar7 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarHost_026b1098);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        local_2a0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,
                   0x10);
        if (local_2a0 != 0) {
          lVar6 = *local_1c0;
          local_2a8 = 0;
          do {
            do {
              if (*local_1c0 - lVar6 != 0) {
                _objc_enumerationMutation(*local_1c0 - lVar6,uVar2);
              }
              uVar7 = *(ulong *)(local_1c8 + local_2a8 * 8);
              local_190 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_tag_026cab98);
              if (uVar7 != 0x24f6e4) {
                uVar7 = local_190;
                (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_tag_026cab98);
                if (uVar7 - 0x24f6e5 != 0) {
                  uVar3 = local_190;
                  _objc_getAssociatedObject(uVar7 - 0x24f6e5,local_190,&DAT_028e4570);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_release_02578630)();
                  if (uVar3 == 0) {
                    uVar7 = local_190;
                    FUN_01af86e0();
                    _objc_retainAutoreleasedReturnValue();
                    local_1e0 = 0;
                    local_1d8 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar7,PTR_s_respondsToSelector__026ca818,PTR_s_image_026ca678);
                    if ((uVar7 & 1) != 0) {
                      uVar3 = local_1d8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_image_026ca678);
                      _objc_retainAutoreleasedReturnValue();
                      uVar7 = local_1e0;
                      local_1e0 = uVar3;
                      (*(code *)PTR__objc_release_02578630)(uVar7);
                    }
                    uVar7 = local_1e0;
                    if ((local_181 & 1) == 0) {
                      puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
                      if (((uVar7 & 1) == 0) ||
                         ((*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_size_026cab00),
                         in_d0 <= 1.0)) goto LAB_01af83a4;
                    }
                    else {
LAB_01af83a4:
                      uVar7 = local_190;
                      uVar3 = local_140;
                      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_username_026a2238);
                      _objc_retainAutoreleasedReturnValue();
                      FUN_01af8bf0(uVar7);
                      (*(code *)PTR__objc_release_02578630)(uVar3);
                    }
                    _objc_storeStrong(&local_1e0);
                    _objc_storeStrong(&local_1d8,0);
                  }
                }
              }
              local_2a8 = local_2a8 + 1;
            } while (local_2a8 < local_2a0);
            local_2a0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128
                       ,0x10);
            local_2a8 = 0;
          } while (local_2a0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_240 = local_240 + 1;
      } while (local_240 < local_238);
      local_238 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
      local_240 = 0;
    } while (local_238 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

