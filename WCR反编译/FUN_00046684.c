// FUN_00046684 @ 00046684

void FUN_00046684(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2a8;
  cfstringStruct *local_298;
  cfstringStruct *local_288;
  cfstringStruct *local_278;
  cfstringStruct *local_268;
  cfstringStruct *local_258;
  cfstringStruct *local_248;
  cfstringStruct *local_238;
  cfstringStruct **local_1c8;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined4 local_10c;
  cfstringStruct *local_108 [3];
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
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e8,param_1);
  pcVar2 = local_e8;
  FUN_000332d0(local_e8,PTR_s_m_nsTransferID_0269d7b8);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = pcVar2;
  FUN_000473b4();
  _objc_retainAutoreleasedReturnValue();
  local_108[0] = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar1 = local_e8;
    FUN_000332d0(local_e8,PTR_s_m_nsControlTransationID_0269d868);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar1;
    FUN_000473b4();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_108[0];
    local_108[0] = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_108[0];
    if (local_108[0] == (cfstringStruct *)0x0) {
      pcVar2 = local_e8;
      FUN_000332d0(local_e8,PTR_s_m_tarnsferPayerUserName_0269d870);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_e8;
      local_120 = pcVar2;
      FUN_000332d0(local_e8,PTR_s_selectedTransferChatroomUsername_0269d878);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_e8;
      local_128 = pcVar1;
      FUN_000332d0(local_e8,PTR_s_m_nsCurrentUserName_0269d880);
      _objc_retainAutoreleasedReturnValue();
      local_130 = pcVar2;
      FUN_0003c2b0();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_128;
      local_138 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_1c8 = &local_130;
      }
      else {
        local_1c8 = &local_128;
      }
      pcVar2 = *local_1c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_140 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if ((pcVar2 == (cfstringStruct *)0x0) ||
         ((pcVar2 = local_138,
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
          pcVar2 != (cfstringStruct *)0x0 &&
          (pcVar2 = local_140,
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isEqualToString__0269ccc8,local_138)
          , ((ulong)pcVar2 & 1) != 0)))) {
        _objc_storeStrong(&local_140,local_120);
      }
      pcVar2 = local_140;
      FUN_000366f8();
      if (((ulong)pcVar2 & 1) == 0) {
        local_e0 = (cfstringStruct *)0x0;
        local_10c = 1;
      }
      else {
        pcVar2 = local_e8;
        FUN_000332d0(local_e8,PTR_s_m_nsTranferMoneyString_0269d888);
        _objc_retainAutoreleasedReturnValue();
        local_148 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        if ((pcVar2 == (cfstringStruct *)0x0) &&
           (pcVar2 = local_e8, FUN_0003bd70(local_e8,PTR_s_m_transferTotalAmount_0269d890),
           local_150 = pcVar2, pcVar2 != (cfstringStruct *)0x0)) {
          NEON_ucvtf(pcVar2);
          pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_148;
          local_148 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar2 = local_e8;
        FUN_000332d0(local_e8,PTR_s_m_payerNickname_0269d898);
        _objc_retainAutoreleasedReturnValue();
        local_158 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          pcVar1 = local_140;
          FUN_00040398(local_140,local_120);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_158;
          local_158 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar2 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        local_d8 = &cf_key;
        if (local_f0 == (cfstringStruct *)0x0) {
          local_238 = &cf___;
        }
        else {
          local_238 = local_f0;
        }
        local_80 = local_238;
        local_d0 = &cf_transferID;
        if (local_f0 == (cfstringStruct *)0x0) {
          local_248 = &cf___;
        }
        else {
          local_248 = local_f0;
        }
        local_78 = local_248;
        local_c8 = &cf_transID;
        if (local_118 == (cfstringStruct *)0x0) {
          local_258 = &cf___;
        }
        else {
          local_258 = local_118;
        }
        local_70 = local_258;
        local_c0 = &cf_nativeUrl;
        local_68 = &cf___;
        local_b8 = &cf_session;
        if (local_140 == (cfstringStruct *)0x0) {
          local_268 = &cf___;
        }
        else {
          local_268 = local_140;
        }
        local_60 = local_268;
        local_b0 = &cf_currentUser;
        pcVar1 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          if (local_138 == (cfstringStruct *)0x0) {
            local_288 = &cf___;
          }
          else {
            local_288 = local_138;
          }
          local_278 = local_288;
        }
        else {
          local_278 = local_130;
        }
        local_58 = local_278;
        local_a8 = &cf_payerUser;
        if (local_120 == (cfstringStruct *)0x0) {
          local_298 = &cf___;
        }
        else {
          local_298 = local_120;
        }
        local_50 = local_298;
        local_a0 = &cf_payerName;
        if (local_158 == (cfstringStruct *)0x0) {
          local_2a8 = &cf__e;
        }
        else {
          local_2a8 = local_158;
        }
        local_48 = local_2a8;
        local_98 = &cf_amount;
        pcVar1 = local_148;
        FUN_000453b4();
        _objc_retainAutoreleasedReturnValue();
        local_90 = &cf_rawAmount;
        if (local_148 == (cfstringStruct *)0x0) {
          local_2c8 = &cf___;
        }
        else {
          local_2c8 = local_148;
        }
        local_38 = local_2c8;
        local_88 = &cf_isChatroom;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_40 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                   (uint)pcVar2 & 1);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_80,&local_d8,0xb);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        local_10c = 1;
        _objc_storeStrong(&local_158);
        _objc_storeStrong(&local_148,0);
      }
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = pcVar2;
      local_10c = 1;
    }
    _objc_storeStrong(&local_118,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_10c = 1;
    local_e0 = pcVar2;
  }
  _objc_storeStrong(local_108);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

