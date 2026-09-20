// FUN_006d5b10 @ 006d5b10

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006d5b10(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_210;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1a8;
  cfstringStruct *local_188;
  cfstringStruct *local_138;
  bool local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  int local_dc;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  int local_bc;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  int local_84;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_28 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0 || bVar1) {
    local_38 = 1;
  }
  else {
    pcVar4 = local_28;
    FUN_006ce484(local_28,&cf_m_data);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_m_oWCRedEnvelopesDetailInfo_026a6b00)
    ;
    if (((ulong)pcVar4 & 1) == 0) {
      local_188 = (cfstringStruct *)0x0;
    }
    else {
      local_188 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_oWCRedEnvelopesDetailInfo_026a6b00);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_188;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_188;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_69 = 0;
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_receivedInfoLable_026a6b08);
    if (((ulong)pcVar4 & 1) == 0) {
      local_1a8 = (cfstringStruct *)0x0;
    }
    else {
      local_1a8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_receivedInfoLable_026a6b08);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_1a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_1a8;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    pcVar4 = local_48;
    FUN_006d6540(local_48,PTR_s_m_lTotalNum_026a6b10);
    local_78 = pcVar4;
    if ((local_60 == (cfstringStruct *)0x0) || ((long)pcVar4 < 1)) {
      local_38 = 1;
    }
    else {
      local_84 = 0;
      pcVar5 = local_48;
      local_98 = pcVar4;
      FUN_006d6540(local_48,PTR_s_m_lRecNum_026a6b18);
      local_1c8 = pcVar5;
      if ((long)local_98 < (long)pcVar5) {
        local_1c8 = local_98;
      }
      local_a8 = local_1c8;
      local_90 = local_1c8;
      if ((long)local_84 < (long)local_1c8) {
        local_1d0 = local_1c8;
      }
      else {
        local_1d0 = (cfstringStruct *)(long)local_84;
      }
      local_b0 = local_1d0;
      local_80 = local_1d0;
      local_bc = 0;
      pcVar4 = local_48;
      local_a0 = pcVar5;
      FUN_006d6540(local_48,PTR_s_m_lTotalAmount_026a6b20);
      local_1e0 = pcVar4;
      if ((long)pcVar4 <= (long)local_bc) {
        local_1e0 = (cfstringStruct *)(long)local_bc;
      }
      local_d0 = local_1e0;
      local_b8 = local_1e0;
      local_dc = 0;
      local_f0 = local_1e0;
      pcVar5 = local_48;
      local_c8 = pcVar4;
      FUN_006d6540(local_48,PTR_s_m_lRecAmount_026a6b28);
      local_1f0 = pcVar5;
      if ((long)local_f0 < (long)pcVar5) {
        local_1f0 = local_f0;
      }
      local_100 = local_1f0;
      local_e8 = local_1f0;
      if ((long)local_dc < (long)local_1f0) {
        local_1f8 = local_1f0;
      }
      else {
        local_1f8 = (cfstringStruct *)(long)local_dc;
      }
      local_108 = local_1f8;
      local_d8 = local_1f8;
      local_129 = local_80 != local_78;
      local_f8 = pcVar5;
      if (local_129) {
        local_210 = &cf___;
      }
      else {
        local_118 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_210 = local_118;
        FUN_006d662c();
        _objc_retainAutoreleasedReturnValue();
        local_128 = local_210;
      }
      local_129 = !local_129;
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = local_210;
      if (local_129) {
        (*(code *)PTR__objc_release_02578630)(local_128);
        (*(code *)PTR__objc_release_02578630)(local_118);
      }
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      pcVar4 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
      if (pcVar4 != (cfstringStruct *)0x0) {
        local_138 = &cf_format_s_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_format_s_,PTR_s_stringByAppendingString__0269d398,local_110);
        _objc_retainAutoreleasedReturnValue();
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_S_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setText__026caa88);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (pcVar4 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe6666666666666,local_60,PTR_s_setMinimumScaleFactor__026ca9d0);
      _objc_storeStrong(&local_110,0);
      local_38 = 0;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

