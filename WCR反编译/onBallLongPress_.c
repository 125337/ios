// onBallLongPress: @ 015ecfd0

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatWindow::onBallLongPress_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  undefined *local_108;
  undefined *local_100;
  int local_f4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  lVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_state_026cab20);
  if (((lVar3 == 3) ||
      (lVar3 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_state_026cab20),
      lVar3 == 4)) ||
     (lVar3 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_state_026cab20),
     lVar3 == 5)) {
    _objc_initWeak(0,auStack_c8,local_b0);
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_015ed5c8;
    local_d8 = &DAT_0257be28;
    _objc_copyWeak(auStack_d0,auStack_c8);
    _dispatch_async(puVar1,&local_f0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_f4 = 1;
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
  }
  else {
    lVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_state_026cab20);
    if (lVar3 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBallLongPressConsumed__026b1428,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wakeFromIdleAnimated__026b1400,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_collapseSidebar_026b1250);
      puVar1 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_108 = (undefined *)0x0;
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      local_100 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        puVar2 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_108;
        local_108 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      else {
        _objc_storeStrong(&local_108,local_100);
      }
      if (local_108 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
        local_f4 = 1;
      }
      else {
        _memset(auStack_150,0,0x40);
        puVar1 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1b0 != (undefined *)0x0) {
          lVar3 = *local_140;
          local_1b8 = (undefined *)0x0;
          do {
            do {
              if (*local_140 - lVar3 != 0) {
                _objc_enumerationMutation(*local_140 - lVar3,puVar1);
              }
              uVar4 = *(ulong *)(local_148 + (long)local_1b8 * 8);
              puVar2 = PTR_WCRefineQuickChatSettingsViewController_026cee30;
              local_110 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineQuickChatSettingsViewController_026cee30,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
              if ((uVar4 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_108,PTR_s_popToViewController_animated__0269e4f8,local_110,1);
                _objc_unsafeClaimAutoreleasedReturnValue();
                local_f4 = 1;
                goto LAB_015ed480;
              }
              local_1b8 = local_1b8 + 1;
            } while (local_1b8 < local_1b0);
            local_1b0 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8
                       ,0x10);
            local_1b8 = (undefined *)0x0;
          } while (local_1b0 != (undefined *)0x0);
        }
        local_f4 = 0;
LAB_015ed480:
        (*(code *)PTR__objc_release_02578630)(puVar1);
        if (local_f4 == 0) {
          puVar1 = PTR_WCRefineQuickChatSettingsViewController_026cee30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineQuickChatSettingsViewController_026cee30,PTR_s_new_0269d288);
          local_158 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
          puVar1 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_respondsToSelector__026ca818,
                     PTR_s_PushViewController_animated__0269cd40);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_pushViewController_animated__0269d590,local_158,1);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_PushViewController_animated__0269cd40,local_158,1);
          }
          _objc_storeStrong(&local_158,0);
          local_f4 = 0;
        }
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_100,0);
    }
    else {
      local_f4 = 1;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

