// FUN_006cec2c @ 006cec2c

void FUN_006cec2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  uint local_27c;
  char *local_200;
  char *local_1b0;
  undefined *local_d8;
  int local_cc;
  undefined *local_c8;
  byte local_b9;
  undefined *local_b8;
  byte local_aa;
  bool local_a9;
  char *local_a8;
  char *local_a0;
  undefined *local_98;
  bool local_89;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined *local_60 [3];
  undefined1 *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if (((local_28 == 0) || (local_30 == 0)) || (local_38 == 0)) {
    local_3c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    lVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_retText_026a6988);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithData_encoding__026a3378,lVar5,4);
    puVar6 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_JSONDictionary_026a6998);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    lVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reqText_026a69a0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithData_encoding__026a3378,lVar5,4);
    local_60[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    if (DAT_028cc258 == (char *)0x0) {
      pcVar7 = "WCBizUtil";
      _objc_getClass();
      DAT_028cc258 = pcVar7;
    }
    pcVar7 = DAT_028cc258;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar7,PTR_s_dictionaryWithDecodedComponets_s_026a69a8,local_60[0],&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_stringForKey__026a33a0,&cf_nativeUrl);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar8;
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    local_78 = (char *)0x0;
    if (local_70 != (char *)0x0) {
      if (DAT_028cc258 == (char *)0x0) {
        pcVar7 = "WCBizUtil";
        _objc_getClass();
        DAT_028cc258 = pcVar7;
      }
      pcVar7 = DAT_028cc258;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar7,PTR_s_dictionaryWithDecodedComponets_s_026a69a8,local_70,&cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = local_78;
      local_78 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
    }
    local_89 = false;
    bVar1 = local_78 == (char *)0x0;
    if (bVar1) {
      local_1b0 = (char *)0x0;
    }
    else {
      local_1b0 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_stringForKey__026a33a0,&cf_sendid);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_1b0;
    }
    local_89 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_1b0;
    if ((local_89 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    pcVar7 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (pcVar7 == (char *)0x0) {
      pcVar8 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_stringForKey__026a33a0,&cf_sendid);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_80;
      local_80 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
    }
    pcVar7 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (pcVar7 == (char *)0x0) {
      pcVar8 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_stringForKey__026a33a0,&cf_sendId);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_80;
      local_80 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
    }
    puVar3 = PTR_WCRefineRedEnvelopParamQueue_026ce828;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineRedEnvelopParamQueue_026ce828,PTR_s_sharedQueue_026a69b8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar9;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_a9 = false;
    bVar1 = local_78 == (char *)0x0;
    if (bVar1) {
      local_200 = (char *)0x0;
    }
    else {
      local_200 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_stringForKey__026a33a0,&cf_sign);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_200;
    }
    local_a9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_200;
    if ((local_a9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    local_aa = 1;
    if (local_98 == (undefined *)0x0) {
      local_aa = 0;
    }
    else {
      puVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_receiveStatus);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (puVar10 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        local_aa = 0;
      }
      else {
        puVar6 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_hbStatus);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        if ((dword *)puVar10 == &MACH_HEADER.cputype) {
          local_aa = 0;
        }
        else {
          puVar6 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_timingIdentifier);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar6 == (undefined1 *)0x0) {
            local_aa = 0;
          }
          else {
            uVar2 = 0;
            FUN_01138c30(&cf_auto_red_envelop,0);
            if ((uVar2 & 1) == 0) {
              local_aa = 0;
            }
            else {
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar3);
              if (((ulong)puVar9 & 1) == 0) {
                local_aa = 0;
              }
              else {
                puVar3 = local_98;
                (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isGroupSender_026a69e8);
                if (((ulong)puVar3 & 1) == 0) {
                  local_b9 = 0;
                  pcVar8 = local_a0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
                  pcVar7 = local_a0;
                  local_27c = 1;
                  if (pcVar8 != (char *)0x0) {
                    puVar3 = local_98;
                    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_sign_026a69f0);
                    _objc_retainAutoreleasedReturnValue();
                    local_b9 = 1;
                    local_b8 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isEqualToString__0269ccc8);
                    local_27c = (uint)pcVar7 ^ 1;
                  }
                  if ((local_b9 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_b8);
                  }
                  if ((local_27c & 1) != 0) {
                    local_aa = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ((local_aa & 1) == 0) {
      puVar3 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_sendId_026a69f8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (puVar9 != (undefined *)0x0) {
        puVar3 = PTR_WCRefineRedEnvelopParamQueue_026ce828;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineRedEnvelopParamQueue_026ce828,PTR_s_sharedQueue_026a69b8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_sendId_026a69f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_removeParamBySendId__026a69d8);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_3c = 1;
    }
    else {
      puVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_timingIdentifier);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTimingIdentifier__026a6a00);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_cc = 0;
      puVar9 = local_98;
      local_c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isGroupSender_026a69e8);
      if (((ulong)puVar9 & 1) == 0) {
        uVar11 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,
                   PTR_s_wcrefine_calculateDelaySeconds_026a6968);
        if ((uVar11 & 1) == 0) {
          puVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_redEnvelopDelaySeconds_026a6a08);
          local_cc = (int)puVar3;
        }
        else {
          uVar11 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcrefine_calculateDelaySeconds_026a6968);
          local_cc = (int)uVar11;
        }
      }
      uVar11 = local_28;
      if (local_cc == 0) {
        puVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_toParams_026a6a10);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_OpenRedEnvelopesRequest__026a6a18);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_3c = 1;
      }
      else {
        puVar3 = PTR_WCRefineReceiveRedEnvelopOperation_026ce830;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_initWithRedEnvelopParam_delay__026a6a20,local_98,local_cc);
        puVar9 = local_c8;
        local_d8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_redEnvelopSerialReceive_026a6a28);
        if (((ulong)puVar9 & 1) == 0) {
          puVar3 = PTR_WCRefineRedEnvelopTaskManager_026ce838;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineRedEnvelopTaskManager_026ce838,PTR_s_sharedManager_0269db78);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          puVar3 = PTR_WCRefineRedEnvelopTaskManager_026ce838;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineRedEnvelopTaskManager_026ce838,PTR_s_sharedManager_0269db78);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        _objc_storeStrong(&local_d8,0);
        local_3c = 0;
      }
      _objc_storeStrong(&local_c8,0);
    }
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(local_60,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

