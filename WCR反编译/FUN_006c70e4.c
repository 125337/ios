// FUN_006c70e4 @ 006c70e4

void FUN_006c70e4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  cfstringStruct *local_478;
  cfstringStruct *local_408;
  cfstringStruct *local_3f0;
  cfstringStruct *local_3d0;
  cfstringStruct *local_330;
  cfstringStruct *local_318;
  cfstringStruct *local_220;
  undefined *local_218;
  undefined *local_210;
  ulong local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  code *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  cfstringStruct *local_1d0;
  undefined1 auStack_1c8 [8];
  double local_1c0;
  byte local_1b8;
  cfstringStruct *local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  undefined *local_198;
  undefined *local_190;
  long local_188;
  undefined *local_180;
  long lStack_178;
  cfstringStruct *local_170;
  undefined *local_168;
  undefined *local_160;
  long lStack_158;
  undefined *local_150;
  cfstringStruct *local_148;
  undefined *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  byte local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  byte local_fa;
  byte local_f9;
  double local_f8;
  cfstringStruct *local_f0;
  byte local_e2;
  byte local_e1;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  undefined4 local_98;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_78 = 0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_redEnvelopAutoReceiveEnable_026a0ae0);
  if ((((ulong)puVar1 & 1) != 0) &&
     (uVar8 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_cgiCmdid_026a6978),
     (int)uVar8 == 3)) {
    FUN_006cec2c(0,local_68,local_78,local_80);
  }
  (*DAT_028cc230)(local_68,local_70,local_78,local_80);
  puVar1 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_redEnvelopAutoReceiveEnable_026a0ae0);
  if ((((ulong)puVar1 & 1) == 0) &&
     (puVar1 = local_88,
     (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_redEnvelopVoiceBroadcastEnabled_026a6980),
     ((ulong)puVar1 & 1) == 0)) {
    local_98 = 1;
  }
  else {
    uVar8 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_cgiCmdid_026a6978);
    if ((int)uVar8 == 3) {
      local_98 = 1;
    }
    else {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      uVar8 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_retText_026a6988);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithData_encoding__026a3378,uVar3,4);
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_JSONDictionary_026a6998);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      uVar8 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_reqText_026a69a0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithData_encoding__026a3378,uVar3,4);
      local_a8 = puVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      if (DAT_028cc258 == (cfstringStruct *)0x0) {
        pcVar5 = "WCBizUtil";
        _objc_getClass();
        DAT_028cc258 = (cfstringStruct *)pcVar5;
      }
      pcVar2 = DAT_028cc258;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_dictionaryWithDecodedComponets_s_026a69a8,local_a8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringForKey__026a33a0,&cf_nativeUrl);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_c0 = (cfstringStruct *)0x0;
      if (local_b8 != (cfstringStruct *)0x0) {
        if (DAT_028cc258 == (cfstringStruct *)0x0) {
          pcVar5 = "WCBizUtil";
          _objc_getClass();
          DAT_028cc258 = (cfstringStruct *)pcVar5;
        }
        pcVar2 = DAT_028cc258;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_dictionaryWithDecodedComponets_s_026a69a8,local_b8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_c0;
        local_c0 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      uVar8 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_cgiCmdid_026a6978);
      if ((int)uVar8 == 4) {
        pcVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_receiveAmount);
        _objc_retainAutoreleasedReturnValue();
        local_d1 = 0;
        local_e1 = 0;
        local_318 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_330 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_receive_amount);
          _objc_retainAutoreleasedReturnValue();
          local_d1 = 1;
          local_d0 = local_330;
          if (local_330 == (cfstringStruct *)0x0) {
            local_330 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
            _objc_retainAutoreleasedReturnValue();
            local_e1 = 1;
            local_e0 = local_330;
          }
          local_318 = local_330;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = local_318;
        if ((local_e1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e0);
        }
        if ((local_d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_e2 = 0;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar2 = local_c8;
        local_f0 = &cf___;
        dVar9 = 0.0;
        local_f8 = 0.0;
        if (local_c8 != (cfstringStruct *)0x0) {
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
          pcVar4 = local_c8;
          if (((ulong)pcVar2 & 1) == 0) {
            puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
            if (((ulong)pcVar4 & 1) != 0) {
              pcVar4 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringValue_0269ef08);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_f0;
              local_f0 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              local_e2 = 1;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_doubleValue_026ca608);
              local_f8 = dVar9;
            }
          }
          else {
            _objc_storeStrong(&local_f0,local_c8);
            pcVar2 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
            local_e2 = pcVar2 != (cfstringStruct *)0x0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_doubleValue_026ca608);
            local_f8 = dVar9;
          }
        }
        if ((local_f8 <= 0.0) || (10000.0 <= local_f8)) {
          if (10000.0 <= local_f8) {
            local_f8 = local_f8 / 100.0;
          }
        }
        else {
          local_f8 = local_f8 / 100.0;
        }
        local_f9 = 0.0 < local_f8;
        local_fa = 0;
        uVar8 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_cgiCmdid_026a6978);
        if ((int)uVar8 == 4) {
          local_fa = 1;
        }
        else if (local_c0 != (cfstringStruct *)0x0) {
          pcVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_stringForKey__026a33a0,&cf_timingIdentifier);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = 0;
          local_108 = pcVar2;
          if (pcVar2 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
            uVar8 = 0;
            if (pcVar2 != (cfstringStruct *)0x0) {
              uVar8 = 1;
              local_fa = 1;
            }
          }
          _objc_storeStrong(uVar8,&local_108,0);
        }
        if (((local_e2 & 1) != 0) && ((local_fa & 1) != 0)) {
          if ((local_f9 & 1) != 0) {
            FUN_006cff54(local_f8);
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_110 = &cf___;
          if (local_c0 != (cfstringStruct *)0x0) {
            pcVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stringForKey__026a33a0,&cf_sendid);
            _objc_retainAutoreleasedReturnValue();
            local_3d0 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_3d0 = &cf___;
            }
            _objc_storeStrong(&local_110,local_3d0);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          pcVar2 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            pcVar2 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendId);
            _objc_retainAutoreleasedReturnValue();
            local_119 = 0;
            local_3f0 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              pcVar4 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendid);
              _objc_retainAutoreleasedReturnValue();
              local_119 = 1;
              local_408 = pcVar4;
              if (pcVar4 == (cfstringStruct *)0x0) {
                local_408 = &cf___;
              }
              local_3f0 = local_408;
              local_118 = pcVar4;
            }
            _objc_storeStrong(&local_110,local_3f0);
            if ((local_119 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_118);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          pcVar2 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            pcVar2 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_SystemMsgContext);
            _objc_retainAutoreleasedReturnValue();
            local_128 = pcVar2;
            if (pcVar2 != (cfstringStruct *)0x0) {
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
              if (((ulong)pcVar2 & 1) != 0) {
                local_130 = PTR_s_genKeyValueDictFromUrl_prefix__026a69b0;
                if (DAT_028cc258 == (cfstringStruct *)0x0) {
                  pcVar5 = "WCBizUtil";
                  _objc_getClass();
                  DAT_028cc258 = (cfstringStruct *)pcVar5;
                }
                pcVar2 = DAT_028cc258;
                _objc_retainAutoreleaseReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar2,PTR_s_respondsToSelector__026ca818,local_130);
                if (((ulong)pcVar2 & 1) == 0) {
                  pcVar2 = local_128;
                  puVar1 = PTR_s_rangeOfString__0269d838;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_128,PTR_s_rangeOfString__0269d838,&cf_sendid_);
                  local_148 = pcVar2;
                  local_140 = puVar1;
                  if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
                    puVar1 = puVar1 + (long)&pcVar2->field0_0x0;
                    pcVar2 = local_128;
                    local_150 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
                    lStack_178 = (long)pcVar2 - (long)local_150;
                    pcVar2 = local_128;
                    puVar6 = PTR_s_rangeOfString_options_range__0269d130;
                    local_180 = puVar1;
                    local_160 = puVar1;
                    lStack_158 = lStack_178;
                    local_40 = lStack_178;
                    local_38 = puVar1;
                    local_30 = puVar1;
                    local_28 = lStack_178;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_128,PTR_s_rangeOfString_options_range__0269d130,&cf__,0,puVar1,
                               lStack_178);
                    local_170 = pcVar2;
                    local_168 = puVar6;
                    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
                      pcVar4 = local_128;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_128,PTR_s_substringFromIndex__0269d120,local_150);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_110;
                      local_110 = pcVar4;
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                    }
                    else {
                      local_188 = (long)pcVar2 - (long)local_150;
                      local_58 = local_150;
                      local_50 = local_150;
                      local_190 = local_150;
                      pcVar4 = local_128;
                      local_60 = local_188;
                      local_48 = local_188;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_128,PTR_s_substringWithRange__0269d138,local_150,local_188);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_110;
                      local_110 = pcVar4;
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                    }
                  }
                }
                else {
                  if (DAT_028cc258 == (cfstringStruct *)0x0) {
                    pcVar5 = "WCBizUtil";
                    _objc_getClass();
                    DAT_028cc258 = (cfstringStruct *)pcVar5;
                  }
                  pcVar2 = DAT_028cc258;
                  _objc_retainAutoreleaseReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_130,local_128,&cf___);
                  _objc_retainAutoreleasedReturnValue();
                  local_138 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar2,PTR_s_stringForKey__026a33a0,&cf_sendid);
                  _objc_retainAutoreleasedReturnValue();
                  local_478 = pcVar2;
                  if (pcVar2 == (cfstringStruct *)0x0) {
                    local_478 = &cf___;
                  }
                  _objc_storeStrong(&local_110,local_478);
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                  _objc_storeStrong(&local_138,0);
                }
              }
            }
            _objc_storeStrong(&local_128,0);
          }
          pcVar2 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
          if (pcVar2 != (cfstringStruct *)0x0) {
            puVar1 = PTR_WCRefineRedEnvelopParamQueue_026ce828;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineRedEnvelopParamQueue_026ce828,PTR_s_sharedQueue_026a69b8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_198 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            if (local_198 != (undefined *)0x0) {
              _objc_initWeak(auStack_1a0,local_68);
              puVar1 = local_198;
              (*(code *)PTR__objc_retain_02578638)();
              local_1a8 = puVar1;
              pcVar2 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_copy_0269d150);
              puVar1 = PTR___dispatch_main_q_02578680;
              local_1b0 = pcVar2;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              local_1f8 = PTR___NSConcreteStackBlock_02578660;
              local_1f0 = 0xc2000000;
              local_1ec = 0;
              local_1e8 = FUN_006d01e8;
              local_1e0 = &DAT_0257edb8;
              local_1b8 = local_f9 & 1;
              local_1c0 = local_f8;
              _objc_copyWeak(auStack_1c8,auStack_1a0);
              puVar6 = local_1a8;
              (*(code *)PTR__objc_retain_02578638)();
              pcVar2 = local_1b0;
              local_1d8 = puVar6;
              (*(code *)PTR__objc_retain_02578638)();
              local_1d0 = pcVar2;
              _dispatch_async(puVar1,&local_1f8);
              (*(code *)PTR__objc_release_02578630)(puVar1);
              if ((local_f9 & 1) != 0) {
                local_200 = PTR_s_wcrefine_triggerAutoReply_respon_026a6960;
                uVar7 = local_68;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_68,PTR_s_respondsToSelector__026ca818,
                           PTR_s_wcrefine_triggerAutoReply_respon_026a6960);
                if ((uVar7 & 1) != 0) {
                  uVar7 = local_68;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_68,PTR_s_methodSignatureForSelector__0269e190,local_200);
                  _objc_retainAutoreleasedReturnValue();
                  local_208 = uVar7;
                  if (uVar7 != 0) {
                    puVar1 = PTR__OBJC_CLASS___NSInvocation_026ce208;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSInvocation_026ce208,
                               PTR_s_invocationWithMethodSignature__0269e1a0,uVar7);
                    _objc_retainAutoreleasedReturnValue();
                    local_210 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTarget__0269e1a8,local_68)
                    ;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_210,PTR_s_setSelector__0269e1b0,local_200);
                    puVar1 = local_198;
                    (*(code *)PTR__objc_retain_02578638)();
                    pcVar2 = local_a0;
                    local_218 = puVar1;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_220 = pcVar2;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_210,PTR_s_setArgument_atIndex__0269eae8,&local_218,2);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_210,PTR_s_setArgument_atIndex__0269eae8,&local_220,3);
                    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_invoke_0269e1b8);
                    _objc_storeStrong(&local_220);
                    _objc_storeStrong(&local_218,0);
                    _objc_storeStrong(&local_210,0);
                  }
                  _objc_storeStrong(&local_208,0);
                }
              }
              puVar1 = PTR_WCRefineRedEnvelopParamQueue_026ce828;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineRedEnvelopParamQueue_026ce828,PTR_s_sharedQueue_026a69b8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar1);
              _objc_storeStrong(&local_1d0);
              _objc_storeStrong(&local_1d8,0);
              _objc_destroyWeak(auStack_1c8);
              _objc_storeStrong(&local_1b0,0);
              _objc_storeStrong(&local_1a8,0);
              _objc_destroyWeak(auStack_1a0);
            }
            _objc_storeStrong(&local_198,0);
          }
          _objc_storeStrong(&local_110,0);
        }
        _objc_storeStrong(&local_f0);
        _objc_storeStrong(&local_c8,0);
        local_98 = 0;
      }
      else {
        local_98 = 1;
      }
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
    }
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  return;
}

