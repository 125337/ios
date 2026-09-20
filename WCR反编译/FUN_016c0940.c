// FUN_016c0940 @ 016c0940

void FUN_016c0940(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined **ppuVar9;
  ulong *local_150;
  ulong *local_148;
  ulong local_128;
  ulong local_100;
  ulong local_f0;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  ulong local_68;
  bool local_59;
  ulong local_58;
  ulong local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_128 = param_1 + 0x28;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_59 = false;
  bVar3 = local_128 == 0;
  local_38 = local_128;
  if (bVar3) {
    local_128 = 0;
  }
  else {
    FUN_016aed70();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_128;
  }
  local_59 = !bVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_128;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  uVar4 = local_38;
  FUN_016c156c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_WCRWordSegPickerController_026ceec0;
  local_68 = uVar4;
  _objc_alloc_init();
  local_70 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_setSourceText__026b2d28,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setSourceCell__026b2d30,local_38);
  if (local_40 == 0) {
    local_148 = &local_68;
  }
  else {
    local_148 = &local_40;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setChatViewController__026b2d38,*local_148);
  local_78 = (undefined *)0x0;
  if (local_40 == 0) {
    local_150 = &local_68;
  }
  else {
    local_150 = &local_40;
  }
  puVar5 = (undefined *)*local_150;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = puVar5;
  if ((puVar5 != (undefined *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630),
     ((ulong)puVar5 & 1) != 0)) {
    puVar6 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_getChatContact_0269d630);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_78;
    local_78 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_88,0);
  }
  puVar5 = local_78;
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
  if ((((ulong)puVar5 & 1) == 0) ||
     (puVar5 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
     puVar5 == (undefined *)0x0)) {
    puVar6 = PTR_WCRefineLinkMediaSender_026ce170;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_currentChatUsername_0269dba0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_78;
    local_78 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setChatUserName__026b2d40,local_78);
  pcVar7 = "MMPageSheetConfig";
  _objc_getClass();
  pcVar8 = "MMPageSheetAdapter";
  local_98 = pcVar7;
  _objc_getClass();
  local_a0 = pcVar8;
  if ((local_98 == (char *)0x0) || (pcVar8 == (char *)0x0)) {
    bVar2 = false;
    bVar1 = false;
    bVar3 = true;
    if (local_68 != 0) {
      uVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isBeingDismissed_0269f460);
      bVar3 = true;
      if ((uVar4 & 1) == 0) {
        uVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isViewLoaded_0269cde0);
        bVar3 = true;
        if ((uVar4 & 1) != 0) {
          local_f0 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          local_100 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          bVar3 = local_100 == 0;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    if (!bVar3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setModalPresentationStyle__0269d2a8,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_presentViewController_animated_c_0269d2b0,local_70,1,0);
    }
  }
  else {
    pcVar7 = local_98;
    _objc_alloc_init();
    local_a8 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_setTitle__0269cef0,&cf_R);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setNavLeftStyle__026aa730,2);
    pcVar7 = local_a8;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar7,PTR_s_setValue_forKey__0269d300,puVar5,&cf_navHidden);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setEnableDragToClose__026aa740,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
    pcVar7 = local_a0;
    _objc_alloc_init();
    local_b0 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_setPageSheetConfig__026aa758,local_a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHostViewController__026a58c8,local_70);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4076800000000000,local_b0,PTR_s_setContentHeight__026aa760);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setPageSheet__026b2a88,local_b0);
    _objc_initWeak(auStack_b8,local_70);
    pcVar8 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_setDidCloseBlock__026aabf8);
    pcVar7 = local_b0;
    puVar5 = PTR_s_setDidCloseBlock__026aabf8;
    if (((ulong)pcVar8 & 1) != 0) {
      ppuVar9 = &local_e0;
      local_e0 = PTR___NSConcreteStackBlock_02578660;
      local_d8 = 0xc2000000;
      local_d4 = 0;
      local_d0 = FUN_016c1b0c;
      local_c8 = &DAT_02578da0;
      _objc_copyWeak(auStack_c0,auStack_b8);
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,puVar5);
      (*(code *)PTR__objc_release_02578630)(ppuVar9);
      _objc_destroyWeak(auStack_c0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_showWithAnimated__0269e5a8,1);
    _objc_destroyWeak(auStack_b8);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

