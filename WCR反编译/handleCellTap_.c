// handleCellTap: @ 01f6b990

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackBookmarkListViewController::handleCellTap_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  undefined *local_68 [4];
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sending_026c9820);
  if ((IVar2 & 1) == 0) {
    local_48 = 0;
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_userInfo);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_48;
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_48;
    puVar4 = PTR_WCRefineVoicePackItem_026cedd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineVoicePackItem_026cedd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar5 & 1) == 0) {
      local_3c = 1;
    }
    else {
      uVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDirectory_026b0ba0);
      if ((uVar5 & 1) == 0) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatName_026aa868);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        puVar4 = PTR_WCRefineVoicePackStore_026cea20;
        if (IVar6 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRelSNJ_YSb);
          local_3c = 1;
        }
        else {
          uVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_relativePath_026ac370);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_pushRecentRelativePath__026c9838);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSending__026c9840,1);
          puVar4 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_S_N_
                    );
          _objc_retainAutoreleasedReturnValue();
          local_98 = puVar4;
          _objc_initWeak(auStack_a0,local_28);
          uVar5 = local_48;
          puVar4 = PTR_WCRefineVoicePackSender_026ce128;
          IVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatName_026aa868);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = PTR___NSConcreteStackBlock_02578660;
          local_c8 = 0xc2000000;
          local_c4 = 0;
          local_c0 = FUN_01f6c0f8;
          local_b8 = &DAT_0258cf30;
          _objc_copyWeak(auStack_a8,auStack_a0);
          puVar1 = local_98;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_sendItem_toChatName_completion__026b0bd8,uVar5,IVar2,&local_d0);
          (*(code *)PTR__objc_release_02578630)(IVar2);
          _objc_storeStrong(&local_b0);
          _objc_destroyWeak(auStack_a8);
          _objc_destroyWeak(auStack_a0);
          _objc_storeStrong(&local_98,0);
          local_3c = 0;
        }
      }
      else {
        puVar4 = PTR_WCRefineVoicePackPickerViewController_026cea10;
        _objc_alloc();
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatName_026aa868);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_absolutePath_026ae300);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_initWithChatName_directory__026c9828,IVar2);
        local_68[0] = puVar4;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hostSheet_026c8f78);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setHostSheet__026c8ee0);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageSheetMode_026c9788);
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setPageSheetMode__026c9830,IVar2);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageSheetMode_026c9788);
        puVar4 = PTR___dispatch_main_q_02578680;
        if ((IVar2 & 1) != 0) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_28;
          local_90 = PTR___NSConcreteStackBlock_02578660;
          local_88 = 0xc2000000;
          local_84 = 0;
          local_80 = FUN_01f6c030;
          local_78 = &DAT_0257a800;
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = IVar2;
          _dispatch_async(puVar4,&local_90);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_70,0);
        }
        local_3c = 1;
        _objc_storeStrong(local_68,0);
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

