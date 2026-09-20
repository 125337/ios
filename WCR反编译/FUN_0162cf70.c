// FUN_0162cf70 @ 0162cf70

byte FUN_0162cf70(undefined *param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  cfstringStruct *local_50;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  byte local_29;
  undefined *local_28;
  undefined *local_20;
  byte local_11;
  
  FUN_0162be00();
  _objc_retainAutoreleasedReturnValue();
  local_29 = 0;
  local_68 = param_1;
  if (param_1 == (undefined *)0x0) {
    local_68 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_68;
  }
  local_29 = param_1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_68;
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar3 = local_20;
  if (local_20 == (undefined *)0x0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    pcVar2 = &cf_MyFavoritesViewController;
    _NSClassFromString(&cf_MyFavoritesViewController);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
    puVar4 = local_20;
    if (((ulong)puVar3 & 1) == 0) {
      pcVar2 = &cf_ChatRoomListViewController;
      _NSClassFromString(&cf_ChatRoomListViewController);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,pcVar2);
      puVar3 = local_20;
      if (((ulong)puVar4 & 1) == 0) {
        pcVar2 = &cf_ContactRelatedChatRoomListViewController;
        _NSClassFromString(&cf_ContactRelatedChatRoomListViewController);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
        puVar4 = local_20;
        if (((ulong)puVar3 & 1) == 0) {
          pcVar2 = &cf_BrandContactsViewController;
          _NSClassFromString(&cf_BrandContactsViewController);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,pcVar2);
          puVar3 = local_20;
          if (((ulong)puVar4 & 1) == 0) {
            local_50 = (cfstringStruct *)0x0;
            bVar1 = false;
            pcVar2 = &cf_BaseMsgContentViewController;
            _NSClassFromString(&cf_BaseMsgContentViewController);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
            puVar4 = local_20;
            if (((ulong)puVar3 & 1) == 0) {
              pcVar2 = &cf_WCTimeLineViewController;
              _NSClassFromString(&cf_WCTimeLineViewController);
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,pcVar2);
              puVar3 = local_20;
              if (((ulong)puVar4 & 1) == 0) {
                pcVar2 = &cf_FindFriendEntryViewController;
                _NSClassFromString(&cf_FindFriendEntryViewController);
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
                puVar4 = local_20;
                if (((ulong)puVar3 & 1) == 0) {
                  pcVar2 = &cf_WCFinderTimelineTabViewController;
                  _NSClassFromString(&cf_WCFinderTimelineTabViewController);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,pcVar2)
                  ;
                  puVar3 = local_20;
                  if (((ulong)puVar4 & 1) == 0) {
                    pcVar2 = &cf_WAMainListViewController;
                    _NSClassFromString(&cf_WAMainListViewController);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
                    puVar4 = local_20;
                    if (((ulong)puVar3 & 1) == 0) {
                      pcVar2 = &cf_WCRefineFileManagerViewController;
                      _NSClassFromString(&cf_WCRefineFileManagerViewController);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar4,PTR_s_isKindOfClass__0269cd68,pcVar2);
                      puVar3 = local_20;
                      if (((ulong)puVar4 & 1) == 0) {
                        pcVar2 = &cf_ContactsViewController;
                        _NSClassFromString(&cf_ContactsViewController);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
                        puVar4 = local_20;
                        if (((ulong)puVar3 & 1) == 0) {
                          pcVar2 = &cf_NewSettingViewController;
                          _NSClassFromString(&cf_NewSettingViewController);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar4,PTR_s_isKindOfClass__0269cd68,pcVar2);
                          puVar3 = local_20;
                          if (((ulong)puVar4 & 1) == 0) {
                            pcVar2 = &cf_NewMainFrameViewController;
                            _NSClassFromString(&cf_NewMainFrameViewController);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (puVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
                            if (((ulong)puVar3 & 1) != 0) {
                              local_50 = &cf_onSearch;
                              _NSSelectorFromString();
                            }
                          }
                          else {
                            local_50 = &cf_handleSearchBarTapped_;
                            _NSSelectorFromString();
                            bVar1 = true;
                          }
                        }
                        else {
                          local_50 = &cf_onSearchButtonTapped;
                          _NSSelectorFromString();
                        }
                      }
                      else {
                        local_50 = &cf_toggleSearch;
                        _NSSelectorFromString();
                      }
                    }
                    else {
                      local_50 = &cf_onTapSearchArea;
                      _NSSelectorFromString();
                    }
                  }
                  else {
                    local_50 = &cf_onSearchClicked;
                    _NSSelectorFromString();
                  }
                }
                else {
                  local_50 = &cf_clickOpenSearchEntry;
                  _NSSelectorFromString();
                }
              }
              else {
                local_50 = &cf_WCRefine_onMomentsSearchButtonTapped;
                _NSSelectorFromString();
              }
            }
            else {
              local_50 = &cf_WCRefine_openChatRecordSearch;
              _NSSelectorFromString();
              bVar1 = false;
            }
            if ((local_50 == (cfstringStruct *)0x0) ||
               (puVar3 = local_20,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_20,PTR_s_respondsToSelector__026ca818,local_50),
               ((ulong)puVar3 & 1) == 0)) {
              local_11 = 0;
              local_30 = 1;
            }
            else {
              if (bVar1) {
                (*(code *)PTR__objc_msgSend_02578628)(local_20,local_50,0);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_20,local_50);
              }
              local_11 = 1;
              local_30 = 1;
            }
            goto LAB_0162d628;
          }
        }
      }
      puVar3 = local_20;
      FUN_01632cd4(local_20,"_searcher");
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = &cf_setActive_animated_completion_;
      local_40 = puVar3;
      _NSSelectorFromString();
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar2);
      local_11 = ((ulong)puVar3 & 1) != 0;
      if ((bool)local_11) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar2,1,1,0);
      }
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      puVar3 = local_20;
      FUN_01632cd4(local_20,"m_searchBar");
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
      local_11 = ((ulong)puVar3 & 1) != 0;
      if ((bool)local_11) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_becomeFirstResponder_0269d108);
      }
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
  }
LAB_0162d628:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

