// FUN_006d6a34 @ 006d6a34

void FUN_006d6a34(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  cfstringStruct *local_590;
  byte local_518;
  byte local_514;
  uint local_50c;
  uint local_504;
  undefined *local_4a0;
  undefined *local_498;
  cfstringStruct *local_470;
  cfstringStruct *local_3f8;
  uint local_344;
  char *local_280;
  undefined *local_278;
  cfstringStruct *local_270;
  byte local_261;
  cfstringStruct *local_260;
  byte local_251;
  cfstringStruct *local_250;
  undefined *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  byte local_219;
  undefined *local_218;
  undefined *local_210;
  byte local_201;
  cfstringStruct *local_200;
  undefined *local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  long local_1b0;
  cfstringStruct *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  byte local_189;
  cfstringStruct *local_188;
  byte local_179;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  undefined *local_168;
  cfstringStruct *local_160;
  byte local_152;
  byte local_151;
  cfstringStruct *local_150;
  byte local_143;
  byte local_142;
  byte local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  uint local_120;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_110 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_110,param_2);
  if ((local_110 == (cfstringStruct *)0x0) ||
     (pcVar3 = local_110,
     (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_uiMessageType_0269d0a8),
     (int)pcVar3 != 0x31)) {
    local_120 = 1;
    goto LAB_006d894c;
  }
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_128 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_redEnvelopAutoReceiveEnable_026a0ae0);
  if (((ulong)puVar4 & 1) == 0) {
    local_120 = 1;
  }
  else {
    pcVar3 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_oWCPayInfoItem_0269d6f0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_130 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_hasPrefix__0269d320,
               &cf_wxpay___c2cbizmessagehandler_hongbao_receivehongbao_);
    if (((ulong)pcVar3 & 1) == 0) {
      local_120 = 1;
    }
    else {
      uVar2 = 0;
      FUN_01138c30(&cf_auto_red_envelop,0);
      if ((uVar2 & 1) == 0) {
        local_120 = 1;
      }
      else {
        if (DAT_028cc270 == (cfstringStruct *)0x0) {
          pcVar6 = "MMServiceCenter";
          _objc_getClass();
          DAT_028cc270 = (cfstringStruct *)pcVar6;
        }
        pcVar3 = DAT_028cc270;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        if (DAT_028cc278 == (char *)0x0) {
          pcVar6 = "CContactMgr";
          _objc_getClass();
          DAT_028cc278 = pcVar6;
        }
        pcVar6 = DAT_028cc278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_class_0269cd60);
        pcVar5 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar6);
        _objc_retainAutoreleasedReturnValue();
        local_138 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_getSelfContact_0269da60);
        _objc_retainAutoreleasedReturnValue();
        local_140 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_120 = 1;
        }
        else {
          pcVar3 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsFromUsr_0269d088);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_m_nsUsrName_0269d638);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_141 = (byte)pcVar7;
          pcVar3 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsFromUsr_0269d088);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_142 = (byte)pcVar5;
          local_151 = 0;
          local_344 = 0;
          if ((local_141 & 1) != 0) {
            pcVar3 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsToUsr_0269d090);
            _objc_retainAutoreleasedReturnValue();
            local_151 = 1;
            local_150 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_344 = (uint)pcVar3;
          }
          if ((local_151 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_150);
          }
          local_143 = (byte)local_344 & 1;
          local_152 = 1;
          if ((local_142 & 1) == 0) {
            local_152 = local_143;
          }
          local_160 = (cfstringStruct *)0x0;
          if ((local_344 & 1) == 0) {
            if ((local_142 & 1) == 0) {
              if ((local_141 & 1) == 0) {
                pcVar5 = local_110;
                (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsFromUsr_0269d088);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_160;
                local_160 = pcVar5;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
              }
            }
            else {
              pcVar3 = local_110;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsRealChatUsr_0269d190
                        );
              if (((ulong)pcVar3 & 1) != 0) {
                pcVar5 = local_110;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_110,PTR_s_performSelector__026ca7b8,PTR_s_m_nsRealChatUsr_0269d190)
                ;
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_160;
                local_160 = pcVar5;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
              }
              pcVar3 = local_160;
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((((ulong)pcVar3 & 1) == 0) ||
                 (pcVar3 = local_160,
                 (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
                 pcVar3 == (cfstringStruct *)0x0)) {
                pcVar5 = local_110;
                (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsFromUsr_0269d088);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_160;
                local_160 = pcVar5;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
              }
            }
          }
          else {
            pcVar5 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_m_nsUsrName_0269d638);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_160;
            local_160 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          puVar4 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_redEnvelopSkipPersonList_026a0ae8);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_160;
          puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_168 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar8);
          if ((((ulong)pcVar3 & 1) == 0) ||
             (pcVar3 = local_160,
             (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
             puVar4 = local_168, pcVar3 == (cfstringStruct *)0x0)) {
LAB_006d7444:
            local_179 = 0;
            local_189 = 0;
            local_3f8 = local_110;
            if ((local_143 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsFromUsr_0269d088);
              _objc_retainAutoreleasedReturnValue();
              local_189 = 1;
              local_188 = local_3f8;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsToUsr_0269d090);
              _objc_retainAutoreleasedReturnValue();
              local_179 = 1;
              local_178 = local_3f8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_170 = local_3f8;
            if ((local_189 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_188);
            }
            if ((local_179 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_178);
            }
            if ((local_152 & 1) == 0) {
LAB_006d7744:
              puVar4 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_redEnvelopKeywordFilter_026a6b30);
              _objc_retainAutoreleasedReturnValue();
              local_1a0 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
              if (puVar4 == (undefined *)0x0) {
LAB_006d7a84:
                local_201 = 0;
                if ((local_152 & 1) == 0) {
                  if (((local_141 & 1) == 0) &&
                     (puVar4 = local_128,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_128,PTR_s_redEnvelopPersonalRedEnvelopEnab_026a6b40),
                     ((ulong)puVar4 & 1) != 0)) {
                    local_201 = 1;
                  }
LAB_006d7d00:
                  if ((local_201 & 1) == 0) {
                    local_120 = 1;
                  }
                  else {
                    pcVar3 = local_130;
                    FUN_006d8af4();
                    _objc_retainAutoreleasedReturnValue();
                    local_228 = pcVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar3,PTR_s_stringForKey__026a33a0,&cf_sendid);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar5 = local_228;
                    local_230 = pcVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_228,PTR_s_stringForKey__026a33a0,&cf_channelid);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar3 = local_228;
                    local_238 = pcVar5;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_228,PTR_s_stringForKey__026a33a0,&cf_msgtype);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar5 = local_230;
                    local_240 = pcVar3;
                    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_length_0269cca0);
                    if (((pcVar5 == (cfstringStruct *)0x0) ||
                        (pcVar3 = local_238,
                        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_length_0269cca0),
                        pcVar3 == (cfstringStruct *)0x0)) ||
                       (pcVar3 = local_240,
                       (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_length_0269cca0),
                       pcVar3 == (cfstringStruct *)0x0)) {
                      local_120 = 1;
                    }
                    else {
                      puVar4 = PTR_WCRefineRedEnvelopParam_026ce840;
                      _objc_alloc_init();
                      local_248 = puVar4;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar4,PTR_s_setMsgType__0269f6a0,local_240);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_setSendId__026a6b48,local_230);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_setChannelId__026a6b50,local_238);
                      pcVar3 = local_140;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_140,PTR_s_getContactDisplayName_0269d160);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_setNickName__026a6b58);
                      (*(code *)PTR__objc_release_02578630)(pcVar3);
                      pcVar3 = local_140;
                      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_m_nsHeadImgUrl_026a6b60)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_setHeadImg__026a6b68);
                      (*(code *)PTR__objc_release_02578630)(pcVar3);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_setNativeUrl__026a6b70,local_130);
                      local_251 = 0;
                      local_261 = 0;
                      local_590 = local_110;
                      if ((local_143 & 1) == 0) {
                        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsFromUsr_0269d088);
                        _objc_retainAutoreleasedReturnValue();
                        local_261 = 1;
                        local_260 = local_590;
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsToUsr_0269d090);
                        _objc_retainAutoreleasedReturnValue();
                        local_251 = 1;
                        local_250 = local_590;
                      }
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_setSessionUserName__026a6b78,local_590);
                      if ((local_261 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_260);
                      }
                      if ((local_251 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_250);
                      }
                      pcVar3 = local_228;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_228,PTR_s_stringForKey__026a33a0,&cf_sign);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_setSign__026a6b80);
                      (*(code *)PTR__objc_release_02578630)(pcVar3);
                      pcVar3 = local_110;
                      FUN_006d8cd4(local_110,local_228);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_setWishText__026a6b88);
                      (*(code *)PTR__objc_release_02578630)(pcVar3);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_setIsGroupSender__026a6b90,local_143 & 1);
                      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (param_1,local_248,PTR_s_setDetectTimestamp__026a6b98);
                      (*(code *)PTR__objc_release_02578630)(puVar4);
                      if ((local_143 & 1) == 0) {
                        local_270 = (cfstringStruct *)0x0;
                        pcVar3 = local_110;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_110,PTR_s_respondsToSelector__026ca818,
                                   PTR_s_m_nsRealChatUsr_0269d190);
                        if (((ulong)pcVar3 & 1) != 0) {
                          pcVar5 = local_110;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_110,PTR_s_performSelector__026ca7b8,
                                     PTR_s_m_nsRealChatUsr_0269d190);
                          _objc_retainAutoreleasedReturnValue();
                          pcVar3 = local_270;
                          local_270 = pcVar5;
                          (*(code *)PTR__objc_release_02578630)(pcVar3);
                        }
                        pcVar3 = local_270;
                        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
                        if ((((ulong)pcVar3 & 1) == 0) ||
                           (pcVar3 = local_270,
                           (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_length_0269cca0),
                           pcVar3 == (cfstringStruct *)0x0)) {
                          pcVar5 = local_110;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_110,PTR_s_m_nsFromUsr_0269d088);
                          _objc_retainAutoreleasedReturnValue();
                          pcVar3 = local_270;
                          local_270 = pcVar5;
                          (*(code *)PTR__objc_release_02578630)(pcVar3);
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_248,PTR_s_setSenderUserName__026a6ba0,local_270);
                        _objc_storeStrong(&local_270,0);
                      }
                      else {
                        pcVar3 = local_140;
                        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_m_nsUsrName_0269d638);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_248,PTR_s_setSenderUserName__026a6ba0);
                        (*(code *)PTR__objc_release_02578630)(pcVar3);
                      }
                      puVar4 = PTR_WCRefineRedEnvelopParamQueue_026ce828;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineRedEnvelopParamQueue_026ce828,
                                 PTR_s_sharedQueue_026a69b8);
                      _objc_retainAutoreleasedReturnValue();
                      puVar8 = puVar4;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(puVar4);
                      bVar1 = ((ulong)puVar8 & 1) != 0;
                      if (bVar1) {
                        local_108 = &cf_agreeDuty;
                        local_d8 = &cf_0;
                        local_100 = &cf_inWay;
                        local_d0 = &cf_0;
                        local_f8 = &cf_nativeUrl;
                        local_c8 = local_130;
                        local_f0 = &cf_sendId;
                        local_c0 = local_230;
                        local_e8 = &cf_channelId;
                        local_b8 = local_238;
                        local_e0 = &cf_msgType;
                        local_b0 = local_240;
                        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,
                                   &local_108,6);
                        _objc_retainAutoreleasedReturnValue();
                        puVar8 = puVar4;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        local_278 = puVar8;
                        (*(code *)PTR__objc_release_02578630)(puVar4);
                        pcVar6 = "MMServiceCenter";
                        _objc_getClass();
                        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_defaultCenter_026ca5e0);
                        _objc_retainAutoreleasedReturnValue();
                        pcVar9 = "WCRedEnvelopesLogicMgr";
                        _objc_getClass();
                        (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_class_0269cd60);
                        pcVar10 = pcVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (pcVar6,PTR_s_getService__0269d170,pcVar9);
                        _objc_retainAutoreleasedReturnValue();
                        local_280 = pcVar10;
                        (*(code *)PTR__objc_release_02578630)(pcVar6);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_280,PTR_s_ReceiverQueryRedEnvelopesRequest_026a6bb0,
                                   local_278);
                        _objc_storeStrong(&local_280);
                        _objc_storeStrong(&local_278,0);
                      }
                      local_120 = (uint)!bVar1;
                      _objc_storeStrong(&local_248,0);
                    }
                    _objc_storeStrong(&local_240);
                    _objc_storeStrong(&local_238,0);
                    _objc_storeStrong(&local_230,0);
                    _objc_storeStrong(&local_228,0);
                  }
                }
                else if (((local_143 & 1) == 0) ||
                        (puVar4 = local_128,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_128,PTR_s_redEnvelopReceiveSelfRedEnvelop_026a6b38),
                        ((ulong)puVar4 & 1) != 0)) {
                  puVar4 = local_128;
                  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_redEnvelopRedRule_026a5fe0);
                  puVar8 = local_128;
                  local_210 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_128,PTR_s_redEnvelopRedBlackList_026a5fe8);
                  _objc_retainAutoreleasedReturnValue();
                  local_218 = puVar8;
                  if (local_210 == (undefined *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_count_0269cfe0);
                    local_504 = 0;
                    if (puVar8 != (undefined *)0x0) {
                      puVar4 = local_218;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_218,PTR_s_containsObject__0269cbb8,local_170);
                      local_504 = (uint)puVar4;
                    }
                    local_50c = local_504;
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar8,PTR_s_containsObject__0269cbb8,local_170);
                    local_50c = (uint)puVar8 ^ 1;
                  }
                  local_219 = (byte)local_50c & 1;
                  if ((local_50c & 1) == 0) {
                    local_120 = 1;
                  }
                  else {
                    local_514 = 1;
                    if ((local_142 & 1) == 0) {
                      local_518 = 0;
                      if ((local_143 & 1) != 0) {
                        puVar4 = local_128;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_128,PTR_s_redEnvelopReceiveSelfRedEnvelop_026a6b38);
                        local_518 = (byte)puVar4;
                      }
                      local_514 = local_518;
                    }
                    local_201 = local_514 & 1;
                    local_120 = 0;
                  }
                  _objc_storeStrong(&local_218,0);
                  if (local_120 == 0) goto LAB_006d7d00;
                }
                else {
                  local_120 = 1;
                }
              }
              else {
                pcVar3 = local_110;
                (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_m_nsContent_0269d0a0);
                _objc_retainAutoreleasedReturnValue();
                local_470 = pcVar3;
                if (pcVar3 == (cfstringStruct *)0x0) {
                  local_470 = &cf___;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_1a8 = local_470;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                _memset(auStack_1f0,0,0x40);
                puVar4 = local_1a0;
                (*(code *)PTR__objc_retain_02578638)();
                local_498 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                           auStack_a8,0x10);
                if (local_498 != (undefined *)0x0) {
                  lVar12 = *local_1e0;
                  local_4a0 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_1e0 - lVar12 != 0) {
                        _objc_enumerationMutation(*local_1e0 - lVar12,puVar4);
                      }
                      lVar13 = *(long *)(local_1e8 + (long)local_4a0 * 8);
                      local_1b0 = lVar13;
                      (*(code *)PTR__objc_msgSend_02578628)(lVar13,PTR_s_length_0269cca0);
                      bVar1 = false;
                      if (lVar13 != 0) {
                        pcVar3 = local_1a8;
                        puVar8 = PTR_s_rangeOfString__0269d838;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1a8,PTR_s_rangeOfString__0269d838,local_1b0);
                        bVar1 = pcVar3 != (cfstringStruct *)0x7fffffffffffffff;
                        local_200 = pcVar3;
                        local_1f8 = puVar8;
                      }
                      if (bVar1) {
                        local_120 = 1;
                        goto LAB_006d7a40;
                      }
                      local_4a0 = local_4a0 + 1;
                    } while (local_4a0 < local_498);
                    local_498 = puVar4;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                               auStack_a8,0x10);
                    local_4a0 = (undefined *)0x0;
                  } while (local_498 != (undefined *)0x0);
                }
                local_120 = 0;
LAB_006d7a40:
                (*(code *)PTR__objc_release_02578630)(puVar4);
                if (local_120 == 0) {
                  local_120 = 0;
                }
                _objc_storeStrong(&local_1a8,0);
                if (local_120 == 0) goto LAB_006d7a84;
              }
              _objc_storeStrong(&local_1a0,0);
            }
            else {
              puVar4 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_redEnvelopSkipGroupList_026a5ff0);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_170;
              puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_198 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar8);
              uVar11 = (ulong)pcVar3 & 0xffffffff;
              if (((ulong)pcVar3 & 1) == 0) {
LAB_006d7720:
                local_120 = 0;
              }
              else {
                pcVar3 = local_170;
                (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
                puVar4 = local_198;
                uVar11 = 0;
                if (pcVar3 == (cfstringStruct *)0x0) goto LAB_006d7720;
                puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar8);
                uVar11 = (ulong)puVar4 & 0xffffffff;
                if (((ulong)puVar4 & 1) == 0) goto LAB_006d7720;
                puVar4 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_containsObject__0269cbb8,local_170);
                uVar11 = (ulong)puVar4 & 0xffffffff;
                if (((ulong)puVar4 & 1) == 0) goto LAB_006d7720;
                uVar11 = 1;
                local_120 = 1;
              }
              _objc_storeStrong(uVar11,&local_198,0);
              if (local_120 == 0) goto LAB_006d7744;
            }
            _objc_storeStrong(&local_170,0);
          }
          else {
            puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar8);
            if ((((ulong)puVar4 & 1) == 0) ||
               (puVar4 = local_168,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_168,PTR_s_containsObject__0269cbb8,local_160),
               ((ulong)puVar4 & 1) == 0)) goto LAB_006d7444;
            local_120 = 1;
          }
          _objc_storeStrong(&local_168);
          _objc_storeStrong(&local_160,0);
        }
        _objc_storeStrong(&local_140);
        _objc_storeStrong(&local_138,0);
      }
    }
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_128,0);
LAB_006d894c:
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

