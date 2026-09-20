// FUN_0074f804 @ 0074f804

void FUN_0074f804(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 local_268;
  cfstringStruct *local_228;
  cfstringStruct *local_218;
  cfstringStruct *local_208;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1b8;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  byte local_149;
  undefined *local_148;
  undefined *local_140;
  undefined4 local_134;
  uint local_130;
  undefined4 local_12c;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
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
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_1);
  local_d8 = (cfstringStruct *)0x0;
  local_e0 = (cfstringStruct *)0x0;
  local_e8 = 0;
  local_f0 = 0;
  pcVar1 = local_d0;
  FUN_00752f7c(local_d0,&local_e8,&local_f0);
  _objc_storeStrong(&local_d8,local_e8);
  _objc_storeStrong(&local_e0,local_f0);
  if (((ulong)pcVar1 & 1) == 0) {
    local_100 = 1;
  }
  else {
    pcVar1 = local_e0;
    FUN_007533d8(local_e0,local_d8);
    if (((ulong)pcVar1 & 1) == 0) {
      local_268 = 0x3ff3333333333333;
      pcVar1 = local_d0;
      FUN_007490e0(local_d0,&cf_groupspecial,local_d8);
      if (((ulong)pcVar1 & 1) == 0) {
        local_100 = 1;
      }
      else {
        pcVar1 = local_d8;
        FUN_0074e2f8();
        _objc_retainAutoreleasedReturnValue();
        local_108 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_100 = 1;
        }
        else {
          pcVar1 = local_e0;
          FUN_00753808(local_e0,local_d8);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_e0;
          local_110 = pcVar1;
          FUN_00753b40();
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_d0;
          local_118 = pcVar2;
          FUN_007520f0(local_d0,local_d8);
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_1b8 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_1b8;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar1 = local_d0;
          FUN_0074d000(local_d0,&cf_m_n64MesSvrID);
          pcVar2 = local_d0;
          local_128 = pcVar1;
          FUN_00748ad4(local_d0,&cf_m_uiMesLocalID);
          local_12c = SUB84(pcVar2,0);
          pcVar1 = local_d0;
          FUN_00748ad4(local_d0,&cf_m_uiCreateTime);
          local_130 = (uint)pcVar1;
          pcVar1 = local_d0;
          FUN_00748ad4(local_d0,&cf_m_uiMessageType);
          local_134 = SUB84(pcVar1,0);
          local_c8 = &cf_sessionUserName;
          if (local_e0 == (cfstringStruct *)0x0) {
            local_1e8 = &cf___;
          }
          else {
            local_1e8 = local_e0;
          }
          local_78 = local_1e8;
          local_c0 = &cf_sessionName;
          if (local_118 == (cfstringStruct *)0x0) {
            local_1f8 = &cf___;
          }
          else {
            local_1f8 = local_118;
          }
          local_70 = local_1f8;
          local_b8 = &cf_senderUserName;
          if (local_d8 == (cfstringStruct *)0x0) {
            local_208 = &cf___;
          }
          else {
            local_208 = local_d8;
          }
          local_68 = local_208;
          local_b0 = &cf_senderName;
          if (local_110 == (cfstringStruct *)0x0) {
            local_218 = &cf___;
          }
          else {
            local_218 = local_110;
          }
          local_60 = local_218;
          local_a8 = &cf_content;
          local_58 = local_120;
          local_a0 = &cf_groupName;
          if (local_118 == (cfstringStruct *)0x0) {
            local_228 = &cf___;
          }
          else {
            local_228 = local_118;
          }
          local_50 = local_228;
          local_98 = &cf_messageType;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     (ulong)pcVar1 & 0xffffffff);
          _objc_retainAutoreleasedReturnValue();
          local_90 = &cf_mesSvrID;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_48 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,
                     local_128);
          _objc_retainAutoreleasedReturnValue();
          local_88 = &cf_localID;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_40 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_12c);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_80 = &cf_time;
          local_149 = 0;
          local_38 = puVar5;
          if (local_130 == 0) {
            puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            local_149 = 1;
            local_148 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          else {
            local_268 = NEON_ucvtf((ulong)local_130);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_268,puVar7,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_c8,10);
          _objc_retainAutoreleasedReturnValue();
          local_140 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar7);
          if ((local_149 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_148);
          }
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          FUN_00753d50(local_d8,local_140);
          FUN_00751420(local_d8,local_140);
          puVar7 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_108;
          local_178 = PTR___NSConcreteStackBlock_02578660;
          local_170 = 0xc2000000;
          local_16c = 0;
          local_168 = FUN_00753f50;
          local_160 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_158 = pcVar1;
          _dispatch_async(puVar7,&local_178);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          _objc_storeStrong(&local_158);
          _objc_storeStrong(&local_140,0);
          _objc_storeStrong(&local_120,0);
          _objc_storeStrong(&local_118,0);
          _objc_storeStrong(&local_110,0);
          local_100 = 0;
        }
        _objc_storeStrong(&local_108,0);
      }
    }
    else {
      local_100 = 1;
    }
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

