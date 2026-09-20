// FUN_00166fc8 @ 00166fc8

void FUN_00166fc8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  ulong local_148;
  ulong local_c8;
  bool local_a1;
  ulong local_a0;
  ulong local_98;
  char *local_90;
  char *local_88;
  ulong local_80;
  ulong local_78;
  long local_70;
  undefined4 local_64;
  char *local_60;
  byte local_51;
  ulong local_50;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_51 = 0;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_userData_0269f6e8);
  if ((uVar1 & 1) == 0) {
    local_c8 = 0;
  }
  else {
    local_c8 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_userData_0269f6e8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_c8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_c8;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar2 = "ChatRoomTopMsgInfo";
  _objc_getClass();
  local_60 = pcVar2;
  if (((local_38 == 0) || (pcVar2 == (char *)0x0)) ||
     (uVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,pcVar2),
     (uVar1 & 1) == 0)) {
    local_64 = 1;
  }
  else {
    local_70 = 0;
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_userName_0269f7b8);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userName_0269f7b8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_78 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) != 0) {
        _objc_storeStrong(&local_70,local_78);
      }
      _objc_storeStrong(&local_78,0);
    }
    local_80 = 0;
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_msgSvrID_0269f678);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgSvrID_0269f678);
      local_80 = uVar1;
    }
    lVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if ((lVar4 == 0) || (local_80 == 0)) {
      local_64 = 1;
    }
    else {
      pcVar2 = "CMessageMgr";
      _objc_getClass();
      FUN_0015f0b8();
      _objc_retainAutoreleasedReturnValue();
      local_90 = (char *)0x0;
      local_88 = pcVar2;
      if ((pcVar2 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_n64SvrID__0269d5f0),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar5 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_GetMsg_n64SvrID__0269d5f0,local_70,local_80);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_90;
        local_90 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getMsgContentViewController_0269f638);
      local_a1 = (uVar1 & 1) == 0;
      if (local_a1) {
        local_148 = 0;
      }
      else {
        local_148 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getMsgContentViewController_0269f638);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_148;
      }
      local_a1 = !local_a1;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = local_148;
      if (local_a1) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      puVar3 = PTR_WCRefineHelper_026ce000;
      if (local_90 == (char *)0x0) {
        pcVar6 = &cf_ChatRoomTopMessage_MessageNotExist;
        FUN_001604fc(&cf_ChatRoomTopMessage_MessageNotExist,&cf_mo_NX__W);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        local_64 = 1;
      }
      else {
        if ((local_98 != 0) &&
           (uVar1 = local_98,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_98,PTR_s_respondsToSelector__026ca818,
                      PTR_s_scrollToMessage_highlight_margin_0269ec38), (uVar1 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4054000000000000,local_98,PTR_s_scrollToMessage_highlight_margin_0269ec38,
                     local_90,1);
        }
        if ((local_98 != 0) &&
           (uVar1 = local_98,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_98,PTR_s_respondsToSelector__026ca818,
                      PTR_s_hideExpandViewWithAnimated__0269f7c0), (uVar1 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_hideExpandViewWithAnimated__0269f7c0,1);
        }
        local_64 = 0;
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

