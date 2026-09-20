// FUN_0162fbb8 @ 0162fbb8

byte FUN_0162fbb8(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_130;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  bool local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_34 = 1;
    goto LAB_01630afc;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_CameraScanViewController);
  local_21 = (byte)pcVar2;
  if (((ulong)pcVar2 & 1) != 0) {
    FUN_01633824();
    local_21 = local_21 & 1;
    local_34 = 1;
    goto LAB_01630afc;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_KindaViewController);
  if (((ulong)pcVar2 & 1) != 0) {
    FUN_01633a58();
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_6eN>kR_1Y_);
    }
    local_21 = 1;
    local_34 = 1;
    goto LAB_01630afc;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WeNoteFlutterViewController);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = &cf_MyFavoritesViewController;
    _NSClassFromString();
    local_40 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      _objc_alloc_init();
      pcVar3 = &cf_onClickNewBtn;
      local_48 = pcVar2;
      _NSSelectorFromString();
      local_50 = pcVar3;
      if ((local_48 == (cfstringStruct *)0x0) ||
         (pcVar2 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar3),
         ((ulong)pcVar2 & 1) == 0)) {
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50);
        local_21 = 1;
      }
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    goto LAB_01630afc;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCAccountLoginUsersViewController);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = &cf_NewSettingViewController;
    _NSClassFromString();
    local_58 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      _objc_alloc_init();
      pcVar3 = &cf_gotoSwitchAccount;
      local_60 = pcVar2;
      _NSSelectorFromString();
      local_68 = pcVar3;
      if ((local_60 == (cfstringStruct *)0x0) ||
         (pcVar2 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar3),
         ((ulong)pcVar2 & 1) == 0)) {
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,local_68);
        local_21 = 1;
      }
      local_34 = 1;
      _objc_storeStrong(&local_60,0);
    }
    goto LAB_01630afc;
  }
  local_70 = (cfstringStruct *)0x0;
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_NewPersonalQRCodeViewController);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCFinderTimelineTabViewController);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCFinderLiveHomePageViewController);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCPluginsViewController);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineFileManagerViewController)
          ;
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCPayMainViewControllerV2);
            if (((ulong)pcVar2 & 1) == 0) {
              pcVar2 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_isEqualToString__0269ccc8,&cf_MyFavoritesViewController);
              if (((ulong)pcVar2 & 1) == 0) {
                pcVar2 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCTimeLineViewController);
                if (((((ulong)pcVar2 & 1) != 0) ||
                    (pcVar2 = local_30,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_30,PTR_s_isEqualToString__0269ccc8,
                               &cf_WCRefineRootViewController), ((ulong)pcVar2 & 1) != 0)) ||
                   (pcVar2 = local_30, _NSClassFromString(), pcVar2 != (cfstringStruct *)0x0)) {
                  pcVar2 = local_30;
                  _NSClassFromString();
                  local_f8 = pcVar2;
                  if (pcVar2 == (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                               &cf_ubNS_u);
                    local_21 = 0;
                    local_34 = 1;
                    goto LAB_01630aec;
                  }
                  _objc_alloc_init();
                  pcVar3 = local_70;
                  local_70 = pcVar2;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                  pcVar2 = local_30;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineRootViewController
                            );
                  if ((((ulong)pcVar2 & 1) != 0) ||
                     (pcVar2 = local_30,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_30,PTR_s_hasPrefix__0269d320,&cf_WCRefine),
                     ((ulong)pcVar2 & 1) != 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_70,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
                  }
                }
              }
              else {
                pcVar2 = &cf_MyFavoritesViewController;
                _NSClassFromString();
                local_f0 = pcVar2;
                if (pcVar2 == (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ubNS_u)
                  ;
                  local_21 = 0;
                  local_34 = 1;
                  goto LAB_01630aec;
                }
                _objc_alloc_init();
                pcVar3 = local_70;
                local_70 = pcVar2;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                pcVar2 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_70,PTR_s_respondsToSelector__026ca818,
                           PTR_s_setDisableCheckLeaksWhenQuit__026b1ac0);
                if (((ulong)pcVar2 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_70,PTR_s_setDisableCheckLeaksWhenQuit__026b1ac0,1);
                }
                pcVar2 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_70,PTR_s_respondsToSelector__026ca818,
                           PTR_s_setDefaultTitle__026b1ac8);
                if (((ulong)pcVar2 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_70,PTR_s_setDefaultTitle__026b1ac8,&cf_6e);
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_70,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
              }
            }
            else {
              pcVar2 = &cf_WCPayMainViewControllerV2;
              _NSClassFromString();
              local_e8 = pcVar2;
              if (pcVar2 == (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ubNS_u);
                local_21 = 0;
                local_34 = 1;
                goto LAB_01630aec;
              }
              _objc_alloc_init();
              pcVar3 = local_70;
              local_70 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
            }
          }
          else {
            pcVar2 = &cf_WCRefineFileManagerViewController;
            _NSClassFromString();
            local_d8 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ubNS_u);
              local_21 = 0;
              local_34 = 1;
              goto LAB_01630aec;
            }
            pcVar2 = &cf_initWithDirectory_title_;
            _NSSelectorFromString();
            pcVar3 = local_d8;
            local_e0 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_instancesRespondToSelector__0269da90,pcVar2);
            if (((ulong)pcVar3 & 1) == 0) {
              pcVar3 = local_d8;
              _objc_alloc_init();
              pcVar2 = local_70;
              local_70 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
            }
            else {
              pcVar3 = local_d8;
              _objc_alloc();
              pcVar4 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_70;
              local_70 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
            if (local_70 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
            }
          }
        }
        else {
          _WCRefinePreferredPluginHubViewController();
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_70;
          local_70 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (local_70 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_6e_uNS_u);
            local_21 = 0;
            local_34 = 1;
            goto LAB_01630aec;
          }
        }
      }
      else {
        pcVar2 = &cf_WCFinderLiveHomePageViewController;
        _NSClassFromString();
        local_a0 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_21 = 0;
          local_34 = 1;
          goto LAB_01630aec;
        }
        pcVar2 = &cf_initWithParams_;
        _NSSelectorFromString();
        pcVar3 = local_a0;
        local_a8 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_instancesRespondToSelector__0269da90,pcVar2);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar2 = &cf_initWithTargetTabType_;
          _NSSelectorFromString();
          pcVar3 = local_a0;
          local_d0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_instancesRespondToSelector__0269da90,pcVar2);
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_a0;
            _objc_alloc_init();
            pcVar2 = local_70;
            local_70 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          else {
            pcVar3 = local_a0;
            _objc_alloc();
            pcVar4 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_70;
            local_70 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
        }
        else {
          local_130 = &cf_WCFinderLiveHomePageInitialParams;
          _NSClassFromString();
          local_c1 = false;
          bVar1 = local_130 == (cfstringStruct *)0x0;
          local_b0 = local_130;
          if (bVar1) {
            local_130 = (cfstringStruct *)0x0;
          }
          else {
            _objc_alloc_init();
            local_c0 = local_130;
          }
          local_c1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = local_130;
          if ((local_c1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_c0);
          }
          pcVar3 = local_a0;
          _objc_alloc();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_70;
          local_70 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          _objc_storeStrong(&local_b8,0);
        }
      }
    }
    else {
      pcVar2 = &cf_WCFinderTimelineTabViewController;
      _NSClassFromString();
      local_90 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_21 = 0;
        local_34 = 1;
        goto LAB_01630aec;
      }
      pcVar2 = &cf_initWithTargetTabType_;
      _NSSelectorFromString();
      pcVar3 = local_90;
      local_98 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_instancesRespondToSelector__0269da90,pcVar2);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_90;
        _objc_alloc_init();
        pcVar2 = local_70;
        local_70 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      else {
        pcVar3 = local_90;
        _objc_alloc();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_70;
        local_70 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
LAB_0163092c:
    if (local_70 == (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      _NSClassFromString();
      local_100 = pcVar2;
      if (pcVar2 != (cfstringStruct *)0x0) {
        puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isSubclassOfClass__0269e590,puVar5);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = local_100;
          _objc_alloc_init();
          local_108 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
          FUN_0162dbb0(local_108);
          local_21 = 1;
          local_34 = 1;
          _objc_storeStrong(&local_108,0);
          goto LAB_01630aec;
        }
      }
      FUN_016321b4();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_wcrefine_executeAction_;
      local_110 = pcVar2;
      _NSSelectorFromString();
      if ((local_110 == (cfstringStruct *)0x0) ||
         (pcVar2 = local_110,
         (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_respondsToSelector__026ca818,pcVar3),
         ((ulong)pcVar2 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ubNS_u);
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_110,pcVar3,local_30);
        local_21 = 1;
      }
      local_34 = 1;
      _objc_storeStrong(&local_110,0);
    }
    else {
      FUN_0162dbb0(local_70);
      local_21 = 1;
      local_34 = 1;
    }
  }
  else {
    pcVar2 = &cf_NewPersonalQRCodeViewController;
    _NSClassFromString();
    local_78 = pcVar2;
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar2 = &cf_initWithContact_;
      _NSSelectorFromString();
      local_80 = pcVar2;
      FUN_01633bb0();
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar2;
      if ((pcVar2 != (cfstringStruct *)0x0) &&
         (pcVar2 = local_78,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_78,PTR_s_instancesRespondToSelector__0269da90,local_80),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar3 = local_78;
        _objc_alloc();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_70;
        local_70 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if (local_70 == (cfstringStruct *)0x0) {
        pcVar3 = local_78;
        _objc_alloc_init();
        pcVar2 = local_70;
        local_70 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      _objc_storeStrong(&local_88,0);
      goto LAB_0163092c;
    }
    local_21 = 0;
    local_34 = 1;
  }
LAB_01630aec:
  _objc_storeStrong(&local_70,0);
LAB_01630afc:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

