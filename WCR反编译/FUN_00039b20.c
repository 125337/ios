// FUN_00039b20 @ 00039b20

void FUN_00039b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  cfstringStruct *local_688;
  cfstringStruct *local_678;
  cfstringStruct *local_668;
  cfstringStruct *local_648;
  cfstringStruct *local_638;
  cfstringStruct *local_628;
  cfstringStruct *local_618;
  cfstringStruct *local_608;
  cfstringStruct *local_5f8;
  cfstringStruct *local_5e8;
  cfstringStruct *local_5d8;
  cfstringStruct *local_530;
  cfstringStruct **local_498;
  cfstringStruct **local_488;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  byte local_2d1;
  cfstringStruct *local_2d0;
  byte local_2c1;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  byte local_291;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  undefined1 local_272;
  undefined1 local_271;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  undefined4 local_250;
  undefined *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  undefined *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
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
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_230 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_230,param_1);
  local_238 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_238,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_240 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoAcceptTransferEnabled_0269d668);
  if ((((ulong)puVar1 & 1) == 0) || (local_238 == (cfstringStruct *)0x0)) {
    local_228 = (undefined *)0x0;
    local_250 = 1;
    goto LAB_0003b77c;
  }
  pcVar2 = local_238;
  FUN_0003bc68();
  _objc_retainAutoreleasedReturnValue();
  local_258 = pcVar2;
  FUN_000332d0(pcVar2,PTR_s_m_c2cNativeUrl_0269d798);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_258;
  local_260 = pcVar2;
  FUN_000332d0(local_258,PTR_s_m_c2cUrl_0269d7a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_258;
  local_268 = pcVar4;
  FUN_0003bd70(local_258,PTR_s_m_uiPaySubType_0269d6e8);
  pcVar4 = local_260;
  local_270 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_260,PTR_s_hasPrefix__0269d320,&cf_wechat___wcpay_transfer_transferquery_);
  local_271 = SUB81(pcVar4,0);
  local_272 = ((ulong)pcVar4 & 1) != 0 || local_270 == (cfstringStruct *)0x1;
  if ((bool)local_272) {
    pcVar2 = local_238;
    FUN_00044200();
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_260;
      FUN_000444c4(local_260,&cf_receiver_username);
      _objc_retainAutoreleasedReturnValue();
      local_280 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar4 = local_258;
        FUN_000332d0(local_258,PTR_s_transfer_receiver_username_0269d7a8);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_280;
        local_280 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = local_280;
      (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar4 = local_258;
        FUN_000332d0(local_258,PTR_s_exclusive_recv_username_0269d7b0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_280;
        local_280 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = local_280;
      (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_238;
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_nsContent_0269d0a0);
        _objc_retainAutoreleasedReturnValue();
        local_50 = &cf_receiver_username;
        local_48 = &cf_transfer_receiver_username;
        local_40 = &cf_receiverusername;
        local_38 = &cf_tousername;
        local_30 = &cf_to_username;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_50,5);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00045088();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_280;
        local_280 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)();
      }
      FUN_0003c2b0();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_230;
      local_288 = pcVar2;
      FUN_0003bec0(local_230,local_238);
      _objc_retainAutoreleasedReturnValue();
      local_290 = pcVar4;
      FUN_000366f8();
      if (((ulong)pcVar4 & 1) == 0) {
        local_228 = (undefined *)0x0;
        local_250 = 1;
      }
      else {
        pcVar2 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        local_291 = (byte)pcVar2;
        if ((((ulong)pcVar2 & 1) == 0) ||
           (pcVar2 = local_280,
           (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0),
           pcVar2 != (cfstringStruct *)0x0)) {
          uVar11 = (ulong)local_291;
          if ((local_291 & 1) != 0) {
            pcVar2 = local_280;
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0);
            uVar11 = 0;
            if (pcVar2 != (cfstringStruct *)0x0) {
              pcVar2 = local_288;
              (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_length_0269cca0);
              uVar11 = 0;
              if (pcVar2 != (cfstringStruct *)0x0) {
                pcVar2 = local_280;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_280,PTR_s_isEqualToString__0269ccc8,local_288);
                uVar11 = (ulong)pcVar2 & 0xffffffff;
                if (((ulong)pcVar2 & 1) == 0) {
                  local_228 = (undefined *)0x0;
                  local_250 = 1;
                  goto LAB_0003b6c4;
                }
              }
            }
          }
          pcVar2 = local_260;
          FUN_000444c4(uVar11,local_260,&cf_transfer_id);
          _objc_retainAutoreleasedReturnValue();
          local_2a0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            pcVar4 = local_258;
            FUN_000332d0(local_258,PTR_s_m_nsTransferID_0269d7b8);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_2a0;
            local_2a0 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          pcVar2 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            pcVar4 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_nsContent_0269d0a0);
            _objc_retainAutoreleasedReturnValue();
            local_70 = &cf_transfer_id;
            local_68 = &cf_transferid;
            local_60 = &cf_transferId;
            local_58 = &cf_transfer_id_str;
            puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_70,4);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar4;
            FUN_00045088();
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_2a0;
            local_2a0 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          pcVar2 = local_260;
          FUN_000444c4(local_260,&cf_trans_id);
          _objc_retainAutoreleasedReturnValue();
          local_2a8 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            pcVar4 = local_258;
            FUN_000332d0(local_258,PTR_s_m_nsTranscationID_0269d7c0);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_2a8;
            local_2a8 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          pcVar2 = local_2a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            pcVar4 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_nsContent_0269d0a0);
            _objc_retainAutoreleasedReturnValue();
            local_98 = &cf_trans_id;
            local_90 = &cf_transaction_id;
            local_88 = &cf_transactionid;
            local_80 = &cf_transcationid;
            local_78 = &cf_transId;
            puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_98,5);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar4;
            FUN_00045088();
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_2a8;
            local_2a8 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          pcVar2 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            pcVar2 = local_260;
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0);
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_498 = &local_2a8;
            }
            else {
              local_498 = &local_260;
            }
            local_488 = local_498;
          }
          else {
            local_488 = &local_2a0;
          }
          pcVar4 = *local_488;
          (*(code *)PTR__objc_retain_02578638)();
          local_2b0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
          pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          if (pcVar4 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_uiMesLocalID_0269d238);
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_n64MesSvrID_0269d3e0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_stringWithFormat__0269cca8,&cf__u__lld);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_2b0;
            local_2b0 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          pcVar2 = local_258;
          FUN_000332d0(local_258,PTR_s_transfer_payer_username_0269d7c8);
          _objc_retainAutoreleasedReturnValue();
          local_2b8 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            pcVar4 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_nsContent_0269d0a0);
            _objc_retainAutoreleasedReturnValue();
            local_c0 = &cf_transfer_payer_username;
            local_b8 = &cf_payer_username;
            local_b0 = &cf_payerusername;
            local_a8 = &cf_fromusername;
            local_a0 = &cf_from_username;
            puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_c0,5);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar4;
            FUN_00045088();
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_2b8;
            local_2b8 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          pcVar2 = local_2b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_2c1 = 0;
            local_2d1 = 0;
            pcVar2 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_nsRealChatUsr_0269d190);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_530 = local_238;
            if (pcVar4 == (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_nsFromUsr_0269d088);
              _objc_retainAutoreleasedReturnValue();
              local_2d1 = 1;
              local_2d0 = local_530;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_nsRealChatUsr_0269d190);
              _objc_retainAutoreleasedReturnValue();
              local_2c1 = 1;
              local_2c0 = local_530;
            }
            _objc_storeStrong(&local_2b8,local_530);
            if ((local_2d1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_2d0);
            }
            if ((local_2c1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_2c0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          pcVar2 = local_258;
          FUN_000332d0(local_258,PTR_s_m_nsFeeDesc_0269d7d0);
          _objc_retainAutoreleasedReturnValue();
          local_2e0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            pcVar4 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_nsContent_0269d0a0);
            _objc_retainAutoreleasedReturnValue();
            local_e8 = &cf_feedesc;
            local_e0 = &cf_fee_desc;
            local_d8 = &cf_total_fee;
            local_d0 = &cf_totalfee;
            local_c8 = &cf_amount;
            puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_e8,5);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar4;
            FUN_00045088();
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_2e0;
            local_2e0 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          pcVar2 = local_2e0;
          FUN_000453b4();
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_258;
          local_2e8 = pcVar2;
          FUN_000332d0(local_258,PTR_s_transfer_attach_0269d7d8);
          _objc_retainAutoreleasedReturnValue();
          local_2f0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            pcVar4 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_nsContent_0269d0a0);
            _objc_retainAutoreleasedReturnValue();
            local_100 = &cf_transfer_attach;
            local_f8 = &cf_transferattach;
            local_f0 = &cf_attach;
            puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_100,3);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar4;
            FUN_00045088();
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_2f0;
            local_2f0 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          pcVar2 = local_258;
          FUN_0003bd70(local_258,PTR_s_m_uiInvalidTime_0269d7e0);
          FUN_0003bd70(local_258,PTR_s_m_c2cPayReceiveStatus_0269d7e8);
          FUN_0003bd70(local_258,PTR_s_m_c2cPayBubbleType_0269d7f0);
          local_220 = &cf_key;
          if (local_2b0 == (cfstringStruct *)0x0) {
            local_5d8 = &cf___;
          }
          else {
            local_5d8 = local_2b0;
          }
          local_190 = local_5d8;
          local_218 = &cf_transferID;
          if (local_2a0 == (cfstringStruct *)0x0) {
            local_5e8 = &cf___;
          }
          else {
            local_5e8 = local_2a0;
          }
          local_188 = local_5e8;
          local_210 = &cf_transID;
          if (local_2a8 == (cfstringStruct *)0x0) {
            local_5f8 = &cf___;
          }
          else {
            local_5f8 = local_2a8;
          }
          local_180 = local_5f8;
          local_208 = &cf_nativeUrl;
          if (local_260 == (cfstringStruct *)0x0) {
            local_608 = &cf___;
          }
          else {
            local_608 = local_260;
          }
          local_178 = local_608;
          local_200 = &cf_session;
          if (local_290 == (cfstringStruct *)0x0) {
            local_618 = &cf___;
          }
          else {
            local_618 = local_290;
          }
          local_170 = local_618;
          local_1f8 = &cf_currentUser;
          if (local_288 == (cfstringStruct *)0x0) {
            local_628 = &cf___;
          }
          else {
            local_628 = local_288;
          }
          local_168 = local_628;
          local_1f0 = &cf_receiverUser;
          if (local_280 == (cfstringStruct *)0x0) {
            local_638 = &cf___;
          }
          else {
            local_638 = local_280;
          }
          local_160 = local_638;
          local_1e8 = &cf_payerUser;
          if (local_2b8 == (cfstringStruct *)0x0) {
            local_648 = &cf___;
          }
          else {
            local_648 = local_2b8;
          }
          local_158 = local_648;
          local_1e0 = &cf_payerName;
          pcVar4 = local_290;
          FUN_00040398(local_290,local_2b8);
          _objc_retainAutoreleasedReturnValue();
          local_1d8 = &cf_amount;
          if (local_2e8 == (cfstringStruct *)0x0) {
            local_668 = &cf__gw;
          }
          else {
            local_668 = local_2e8;
          }
          local_148 = local_668;
          local_1d0 = &cf_rawAmount;
          if (local_2e0 == (cfstringStruct *)0x0) {
            local_678 = &cf___;
          }
          else {
            local_678 = local_2e0;
          }
          local_140 = local_678;
          local_1c8 = &cf_transferAttach;
          if (local_2f0 == (cfstringStruct *)0x0) {
            local_688 = &cf___;
          }
          else {
            local_688 = local_2f0;
          }
          local_138 = local_688;
          local_1c0 = &cf_invalidTime;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_150 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                     pcVar2);
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = &cf_isChatroom;
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_130 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                     local_291 & 1);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_1b0 = &cf_localID;
          pcVar2 = local_238;
          local_128 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_uiMesLocalID_0269d238);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_numberWithUnsignedInt__0269d800,(ulong)pcVar2 & 0xffffffff);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_1a8 = &cf_mesSvrID;
          pcVar2 = local_238;
          local_120 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_n64MesSvrID_0269d3e0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithLongLong__0269d808,pcVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_1a0 = &cf_messageType;
          pcVar2 = local_238;
          local_118 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_uiMessageType_0269d0a8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar8,PTR_s_numberWithInt__0269d810,(ulong)pcVar2 & 0xffffffff);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_198 = &cf_time;
          pcVar2 = local_238;
          local_110 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_m_uiCreateTime_0269d208);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar9,PTR_s_numberWithUnsignedInt__0269d800,(ulong)pcVar2 & 0xffffffff);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_108 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_190,&local_220,0x12);
          _objc_retainAutoreleasedReturnValue();
          local_228 = puVar10;
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          local_250 = 1;
          _objc_storeStrong(&local_2f0);
          _objc_storeStrong(&local_2e8,0);
          _objc_storeStrong(&local_2e0,0);
          _objc_storeStrong(&local_2b8,0);
          _objc_storeStrong(&local_2b0,0);
          _objc_storeStrong(&local_2a8,0);
          _objc_storeStrong(&local_2a0,0);
        }
        else {
          local_228 = (undefined *)0x0;
          local_250 = 1;
        }
      }
LAB_0003b6c4:
      _objc_storeStrong(&local_290);
      _objc_storeStrong(&local_288,0);
      _objc_storeStrong(&local_280,0);
    }
    else {
      local_228 = (undefined *)0x0;
      local_250 = 1;
    }
  }
  else {
    local_228 = (undefined *)0x0;
    local_250 = 1;
  }
  _objc_storeStrong(&local_268);
  _objc_storeStrong(&local_260,0);
  _objc_storeStrong(&local_258,0);
LAB_0003b77c:
  _objc_storeStrong(&local_240);
  _objc_storeStrong(&local_238,0);
  _objc_storeStrong(&local_230,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_228);
  return;
}

