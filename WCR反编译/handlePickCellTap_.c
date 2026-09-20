// handlePickCellTap: @ 01f8ec0c

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPickerViewController::handlePickCellTap_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78;
  undefined *local_70;
  ulong local_68 [4];
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sending_026c9820);
  if ((IVar1 & 1) == 0) {
    local_48 = 0;
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_userInfo);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_48;
    local_48 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_48;
    puVar3 = PTR_WCRefineVoicePackItem_026cedd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineVoicePackItem_026cedd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) == 0) {
      local_3c = 1;
    }
    else {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selecting_026c9890);
      if ((IVar1 & 1) == 0) {
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bindingPickMode_026c9b88);
        if ((IVar1 & 1) == 0) {
          uVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDirectory_026b0ba0);
          if ((uVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendItem__026c9c10,local_48);
            local_3c = 0;
          }
          else {
            puVar3 = PTR_WCRefineVoicePackPickerViewController_026cea10;
            _objc_alloc();
            IVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatName_026aa868);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_absolutePath_026ae300);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_initWithChatName_directory__026c9828,IVar1);
            local_a0 = puVar3;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_release_02578630)(IVar1);
            IVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hostSheet_026c8f78);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setHostSheet__026c8ee0);
            (*(code *)PTR__objc_release_02578630)(IVar1);
            IVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageSheetMode_026c9788);
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setPageSheetMode__026c9830,IVar1);
            IVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar1);
            puVar3 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            IVar1 = local_28;
            local_c8 = PTR___NSConcreteStackBlock_02578660;
            local_c0 = 0xc2000000;
            local_bc = 0;
            local_b8 = FUN_01f8f5c4;
            local_b0 = &DAT_0257a800;
            (*(code *)PTR__objc_retain_02578638)();
            local_a8 = IVar1;
            _dispatch_async(puVar3,&local_c8);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_3c = 1;
            _objc_storeStrong(&local_a8);
            _objc_storeStrong(&local_a0,0);
          }
        }
        else {
          uVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDirectory_026b0ba0);
          if ((uVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBindingPickMode__026c9c00,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rebuildListSections_026ba410);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_presentBindOptionsForItem__026c9c08,local_48);
            local_3c = 1;
          }
          else {
            puVar3 = PTR_WCRefineVoicePackPickerViewController_026cea10;
            _objc_alloc();
            IVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatName_026aa868);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_absolutePath_026ae300);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_initWithChatName_directory__026c9828,IVar1);
            local_70 = puVar3;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_release_02578630)(IVar1);
            IVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hostSheet_026c8f78);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setHostSheet__026c8ee0);
            (*(code *)PTR__objc_release_02578630)(IVar1);
            IVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageSheetMode_026c9788);
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setPageSheetMode__026c9830,IVar1);
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setBindingPickMode__026c9c00,1);
            IVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar1);
            puVar3 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            IVar1 = local_28;
            local_98 = PTR___NSConcreteStackBlock_02578660;
            local_90 = 0xc2000000;
            local_8c = 0;
            local_88 = FUN_01f8f4e4;
            local_80 = &DAT_0257a800;
            (*(code *)PTR__objc_retain_02578638)();
            local_78 = IVar1;
            _dispatch_async(puVar3,&local_98);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_3c = 1;
            _objc_storeStrong(&local_78);
            _objc_storeStrong(&local_70,0);
          }
        }
      }
      else {
        uVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_absolutePath_026ae300);
        _objc_retainAutoreleasedReturnValue();
        local_68[0] = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
        if (uVar4 != 0) {
          IVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedPaths_026ba4d0);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar1);
          if ((IVar5 & 1) == 0) {
            IVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedPaths_026ba4d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar1);
          }
          else {
            IVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedPaths_026ba4d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar1);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rebuildListSections_026ba410);
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

