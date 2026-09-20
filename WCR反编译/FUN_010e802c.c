// FUN_010e802c @ 010e802c

void FUN_010e802c(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_1d0;
  ulong local_1c8;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  ulong local_100;
  long local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined *local_d0;
  ulong local_c8;
  ulong local_c0;
  uint local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  uVar3 = local_b0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_b0;
  if ((uVar3 & 1) == 0) {
    local_b4 = 1;
    goto LAB_010e8a9c;
  }
  puVar2 = PTR__OBJC_CLASS___UINavigationBar_026ce2a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationBar_026ce2a8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar4 & 1) != 0) {
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_viewWithTag__026cabe0,0x7cd);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_c0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((uVar3 & 1) == 0) ||
        (uVar3 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isHidden_026ca768),
        (uVar3 & 1) != 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_alpha_026ca4d8), param_1 < DAT_02323d38
       )) {
      uVar3 = local_b0;
      local_d0 = PTR_s_setupWeChatTopBarAvatar_026a6030;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar4 & 1) == 0) {
LAB_010e83bc:
        uVar3 = local_b0;
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = uVar3;
        while (local_e8 != 0) {
          uVar3 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_respondsToSelector__026ca818,local_d0);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,local_d0);
            local_b4 = 1;
            goto LAB_010e8478;
          }
          uVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_nextResponder_0269d0d8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_e8;
          local_e8 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_b4 = 2;
LAB_010e8478:
        _objc_storeStrong(&local_e8,0);
        uVar5 = local_b4 - 2;
        if (uVar5 == 0) {
          local_b4 = 0;
        }
      }
      else {
        uVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_delegate_0269e808);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_e0 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,local_d0);
        bVar1 = (uVar3 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_d0);
        }
        local_b4 = (uint)bVar1;
        _objc_storeStrong(&local_e0,0);
        uVar5 = local_b4;
        if (local_b4 == 0) goto LAB_010e83bc;
      }
      _objc_storeStrong(uVar5,&local_d8,0);
    }
    else {
      uVar3 = local_b0;
      _objc_getAssociatedObject(local_b0,DAT_0280e1e0);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setClipsToBounds__026ca8c8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineNameplateHelper_026ce5f8,
                 PTR_s_applyNameplateBesideNicknameLabe_026a5d98,local_c0,local_b0,local_c8,0,5,1);
      local_b4 = 1;
      _objc_storeStrong(&local_c8,0);
    }
    _objc_storeStrong(&local_c0,0);
    if (local_b4 != 0) goto LAB_010e8a9c;
  }
  uVar3 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = uVar3;
  local_f8 = 0;
  while (local_f8 < 8 && local_f0 != 0) {
    uVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_respondsToSelector__026ca818,PTR_s_wcr_applyNameplateIfNeeded_026a5d40
              );
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_wcr_applyNameplateIfNeeded_026a5d40);
      local_b4 = 1;
      goto LAB_010e8a8c;
    }
    uVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_respondsToSelector__026ca818,PTR_s_wcr_applyMomentsNameplate_026a5d50)
    ;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_wcr_applyMomentsNameplate_026a5d50);
      local_b4 = 1;
      goto LAB_010e8a8c;
    }
    uVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_100 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_isEqualToString__0269ccc8,&cf_FakeMainFrameItemView);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = local_100,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_100,PTR_s_isEqualToString__0269ccc8,&cf_MainFrameItemView), (uVar3 & 1) == 0
       )) {
      uVar3 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_isEqualToString__0269ccc8,&cf_ContactsItemView);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = local_100,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_100,PTR_s_isEqualToString__0269ccc8,&cf_WCTimeLineCellView),
         (uVar3 & 1) == 0)) {
        uVar3 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_isEqualToString__0269ccc8,&cf_MMTitleView);
        if ((uVar3 & 1) == 0) {
          uVar3 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_isEqualToString__0269ccc8,&cf_MMMsgContentNavBar);
          if (((uVar3 & 1) != 0) ||
             (uVar3 = local_100,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_100,PTR_s_isEqualToString__0269ccc8,&cf_MMNewMsgContentNavBar),
             (uVar3 & 1) != 0)) {
            _memset(auStack_148,0,0x40);
            uVar3 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_1c8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_1c8 != 0) {
              lVar6 = *local_138;
              local_1d0 = 0;
              do {
                do {
                  if (*local_138 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_138 - lVar6,uVar3);
                  }
                  uVar7 = *(ulong *)(local_140 + local_1d0 * 8);
                  local_108 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_class_0269cd60);
                  _NSStringFromClass();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar7);
                  if ((uVar4 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setNeedsLayout_0269deb8);
                    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_layoutIfNeeded_026ca790);
                    local_b4 = 1;
                    goto LAB_010e8980;
                  }
                  local_1d0 = local_1d0 + 1;
                } while (local_1d0 < local_1c8);
                local_1c8 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,
                           auStack_a8,0x10);
                local_1d0 = 0;
              } while (local_1c8 != 0);
            }
            local_b4 = 0;
LAB_010e8980:
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if (local_b4 != 0) goto LAB_010e89ac;
          }
          local_b4 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setNeedsLayout_0269deb8);
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layoutIfNeeded_026ca790);
          local_b4 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setNeedsLayout_0269deb8);
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layoutIfNeeded_026ca790);
        local_b4 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineNameplateHelper_026ce5f8,
                 PTR_s_applyNameplateToMainFrameItemVie_026a3020,local_f0,1);
      local_b4 = 1;
    }
LAB_010e89ac:
    _objc_storeStrong(&local_100,0);
    if (local_b4 != 0) goto LAB_010e8a8c;
    local_f8 = local_f8 + 1;
    uVar4 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_f0;
    local_f0 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNeedsLayout_0269deb8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layoutIfNeeded_026ca790);
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_layoutInternal_0269f018);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layoutInternal_0269f018);
  }
  local_b4 = 0;
LAB_010e8a8c:
  _objc_storeStrong(&local_f0,0);
LAB_010e8a9c:
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

