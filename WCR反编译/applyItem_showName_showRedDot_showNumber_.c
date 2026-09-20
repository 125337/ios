// applyItem:showName:showRedDot:showNumber: @ 015e0fac

/* Function Stack Size: 0x24 bytes */

void WCRQuickChatCellView::applyItem_showName_showRedDot_showNumber_
               (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5,bool param_6)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  undefined4 local_10c;
  undefined1 local_5d;
  byte local_5c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isEqualToString__0269ccc8);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUsername__026a2510);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_displayName_026ac378);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameLabel_026ad1e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameLabel_026ad1e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  FUN_015e16a4();
  FUN_015e155c();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameLabel_026ad1e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  bVar1 = true;
  if ((((byte)IVar4 ^ 1) & 1) == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avatarHost_026b1098);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar5 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_28;
  if (bVar1) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_wcr_updateHeadForUsername__026b10b8);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_unread_026b10c0);
  bVar1 = (int)uVar3 == 0;
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_asRedDot_026b10c8);
  IVar2 = local_28;
  local_5c = 0;
  local_5d = 0;
  if ((bVar1) || ((uVar3 & 1) == 0)) {
    if ((bVar1) || ((param_6 & 1) == 0)) {
      if ((!bVar1) && ((param_5 & 1) != 0)) {
        local_5c = 1;
        local_5d = 1;
      }
    }
    else {
      local_5c = 1;
      local_5d = 0;
    }
  }
  else {
    local_5c = (byte)param_5 & 1;
    local_5d = 1;
  }
  if (local_5c == 0) {
    local_10c = 0;
  }
  else {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_unread_026b10c0);
    local_10c = (undefined4)uVar3;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_wcr_applyOfficialBadgeUnread_asR_026b10d0,local_10c,local_5d);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
  _objc_storeStrong(&local_38,0);
  return;
}

