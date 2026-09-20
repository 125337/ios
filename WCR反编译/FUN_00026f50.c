// FUN_00026f50 @ 00026f50

byte FUN_00026f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  uint local_104;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  byte local_72;
  byte local_71;
  ulong local_70;
  ulong local_68;
  int local_60;
  ulong local_50;
  long local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_30;
  local_48 = param_4;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if ((uVar2 == 0) ||
     (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_21 = 0;
    local_60 = 1;
  }
  else {
    if ((local_48 == 1) &&
       ((uVar2 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom),
        (uVar2 & 1) != 0 && (local_40 != 0)))) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_nsRealChatUsr_0269d190);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_71 = 0;
      uVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      local_104 = 0;
      if (uVar2 == 0) {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_104 = (uint)uVar2 ^ 1;
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if ((local_104 & 1) != 0) {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        FUN_0001a2e4();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_68;
        local_68 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if ((uVar2 == 0) ||
         (puVar5 = PTR_WCRefineAnonymousAtHelper_026ce0e0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (PTR_WCRefineAnonymousAtHelper_026ce0e0,
                    PTR_s_sendAnonymousAtMessage_atUserLis_0269d3d8,local_50,local_68,local_38,
                    local_40), ((ulong)puVar5 & 1) == 0)) {
        local_60 = 0;
      }
      else {
        local_21 = 1;
        local_60 = 1;
      }
      _objc_storeStrong(&local_68,0);
      if (local_60 != 0) goto LAB_00027a60;
    }
    uVar4 = local_38;
    uVar3 = local_40;
    uVar2 = local_50;
    local_72 = local_48 != 2;
    bVar1 = false;
    if ((bool)local_72) {
      uVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_n64MesSvrID_0269d3e0);
      bVar1 = uVar6 != 0;
    }
    FUN_00027af0(uVar2,uVar4,uVar3,bVar1);
    if ((uVar2 & 1) == 0) {
      if (((((local_72 & 1) == 0) || (local_40 == 0)) ||
          (uVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_n64MesSvrID_0269d3e0), uVar2 == 0))
         || ((uVar2 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_msgCanBeRefered_0269d3e8),
             (uVar2 & 1) != 0 &&
             (uVar2 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgCanBeRefered_0269d3e8),
             (uVar2 & 1) == 0)))) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_50,
                   local_38);
        local_21 = 1;
        local_60 = 1;
      }
      else {
        pcVar7 = "CMessageWrap";
        _objc_getClass();
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_initWithMsgType__0269d3f8,0x31);
        local_80 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_setM_uiAppMsgInnerType__0269d400,0x39);
        pcVar7 = "SettingUtil";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_getLocalUsrName__0269ce98,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setM_nsFromUsr__0269d408);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setM_nsToUsr__0269d410,local_38);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setM_uiStatus__0269d418,1);
        pcVar7 = "MMServiceCenter";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = "MMNewSessionMgr";
        local_88 = pcVar7;
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_getService__0269d170,pcVar8);
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar7,PTR_s_respondsToSelector__026ca818,PTR_s_GenSendMsgTime_0269d420);
        if (((ulong)pcVar7 & 1) != 0) {
          pcVar7 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_GenSendMsgTime_0269d420);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_setM_uiCreateTime__0269d428,(ulong)pcVar7 & 0xffffffff);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_updateForReferMsg_replyContent__0269d430,local_40,local_50);
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setReferHostMsg__0269d438);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setReferHostMsg__0269d438,local_80);
        }
        pcVar7 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_UpdateMsgSource_0269d440);
        if (((ulong)pcVar7 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_UpdateMsgSource_0269d440);
        }
        pcVar8 = local_88;
        pcVar7 = "CMessageMgr";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_getService__0269d170,pcVar7);
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar8,PTR_s_AddMsg_MsgWrap__0269d040,local_38,local_80);
        local_21 = 1;
        local_60 = 1;
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_80,0);
      }
    }
    else {
      local_21 = 1;
      local_60 = 1;
    }
  }
LAB_00027a60:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

