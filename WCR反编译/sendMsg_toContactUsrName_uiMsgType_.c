// sendMsg:toContactUsrName:uiMsgType: @ 00fa689c

/* Function Stack Size: 0x24 bytes */

void WCRefineHelper::sendMsg_toContactUsrName_uiMsgType_
               (ID param_1,SEL param_2,ID param_3,ID param_4,int param_5)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *local_c0;
  cfstringStruct *local_a8;
  char *local_88;
  char *local_80;
  char *local_78;
  cfstringStruct *local_70;
  char *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  int local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  pcVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_44 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_a8 = &::cf___;
  }
  else {
    local_a8 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_40;
  local_50 = local_a8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_c0 = &::cf___;
  }
  else {
    local_c0 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (local_c0 == (cfstringStruct *)0x0) {
    local_5c = 1;
  }
  else {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = "CMessageMgr";
    _objc_getClass("CMessageMgr");
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (local_68 == (char *)0x0) {
      local_5c = 1;
    }
    else {
      pcVar2 = &cf_sendMsg_toContactUsrName_;
      _NSSelectorFromString();
      pcVar3 = local_68;
      local_70 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar2);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = "CMessageWrap";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar4 = "SettingUtil";
        local_78 = pcVar3;
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setM_nsFromUsr__0269d408,pcVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setM_nsContent__0269ef88,local_50);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setM_nsToUsr__0269d410,local_58);
        pcVar3 = "MMServiceCenter";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = "MMNewSessionMgr";
        _objc_getClass("MMNewSessionMgr");
        pcVar5 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_78;
        pcVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_GenSendMsgTime_0269d420);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setM_uiCreateTime__0269d428,pcVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setM_uiStatus__0269d418,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_AddMsg_MsgWrap__0269d040,local_58,local_78);
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_78,0);
        local_5c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_performSelector_withObject_withO_026ca7c8,local_70,local_50,
                   local_58);
        local_5c = 1;
      }
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

