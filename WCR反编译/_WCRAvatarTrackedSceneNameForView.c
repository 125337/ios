// _WCRAvatarTrackedSceneNameForView @ 00939528

void _WCRAvatarTrackedSceneNameForView(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  cfstringStruct *local_60;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  bVar1 = local_28 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_60 = &cf___;
  }
  else {
    local_60 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar2 = local_28;
  _WCRAvatarIsChatPageController();
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_28;
    _WCRAvatarViewControllerHierarchyContainsClassName(local_28,&cf_NewMainFrameViewController);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_28;
      _WCRAvatarViewControllerHierarchyContainsClassName(local_28,&cf_SessionSelectController);
      if ((((ulong)pcVar2 & 1) == 0) &&
         (pcVar2 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_containsString__0269d0b0,&cf_SessionSelect),
         ((ulong)pcVar2 & 1) == 0)) {
        pcVar2 = local_28;
        _WCRAvatarViewControllerHierarchyContainsClassName(local_28,&cf_ContactsViewController);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_28;
          _WCRAvatarIsMyProfileController();
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_28;
            _WCRAvatarIsFriendProfileController();
            if (((ulong)pcVar2 & 1) == 0) {
              pcVar2 = local_28;
              _WCRAvatarIsMomentsProfileController();
              if ((((ulong)pcVar2 & 1) == 0) &&
                 (uVar3 = local_20, _WCRAvatarIsTextStateProfileScene(local_20,local_28),
                 (uVar3 & 1) == 0)) {
                local_18 = (cfstringStruct *)0x0;
              }
              else {
                uVar3 = local_20;
                _WCRAvatarFindAncestorByClassName(local_20,&cf_TLProfileExpandableHeaderView,10);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_release_02578630)();
                uVar4 = local_20;
                _WCRAvatarIsTLProfileImageScene();
                uVar5 = local_20;
                _WCRAvatarIsTextStateProfileScene(local_20,local_28);
                uVar6 = local_20;
                _WCRAvatarIsStrictMomentsProfileScene
                          (local_20,local_28,uVar3 != 0,(byte)uVar4 & 1,(byte)uVar5 & 1);
                local_18 = &cf_moments_profile;
                if ((uVar6 & 1) == 0) {
                  local_18 = &cf_moments_list;
                }
                (*(code *)PTR__objc_retain_02578638)();
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_friend_profile;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_my_profile;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_contacts_list;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_wechat_list;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_wechat_list;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_chat_page;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

