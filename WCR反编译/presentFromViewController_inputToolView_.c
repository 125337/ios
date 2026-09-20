// presentFromViewController:inputToolView: @ 01d1b2c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineQuickReplyPanel::presentFromViewController_inputToolView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined **ppuVar9;
  double in_d3;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  undefined *local_1a8;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [40];
  char *local_e0;
  char *local_d8;
  undefined *local_d0;
  bool local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  char *local_a8;
  char *local_a0;
  byte local_91;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  ID local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01d1bc54;
    local_60 = &DAT_0257a740;
    local_48 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar6 = local_40;
    local_58 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = pcVar6;
    _dispatch_async(puVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_7c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_1a8 = local_38;
    local_91 = 0;
    bVar1 = local_38 == (undefined *)0x0;
    if (bVar1) {
      local_1a8 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_1a8;
    }
    local_91 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_1a8;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if (local_88 == (undefined *)0x0) {
      local_7c = 1;
    }
    else {
      while( true ) {
        puVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar3 == (undefined *)0x0) break;
        puVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_88;
        local_88 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      pcVar4 = "MMPageSheetConfig";
      _objc_getClass();
      pcVar5 = "MMPageSheetAdapter";
      local_a0 = pcVar4;
      _objc_getClass();
      local_a8 = pcVar5;
      if ((local_a0 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
        local_7c = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = &::cf___;
        pcVar6 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getChatUsername_0269d2b8);
        if (((ulong)pcVar6 & 1) != 0) {
          pcVar7 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getChatUsername_0269d2b8);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar7;
          FUN_01d1bca0();
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_b0;
          local_b0 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          (*(code *)PTR__objc_release_02578630)(pcVar7);
        }
        pcVar6 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
        if (pcVar6 == (cfstringStruct *)0x0) {
          pcVar6 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_currentChatContactFromTopViewCon_026a1800);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
          local_c1 = false;
          bVar1 = ((ulong)pcVar6 & 1) == 0;
          if (bVar1) {
            local_1d0 = (cfstringStruct *)0x0;
          }
          else {
            local_1d0 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_nsUsrName_0269d638);
            _objc_retainAutoreleasedReturnValue();
            local_c0 = local_1d0;
          }
          local_c1 = !bVar1;
          FUN_01d1bca0();
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_b0;
          local_b0 = local_1d0;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          if ((local_c1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_c0);
          }
          _objc_storeStrong(&local_b8,0);
        }
        puVar3 = PTR_WCRefineQuickReplyPanel_026ced08;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineQuickReplyPanel_026ced08,PTR_s_new_0269d288);
        local_d0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setOriginalHost__026aabd0,local_88);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setChatName__026aa878,local_b0);
        pcVar6 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        if (((ulong)pcVar6 & 1) == 0) {
          local_1d8 = local_b0;
        }
        else {
          local_1d8 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setInvitee__026c4100,local_1d8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_setSelectedFilterType__026ae4b0,_WCRQuickReplyFilterAll);
        pcVar4 = local_a0;
        _objc_alloc_init();
        local_d8 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTitle__0269cef0,&cf__wcVY);
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setNavLeftStyle__026aa730,2);
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setEnableDragToClose__026aa740,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1)
        ;
        pcVar4 = local_a8;
        _objc_alloc_init();
        local_e0 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setPageSheetConfig__026aa758,local_d8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_setHostViewController__026a58c8,local_d0);
        puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d3 * DAT_02323db8,local_e0,PTR_s_setContentHeight__026aa760);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setSheet__026aa770,local_e0);
        _objc_initWeak(auStack_108,local_d0);
        pcVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_setDidCloseBlock__026aabf8);
        pcVar4 = local_e0;
        puVar3 = PTR_s_setDidCloseBlock__026aabf8;
        if (((ulong)pcVar5 & 1) != 0) {
          ppuVar9 = &local_140;
          local_140 = PTR___NSConcreteStackBlock_02578660;
          local_138 = 0xc2000000;
          local_134 = 0;
          local_130 = FUN_01d1be10;
          local_128 = &DAT_0257be28;
          _objc_copyWeak(auStack_120,auStack_108);
          _objc_retainBlock();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar3);
          (*(code *)PTR__objc_release_02578630)(ppuVar9);
          _objc_destroyWeak(auStack_120);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_showWithAnimated__0269e5a8,1);
        _objc_destroyWeak(auStack_108);
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
        _objc_storeStrong(&local_d0,0);
        _objc_storeStrong(&local_b0,0);
        local_7c = 0;
      }
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

