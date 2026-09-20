// handleListCellTap: @ 01f7e4d4

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackManagerViewController::handleListCellTap_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  undefined *local_70;
  ulong local_68;
  undefined4 local_5c;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_userInfo);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_40;
  local_40 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_40;
  puVar3 = PTR_WCRefineVoicePackItem_026cedd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineVoicePackItem_026cedd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    local_5c = 1;
  }
  else {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selecting_026c9890);
    if ((IVar5 & 1) == 0) {
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isDirectory_026b0ba0);
      if ((uVar4 & 1) == 0) {
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_folderPickMode_026c9870);
        if ((IVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showItemActions__026c9aa0,local_40);
          local_5c = 0;
        }
        else {
          local_5c = 1;
        }
      }
      else {
        puVar3 = PTR_WCRefineVoicePackManagerViewController_026cea28;
        _objc_alloc();
        uVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_absolutePath_026ae300);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithDirectory_title__026b2df8,uVar4);
        local_70 = puVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_folderPickMode_026c9870);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setFolderPickMode__026c9858,IVar5);
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_folderPickCompletion_026c99c8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setFolderPickCompletion__026c9860);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_isInPageSheetHost_026c98b0);
        if ((IVar5 & 1) != 0) {
          IVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar5);
          puVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_hostSheet_026c98b8);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = local_28;
        local_78 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar6);
        puVar3 = PTR___dispatch_main_q_02578680;
        if (local_78 == 0) {
          IVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_folderPickMode_026c9870);
          puVar3 = PTR___dispatch_main_q_02578680;
          if ((IVar5 & 1) == 0) {
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_70;
            local_d0 = PTR___NSConcreteStackBlock_02578660;
            local_c8 = 0xc2000000;
            local_c4 = 0;
            local_c0 = FUN_01f7ed18;
            local_b8 = &DAT_0257a800;
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar1;
            _dispatch_async(puVar3,&local_d0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_b0,0);
          }
        }
        else {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          IVar6 = local_28;
          local_a8 = PTR___NSConcreteStackBlock_02578660;
          local_a0 = 0xc2000000;
          local_9c = 0;
          local_98 = FUN_01f7ec88;
          local_90 = &DAT_0257a7a0;
          (*(code *)PTR__objc_retain_02578638)();
          IVar5 = local_78;
          local_88 = IVar6;
          (*(code *)PTR__objc_retain_02578638)();
          local_80 = IVar5;
          _dispatch_async(puVar3,&local_a8);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_80);
          _objc_storeStrong(&local_88,0);
        }
        local_5c = 1;
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
      }
    }
    else {
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_absolutePath_026ae300);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
      if (uVar4 != 0) {
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedPaths_026ba4d0);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar5);
        if ((IVar6 & 1) == 0) {
          IVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedPaths_026ba4d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        else {
          IVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedPaths_026ba4d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rebuildListSections_026ba410);
      }
      local_5c = 1;
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

