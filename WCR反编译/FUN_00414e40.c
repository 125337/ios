// FUN_00414e40 @ 00414e40

byte FUN_00414e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *local_2f0;
  ulong local_2a8;
  cfstringStruct *local_218;
  cfstringStruct *local_1e8;
  char *local_140;
  char *local_138;
  char *local_130;
  bool local_121;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  long local_d8;
  ulong local_d0;
  byte local_c8;
  byte local_c7;
  cfstringStruct *local_c0;
  undefined *local_b8;
  long local_b0;
  byte local_a1;
  long local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_81;
  ulong local_78;
  byte local_6d;
  undefined4 local_6c;
  long local_68 [3];
  long local_50;
  byte local_41;
  ulong local_40;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  lVar2 = local_30;
  local_41 = param_4;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_38;
  local_50 = lVar2;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_50;
  local_68[0] = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_68[0], (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_21 = 0;
    local_6c = 1;
  }
  else {
    local_6d = 0;
    if (((local_41 & 1) != 0) && (local_40 != 0)) {
      local_78 = 0;
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_n64MesSvrID_0269d3e0);
      local_81 = 1;
      uVar5 = local_40;
      local_78 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_msgCanBeRefered_0269d3e8);
      if ((uVar5 & 1) != 0) {
        uVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_msgCanBeRefered_0269d3e8);
        local_81 = (byte)uVar4;
      }
      local_6d = 0;
      if (0 < (long)local_78) {
        local_6d = local_81;
      }
      local_6d = local_6d & 1;
    }
    pcVar6 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    pcVar6 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_1e8 = &cf___;
    }
    else {
      local_1e8 = local_90;
    }
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_50;
    local_98 = local_1e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = lVar2;
    local_b0 = lVar2;
    puVar7 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAIStore_026ce048,PTR_s_eventReplyStripVoicePrefixFromTe_0269d770,
               &local_b0);
    _objc_storeStrong(&local_a0,local_b0);
    local_a1 = (byte)puVar7;
    puVar7 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAIStore_026ce048,PTR_s_eventReplyAIDirectiveFromText__0269d778,local_a0);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      if ((local_6d & 1) == 0) {
        local_2a8 = 0;
      }
      else {
        local_2a8 = local_40;
      }
      puVar7 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_sendOutgoingText_toContactUsrNam_026a3630,
                 local_50,local_68[0],local_98,local_2a8,(local_6d ^ 1) & 1);
      if (((ulong)puVar7 & 1) == 0) {
        pcVar9 = "CMessageWrap";
        _objc_getClass();
        pcVar10 = "SettingUtil";
        local_100 = pcVar9;
        _objc_getClass();
        local_2f0 = "MMServiceCenter";
        local_108 = pcVar10;
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        local_121 = false;
        bVar1 = local_2f0 == (char *)0x0;
        local_110 = local_2f0;
        if (bVar1) {
          local_2f0 = (char *)0x0;
        }
        else {
          pcVar9 = "CMessageMgr";
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_getService__0269d170,pcVar9);
          _objc_retainAutoreleasedReturnValue();
          local_120 = local_2f0;
        }
        local_121 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = local_2f0;
        if ((local_121 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_120);
        }
        if ((((local_100 == (char *)0x0) || (local_118 == (char *)0x0)) ||
            (pcVar9 = local_118,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_respondsToSelector__026ca818,PTR_s_AddMsg_MsgWrap__0269d040),
            ((ulong)pcVar9 & 1) == 0)) ||
           (pcVar9 = local_100,
           _class_getInstanceMethod(local_100,PTR_s_updateForReferMsg_replyContent__0269d430),
           pcVar9 == (char *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_50,
                     local_68[0]);
          local_21 = 1;
          local_6c = 1;
        }
        else {
          pcVar9 = local_100;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_initWithMsgType__0269d3f8,0x31);
          local_130 = pcVar9;
          if (pcVar9 == (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_50
                       ,local_68[0]);
            local_21 = 1;
            local_6c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar9,PTR_s_setM_uiAppMsgInnerType__0269d400,0x39);
            local_138 = (char *)0x0;
            if ((local_108 != (char *)0x0) &&
               (pcVar9 = local_108,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_108,PTR_s_respondsToSelector__026ca818,
                          PTR_s_getLocalUsrName__0269ce98), ((ulong)pcVar9 & 1) != 0)) {
              pcVar10 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_getLocalUsrName__0269ce98,0);
              _objc_retainAutoreleasedReturnValue();
              pcVar9 = local_138;
              local_138 = pcVar10;
              (*(code *)PTR__objc_release_02578630)(pcVar9);
            }
            pcVar9 = local_138;
            puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar7);
            if ((((ulong)pcVar9 & 1) != 0) &&
               (pcVar9 = local_138,
               (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
               pcVar9 != (char *)0x0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_setM_nsFromUsr__0269d408,local_138);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_setM_nsToUsr__0269d410,local_68[0]);
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setM_uiStatus__0269d418,1);
            pcVar10 = local_110;
            pcVar9 = "MMNewSessionMgr";
            _objc_getClass();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_getService__0269d170,pcVar9);
            _objc_retainAutoreleasedReturnValue();
            local_140 = pcVar10;
            if ((pcVar10 != (char *)0x0) &&
               ((*(code *)PTR__objc_msgSend_02578628)
                          (pcVar10,PTR_s_respondsToSelector__026ca818,PTR_s_GenSendMsgTime_0269d420)
               , ((ulong)pcVar10 & 1) != 0)) {
              pcVar9 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_GenSendMsgTime_0269d420);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_setM_uiCreateTime__0269d428,(ulong)pcVar9 & 0xffffffff);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_updateForReferMsg_replyContent__0269d430,local_40,local_50);
            uVar4 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setReferHostMsg__0269d438);
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_setReferHostMsg__0269d438,local_130);
            }
            pcVar9 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_respondsToSelector__026ca818,
                       PTR_s_setM_ignoreSoftBank__026a3638);
            if (((ulong)pcVar9 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setM_ignoreSoftBank__026a3638,1)
              ;
            }
            pcVar9 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_UpdateMsgSource_0269d440);
            if (((ulong)pcVar9 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_UpdateMsgSource_0269d440);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_AddMsg_MsgWrap__0269d040,local_68[0],local_130);
            local_21 = 1;
            local_6c = 1;
            _objc_storeStrong(&local_140);
            _objc_storeStrong(&local_138,0);
          }
          _objc_storeStrong(&local_130,0);
        }
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_110,0);
      }
      else {
        local_21 = 1;
        local_6c = 1;
      }
    }
    else {
      pcVar6 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_218 = &cf__eRSeg;
      }
      else {
        local_218 = local_90;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_218;
      puVar7 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
      if (puVar7 != (undefined *)0x0) {
        pcVar8 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_stringByAppendingFormat__026a2088,&cf_space_s_);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_c0;
        local_c0 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      lVar2 = local_68[0];
      pcVar6 = local_c0;
      puVar7 = PTR_WCRefineAIClient_026ce080;
      local_f8 = PTR___NSConcreteStackBlock_02578660;
      local_f0 = 0xc2000000;
      local_ec = 0;
      local_e8 = FUN_00417114;
      local_e0 = &DAT_0257d228;
      local_c8 = local_a1 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_40;
      local_d8 = lVar2;
      local_c7 = local_6d & 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_generateTextWithInstruction_sour_0269d0d0,&cf_9hncagmo_ub,pcVar6,0,
                 &local_f8);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar7);
      local_21 = 1;
      local_6c = 1;
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_c0,0);
    }
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

