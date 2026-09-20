// sendAnonymousAtMessage:atUserList:toGroup:referMsg: @ 009dc3bc

/* Function Stack Size: 0x30 bytes */

bool WCRefineAnonymousAtHelper::sendAnonymousAtMessage_atUserList_toGroup_referMsg_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  undefined *puVar8;
  cfstringStruct *local_f8;
  cfstringStruct *local_e0;
  char *local_a8;
  byte local_99;
  char *local_98;
  ID local_90;
  char *local_88;
  char *local_80;
  undefined4 local_74;
  cfstringStruct *local_70;
  ID local_68;
  cfstringStruct *local_60;
  ulong local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  pcVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_e0 = &::cf___;
  }
  else {
    local_e0 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_e0;
  IVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_normalizedAtUserList__026ab0a8,local_48);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_68 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_f8 = &::cf___;
  }
  else {
    local_f8 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_f8;
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (((pcVar2 == (cfstringStruct *)0x0) ||
      (IVar3 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
      IVar3 == 0)) ||
     (pcVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    local_21 = 0;
    local_74 = 1;
    goto LAB_009dccdc;
  }
  IVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_isAtAllSentinel__026ab090,local_68);
  if ((IVar3 & 1) != 0) {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_wcr_memberAtUserListForGroup__026ab0b0,local_60);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_68;
    local_68 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if (IVar3 == 0) {
      local_21 = 0;
      local_74 = 1;
      goto LAB_009dccdc;
    }
  }
  pcVar5 = "CMessageWrap";
  _objc_getClass();
  pcVar6 = "SettingUtil";
  local_80 = pcVar5;
  _objc_getClass();
  IVar3 = local_30;
  local_88 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_messageMgr_026ab070);
  _objc_retainAutoreleasedReturnValue();
  local_90 = IVar3;
  if (((local_80 == (char *)0x0) || (local_88 == (char *)0x0)) || (IVar3 == 0)) {
    local_21 = 0;
    local_74 = 1;
  }
  else {
    pcVar5 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_getLocalUsrName__0269ce98,0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      local_21 = 0;
      local_74 = 1;
    }
    else {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_isValidReferMsg__026ab060,local_58);
      local_99 = (byte)IVar3;
      pcVar5 = local_80;
      _objc_alloc();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a8 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      if (local_a8 == (char *)0x0) {
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setM_nsFromUsr__0269d408,local_98);
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setM_nsToUsr__0269d410,local_60);
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setM_uiStatus__0269d418,2);
        pcVar5 = local_a8;
        puVar1 = PTR_s_setM_uiCreateTime__0269d428;
        IVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_genSendTime_026ab0b8);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar1,IVar3);
        puVar1 = PTR_s_updateForReferMsg_replyContent__0269d430;
        if ((local_99 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setM_nsContent__0269ef88,local_70);
        }
        else {
          pcVar5 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_respondsToSelector__026ca818,
                     PTR_s_updateForReferMsg_replyContent__0269d430);
          if (((ulong)pcVar5 & 1) == 0) {
            local_21 = 0;
            goto LAB_009dccac;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setM_nsContent__0269ef88,local_70);
          pcVar5 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsDesc__026ab0c0);
          if (((ulong)pcVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setM_nsDesc__026ab0c0,&::cf___);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setM_nsTitle__026a59a8,local_70);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setM_uiAppMsgInnerType__0269d400,0x39);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setReferingMessageWrap__026ab0c8,local_58);
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,puVar1,local_58,local_70);
          pcVar5 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsOriginTitle__026ab0d0)
          ;
          if (((ulong)pcVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_setM_nsOriginTitle__026ab0d0,local_70);
          }
          uVar7 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setReferHostMsg__0269d438);
          if ((uVar7 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setReferHostMsg__0269d438,local_a8)
            ;
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setM_nsAtUserList__026ab0d8,local_68);
        pcVar5 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setM_ignoreSoftBank__026a3638);
        if (((ulong)pcVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setM_ignoreSoftBank__026a3638,1);
        }
        pcVar5 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_UpdateMsgSource_0269d440);
        if (((ulong)pcVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_UpdateMsgSource_0269d440);
        }
        if (((local_99 & 1) != 0) &&
           (pcVar6 = local_a8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_a8,PTR_s_respondsToSelector__026ca818,
                      PTR_s_AddTagToMsgSource_value__026ab0e0), pcVar5 = local_a8,
           puVar1 = PTR_s_AddTagToMsgSource_value__026ab0e0, ((ulong)pcVar6 & 1) != 0)) {
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar1,&cf_pua);
          (*(code *)PTR__objc_release_02578630)(puVar8);
        }
        pcVar2 = &cf_AddAppMsg_MsgWrap_Data_Scene_;
        _NSSelectorFromString();
        if (((local_99 & 1) == 0) ||
           (IVar3 = local_90,
           (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_respondsToSelector__026ca818,pcVar2)
           , (IVar3 & 1) == 0)) {
          IVar3 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_AddMsg_MsgWrap__0269d040);
          if ((IVar3 & 1) == 0) {
            local_21 = 0;
            goto LAB_009dccac;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_AddMsg_MsgWrap__0269d040,local_60,local_a8);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_90,pcVar2,local_60,local_a8,0,2);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_wcr_clearInputReplyingMessageIfN_026ab0e8);
        local_21 = 1;
      }
LAB_009dccac:
      local_74 = 1;
      _objc_storeStrong(&local_a8,0);
    }
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_90,0);
LAB_009dccdc:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

