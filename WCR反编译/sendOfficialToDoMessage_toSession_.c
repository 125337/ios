// sendOfficialToDoMessage:toSession: @ 01f1ca10

/* Function Stack Size: 0x20 bytes */

ID __thiscall
WCRefineToDoStore::sendOfficialToDoMessage_toSession_
          (WCRefineToDoStore *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  char *pcVar2;
  ID IVar3;
  char *pcVar4;
  char *pcVar5;
  double in_d0;
  int local_a4;
  cfstringStruct *local_90;
  undefined *local_68;
  char *local_60;
  char *local_58;
  undefined4 local_4c;
  ID local_48;
  char *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  pcVar2 = "CMessageWrap";
  _objc_getClass();
  IVar3 = local_20;
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_messageManager_026c8358);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  if (((local_40 == (char *)0x0) || (IVar3 == 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_respondsToSelector__026ca818,PTR_s_AddMsg_MsgWrap__0269d040),
     (IVar3 & 1) == 0)) {
    local_18 = (char *)0x0;
    local_4c = 1;
  }
  else {
    pcVar4 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar2 = "SettingUtil";
    local_58 = pcVar4;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_nsFromUsr__0269d408);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_nsToUsr__0269d410,local_38);
    if (local_30 == (cfstringStruct *)0x0) {
      local_90 = &::cf___;
    }
    else {
      local_90 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_nsContent__0269ef88,local_90);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_uiStatus__0269d418);
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = "MMNewSessionMgr";
    _objc_getClass("MMNewSessionMgr");
    pcVar5 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_GenSendMsgTime_0269d420);
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    if (bVar1) {
      local_68 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a4 = (int)in_d0;
    }
    else {
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_GenSendMsgTime_0269d420);
      local_a4 = (int)pcVar2;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_uiCreateTime__0269d428,local_a4);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_AddMsg_MsgWrap__0269d040,local_38,local_58)
    ;
    pcVar2 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_4c = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

