// sendOutgoingText:toContactUsrName:fallbackSpokenText:replyingMessage:allowPlainFallback: @ 00fa6ea4

/* Function Stack Size: 0x34 bytes */

bool WCRefineHelper::
     sendOutgoingText_toContactUsrName_fallbackSpokenText_replyingMessage_allowPlainFallback_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_1b0;
  cfstringStruct *local_198;
  cfstringStruct *local_118;
  cfstringStruct *local_100;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  long local_88;
  cfstringStruct *local_80;
  byte local_78;
  undefined4 local_74;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_59;
  long local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  pcVar4 = local_40;
  local_59 = (byte)param_7;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    local_100 = &::cf___;
  }
  else {
    local_100 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar4 = local_48;
  local_68 = local_100;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    local_118 = &::cf___;
  }
  else {
    local_118 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_118;
  pcVar4 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if ((pcVar4 == (cfstringStruct *)0x0) ||
     (pcVar4 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
     pcVar4 == (cfstringStruct *)0x0)) {
    local_21 = 0;
    local_74 = 1;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    pcVar4 = local_50;
    puVar3 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar5 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_68;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_00fa7550;
      local_a8 = &DAT_025838f0;
      local_80 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar4 = local_70;
      local_a0 = pcVar1;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar1 = local_50;
      local_98 = pcVar4;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_58;
      local_90 = pcVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = lVar2;
      local_78 = local_59 & 1;
      _dispatch_async(puVar3,&local_c0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_21 = local_59 & 1;
      local_74 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar4 & 1) == 0) {
        local_198 = &::cf___;
      }
      else {
        local_198 = local_50;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
      if (local_198 == (cfstringStruct *)0x0) {
        pcVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_plainTextFromMessageWrap__026a3628,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_1b0 = &::cf___;
        }
        _objc_storeStrong(&local_c8,local_1b0);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      puVar3 = PTR_WCRefineVoiceCloneHelper_026cea40;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoiceCloneHelper_026cea40,
                 PTR_s_tryHandleOutgoingPrefixText_toCh_026ace70,local_68,local_70,local_c8);
      if (((ulong)puVar3 & 1) == 0) {
        pcVar4 = local_70;
        FUN_00fa75ac();
        _objc_retainAutoreleasedReturnValue();
        local_d0 = pcVar4;
        if (((pcVar4 == (cfstringStruct *)0x0) || (local_58 == 0)) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_respondsToSelector__026ca818,
                       PTR_s_SendTextMessage_replyingMessage__0269d030), ((ulong)pcVar4 & 1) == 0))
        {
          if ((local_d0 == (cfstringStruct *)0x0) ||
             (pcVar4 = local_d0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_SendTextMessage__0269d028)
             , ((ulong)pcVar4 & 1) == 0)) {
            if ((local_59 & 1) == 0) {
              local_21 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_68,local_70);
              local_21 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_SendTextMessage__0269d028,local_68)
            ;
            local_21 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_SendTextMessage_replyingMessage__0269d030,local_68,local_58,0);
          local_21 = 1;
        }
        local_74 = 1;
        _objc_storeStrong(&local_d0,0);
      }
      else {
        local_21 = 1;
        local_74 = 1;
      }
      _objc_storeStrong(&local_c8,0);
    }
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

