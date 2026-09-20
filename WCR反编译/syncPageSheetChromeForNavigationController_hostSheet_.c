// syncPageSheetChromeForNavigationController:hostSheet: @ 01f850cc

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePackPickerViewController::syncPageSheetChromeForNavigationController_hostSheet_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  byte bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  undefined *puVar10;
  long lVar11;
  undefined4 uVar12;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_140 [2];
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  long local_120;
  cfstringStruct *local_118 [2];
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8 [4];
  long local_d8 [2];
  cfstringStruct *local_c8;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  byte local_8d;
  byte local_8c;
  byte local_8b;
  byte local_8a;
  byte local_89;
  cfstringStruct *local_88;
  undefined4 local_7c;
  long local_78;
  cfstringStruct *local_70;
  SEL local_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = (cfstringStruct *)0x0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_4);
  if ((local_70 == (cfstringStruct *)0x0) || (local_78 == 0)) {
    local_7c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_setNavigationBarHidden_animated__026c97a0,1,0);
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineVoicePackPickerViewController_026cea10;
    local_88 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackPickerViewController_026cea10,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    pcVar4 = local_88;
    local_89 = (byte)pcVar2;
    puVar3 = PTR_WCRefineVoicePackSettingsViewController_026cea18;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackSettingsViewController_026cea18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    pcVar2 = local_88;
    local_8a = (byte)pcVar4;
    puVar3 = PTR_WCRefineVoicePackManagerViewController_026cea28;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackManagerViewController_026cea28,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    pcVar4 = local_88;
    local_8b = (byte)pcVar2;
    puVar3 = PTR_WCRefineVoicePackBookmarkListViewController_026cf7c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackBookmarkListViewController_026cf7c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_8c = (byte)pcVar4;
    pcVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_8d = (cfstringStruct *)0x1 < pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_88;
    local_98 = &::cf_S;
    if ((local_89 & 1) == 0) {
      if ((local_8b & 1) == 0) {
        if ((local_8a & 1) == 0) {
          if ((local_8c & 1) != 0) {
            local_c8 = (cfstringStruct *)0x0;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_valueForKey__0269d128,&cf_kind);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_c8 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = &cf_6e;
            if (local_c8 != (cfstringStruct *)0x1) {
              pcVar4 = &::cf___;
            }
            _objc_storeStrong(&local_98,pcVar4);
            pcVar4 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_navigationItem_0269cf08);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTitle__0269cef0,0);
          }
        }
        else {
          _objc_storeStrong(&local_98,&::cf_S);
          pcVar4 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTitle__0269cef0,0);
        }
      }
      else {
        local_a8 = (cfstringStruct *)0x0;
        pcVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_valueForKey__0269d128,&cf_pageTitle);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_a8;
        local_a8 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
        if (pcVar4 == (cfstringStruct *)0x0) {
          pcVar2 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_a8;
          local_a8 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        pcVar4 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_1e0 = &cf__OS;
        }
        else {
          local_1e0 = local_a8;
        }
        _objc_storeStrong(&local_98,local_1e0);
        pcVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTitle__0269cef0,0);
        _objc_storeStrong(&local_a8,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_wcr_pageSheetTitle_026c9b28);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_1a8 = &::cf_S;
      }
      _objc_storeStrong(&local_98,local_1a8);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTitle__0269cef0);
      pcVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      _objc_storeStrong(&local_a0,0);
    }
    local_d8[0] = 0;
    lVar5 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_valueForKey__0269d128,&cf_pageSheetConfig);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = local_d8[0];
    local_d8[0] = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar11);
    lVar11 = local_d8[0];
    if (local_d8[0] != 0) {
      bVar1 = 0;
      if ((local_8d & 1) != 0) {
        bVar1 = local_89 ^ 1;
      }
      uVar12 = 0;
      if ((bVar1 & 1) == 0) {
        uVar12 = 2;
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,uVar12);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar11,PTR_s_setValue_forKey__0269d300,puVar3,&cf_navLeftStyle);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8[0],PTR_s_setValue_forKey__0269d300,local_98,&cf_title);
    }
    pcVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar4;
    FUN_01f86898();
    _objc_retainAutoreleasedReturnValue();
    local_f8[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if ((local_f8[0] == (cfstringStruct *)0x0) ||
       (pcVar4 = local_f8[0],
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_f8[0],PTR_s_respondsToSelector__026ca818,PTR_s_navigationBar_0269ea30),
       ((ulong)pcVar4 & 1) == 0)) {
      pcVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_respondsToSelector__026ca818,
                 PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
      }
      local_7c = 1;
    }
    else {
      pcVar4 = local_f8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_navigationBar_0269ea30);
      _objc_retainAutoreleasedReturnValue();
      local_100 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_7c = 1;
      }
      else {
        pcVar4 = local_f8[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8[0],PTR_s_respondsToSelector__026ca818,PTR_s_updateTitle_026b63c8);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_updateTitle_026b63c8);
        }
        pcVar4 = local_f8[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8[0],PTR_s_respondsToSelector__026ca818,
                   PTR_s_updatePageSheetNavLeftState_026c9b30);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8[0],PTR_s_updatePageSheetNavLeftState_026c9b30);
        }
        pcVar4 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_viewWithTag__026cabe0,0x2c647);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_viewWithTag__026cabe0,0x2c645);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_viewWithTag__026cabe0,0x2c646);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_viewWithTag__026cabe0,0x2c653);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_valueForKey__0269d128,&cf_titleLabel);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        local_108 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setText__026caa88,local_98);
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setTextAlignment__026caa90,1);
        }
        _objc_storeStrong(&local_108,0);
        if (((local_8d & 1) != 0) && ((local_89 & 1) == 0)) {
          pcVar4 = &cf_V;
          FUN_01f869e8();
          _objc_retainAutoreleasedReturnValue();
          local_118[0] = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTag__026caa80,DAT_0233a7a0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118[0],PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
          _objc_setAssociatedObject(local_118[0],DAT_028c6ae0,local_78,1);
          pcVar4 = local_118[0];
          puVar3 = PTR_WCRefineVoicePackPickerViewController_026cea10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineVoicePackPickerViewController_026cea10,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_addTarget_action_forControlEvent_026ca4c8,puVar3,
                     PTR_s_wcr_pageSheetPopNav__026c9b38,0x40);
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addSubview__026ca4c0,local_118[0]);
          puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
          pcVar4 = local_118[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_leadingAnchor_0269ce20);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_leadingAnchor_0269ce20);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x402e000000000000,pcVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_118[0];
          local_38 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_centerYAnchor_0269ce10);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_centerYAnchor_0269ce10);
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_constraintEqualToAnchor__0269ce08);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_30 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_38,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_activateConstraints__0269ce58);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_bringSubviewToFront__026ca550,local_118[0]);
          _objc_storeStrong(local_118,0);
        }
        if ((local_89 & 1) == 0) {
          if ((local_8c & 1) != 0) {
            local_130 = (cfstringStruct *)0x0;
            pcVar4 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_valueForKey__0269d128,&cf_kind);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_130 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            if (local_130 == (cfstringStruct *)0x0) {
              pcVar4 = &cf_nd;
              FUN_01f869e8();
              _objc_retainAutoreleasedReturnValue();
              local_140[0] = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTag__026caa80,DAT_0233a7b0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140[0],PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140[0],PTR_s_addTarget_action_forControlEvent_026ca4c8,local_88,
                         PTR_s_clearRecents_026ba7a0,0x40);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_addSubview__026ca4c0,local_140[0]);
              puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
              pcVar4 = local_140[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_trailingAnchor_0269cf88);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_trailingAnchor_0269cf88);
              _objc_retainAutoreleasedReturnValue();
              pcVar6 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (0xc02e000000000000,pcVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = local_140[0];
              local_58 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_centerYAnchor_0269ce10);
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_centerYAnchor_0269ce10);
              _objc_retainAutoreleasedReturnValue();
              pcVar9 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_constraintEqualToAnchor__0269ce08);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              local_50 = pcVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_58,2);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_activateConstraints__0269ce58);
              (*(code *)PTR__objc_release_02578630)(puVar10);
              (*(code *)PTR__objc_release_02578630)(pcVar9);
              (*(code *)PTR__objc_release_02578630)(pcVar8);
              (*(code *)PTR__objc_release_02578630)(pcVar7);
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              (*(code *)PTR__objc_release_02578630)(pcVar4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_bringSubviewToFront__026ca550,local_140[0]);
              _objc_storeStrong(local_140,0);
            }
          }
        }
        else {
          lVar11 = local_78;
          _objc_getAssociatedObject(local_78,DAT_028c6ac8);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = &cf__t;
          local_120 = lVar11;
          FUN_01f869e8();
          _objc_retainAutoreleasedReturnValue();
          local_128 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTag__026caa80,DAT_0233a7a8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_120,
                     PTR_s_onManage__026c9b40,0x40);
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addSubview__026ca4c0,local_128);
          puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
          pcVar4 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_trailingAnchor_0269cf88);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_trailingAnchor_0269cf88);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0xc02e000000000000,pcVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_128;
          local_48 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_centerYAnchor_0269ce10);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_centerYAnchor_0269ce10);
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_constraintEqualToAnchor__0269ce08);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_40 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_48,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_activateConstraints__0269ce58);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_bringSubviewToFront__026ca550,local_128);
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_120,0);
        }
        pcVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_respondsToSelector__026ca818,
                   PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
        }
        local_7c = 0;
      }
      _objc_storeStrong(&local_100,0);
    }
    _objc_storeStrong(local_f8);
    _objc_storeStrong(local_d8,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

