// FUN_007eaa68 @ 007eaa68

void FUN_007eaa68(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *local_690;
  cfstringStruct *local_5f8;
  cfstringStruct *local_5c0;
  cfstringStruct *local_518;
  cfstringStruct *local_468;
  cfstringStruct *local_3f8;
  cfstringStruct *local_3e8;
  cfstringStruct *local_3d8;
  cfstringStruct *local_3c8;
  cfstringStruct *local_300;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2c0;
  undefined *local_260;
  undefined4 local_258;
  undefined4 local_254;
  code *local_250;
  undefined *local_248;
  undefined8 local_240;
  cfstringStruct *local_238;
  undefined *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  undefined1 local_211;
  long local_210;
  undefined *local_208;
  byte local_1f9;
  undefined *local_1f8;
  cfstringStruct *local_1f0;
  undefined *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  undefined1 local_1cc;
  undefined1 local_1cb;
  undefined1 local_1ca;
  byte local_1c9;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  long local_1b0;
  long local_1a8;
  byte local_19a;
  byte local_199;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  undefined8 local_110;
  undefined *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8 [3];
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  long local_b0;
  cfstringStruct *local_a8;
  undefined8 local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_79;
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
  local_88 = (cfstringStruct *)0x0;
  local_79 = param_1;
  _objc_storeStrong(&local_88);
  local_90 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_90,param_3);
  local_98 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_98,param_4);
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_5);
  local_a8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a8,param_6);
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_7);
  uVar2 = local_a0;
  uVar1 = DAT_028cce90;
  local_d8 = PTR___NSConcreteGlobalBlock_02578658;
  local_d0 = 0xd0800000;
  local_cc = 0;
  local_c8 = FUN_007ece18;
  local_c0 = &DAT_0257a9d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = uVar2;
  _dispatch_sync(uVar1,&local_d8);
  pcVar3 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageSource);
  _objc_retainAutoreleasedReturnValue();
  local_2c0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_2c0 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_2c0;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderName);
  _objc_retainAutoreleasedReturnValue();
  local_2e0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_2e0 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8[0] = local_2e0;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_timeString);
  _objc_retainAutoreleasedReturnValue();
  local_300 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_300 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = local_300;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if ((local_79 & 1) == 0) {
    pcVar3 = local_88;
    FUN_007edbfc();
    local_199 = (byte)pcVar3;
    local_19a = 0;
    if (((((ulong)pcVar3 & 1) == 0) && (local_88 != (cfstringStruct *)0x0)) &&
       (pcVar3 = local_88,
       (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_containsString__0269d0b0,&cf_QQbcx),
       ((ulong)pcVar3 & 1) != 0)) {
      local_19a = 1;
      lVar7 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_totalErrorCount);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar7);
      local_1b0 = lVar8 + 1;
      puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_1a8 = lVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_1b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_totalErrorCount);
      (*(code *)PTR__objc_release_02578630)(puVar9);
    }
    FUN_007e5388();
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cce78,PTR_s_addObject__0269d180,local_90);
    if ((local_199 & 1) == 0) {
      if (local_88 == (cfstringStruct *)0x0) {
        local_5f8 = &cf__gw;
      }
      else {
        local_5f8 = local_88;
      }
      pcVar3 = local_98;
      FUN_007edcd0(local_98,local_90,local_5f8,local_e0,local_f8[0],local_100);
      _objc_retainAutoreleasedReturnValue();
      local_1f0 = pcVar3;
      FUN_007e7270(pcVar3);
      if ((local_19a & 1) != 0) {
        puVar9 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar9,PTR_s_themeBoxSkipConsecutiveErrorsEna_026a8528);
        local_1f9 = (byte)puVar9;
        puVar9 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f8,PTR_s_themeBoxConsecutiveErrorCount_026a8530);
        lVar7 = local_b0;
        local_208 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_totalErrorCount);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar7);
        local_210 = lVar8;
        if (((local_1f9 & 1) != 0) && ((long)local_208 <= lVar8)) {
          pcVar3 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_completionNotificationSent
                    );
          _objc_retainAutoreleasedReturnValue();
          pcVar10 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_211 = SUB81(pcVar10,0);
          if (((ulong)pcVar10 & 1) == 0) {
            puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,
                       &cf_completionNotificationSent);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            FUN_007edf60(local_a0);
            pcVar3 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_successCount);
            _objc_retainAutoreleasedReturnValue();
            pcVar10 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = local_a8;
            local_220 = pcVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_totalDetectedCount);
            _objc_retainAutoreleasedReturnValue();
            local_690 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_690 == (cfstringStruct *)0x0) {
              local_690 = (cfstringStruct *)((long)&MACH_HEADER.magic + 1);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            local_228 = local_690;
            puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_QQbc_k);
            _objc_retainAutoreleasedReturnValue();
            local_230 = puVar9;
            FUN_007e7270(puVar9);
            _objc_storeStrong(&local_230,0);
          }
        }
        _objc_storeStrong(&local_1f8,0);
      }
      _objc_storeStrong(&local_1f0,0);
    }
    else {
      pcVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_ownedWxids);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_1b8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar9);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar10 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_1b8;
        local_1b8 = pcVar10;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_1b8,&cf_ownedWxids);
      }
      if ((local_98 != (cfstringStruct *)0x0) &&
         (pcVar3 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
         pcVar3 != (cfstringStruct *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_98);
      }
      if (local_88 == (cfstringStruct *)0x0) {
        local_518 = &cf_RYQQbc_N;
      }
      else {
        local_518 = local_88;
      }
      pcVar3 = local_98;
      FUN_007edcd0(local_98,local_90,local_518,local_e0,local_f8[0],local_100);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = pcVar3;
      FUN_007e7270(pcVar3);
      pcVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_targetWxidCount);
      _objc_retainAutoreleasedReturnValue();
      pcVar10 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_1c8 = pcVar10;
      if ((long)pcVar10 < 1) {
        local_1c8 = (cfstringStruct *)((long)&MACH_HEADER.magic + 1);
      }
      pcVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_dogModeEnabled);
      _objc_retainAutoreleasedReturnValue();
      pcVar10 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_1c9 = (byte)pcVar10;
      pcVar3 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0);
      local_1ca = local_1c8 <= pcVar3;
      local_1cb = (local_1c9 & 1) == 0 || (bool)local_1ca;
      if ((bool)local_1cb) {
        pcVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_completionNotificationSent);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        local_1cc = SUB81(pcVar10,0);
        if (((ulong)pcVar10 & 1) == 0) {
          puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,
                     &cf_completionNotificationSent);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          FUN_007edf60(local_a0);
          pcVar3 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_successCount);
          _objc_retainAutoreleasedReturnValue();
          pcVar10 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_a8;
          local_1d8 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_totalDetectedCount);
          _objc_retainAutoreleasedReturnValue();
          local_5c0 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_5c0 == (cfstringStruct *)0x0) {
            local_5c0 = (cfstringStruct *)((long)&MACH_HEADER.magic + 1);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_1e0 = local_5c0;
          puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_QQbc_k
                    );
          _objc_retainAutoreleasedReturnValue();
          local_1e8 = puVar9;
          FUN_007e7270(puVar9);
          _objc_storeStrong(&local_1e8,0);
        }
      }
      _objc_storeStrong(&local_1c0);
      _objc_storeStrong(&local_1b8,0);
    }
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = DAT_028cce90;
    local_140 = PTR___NSConcreteGlobalBlock_02578658;
    local_138 = 0xd0800000;
    local_134 = 0;
    local_130 = FUN_007ecfdc;
    local_128 = &DAT_025800c0;
    local_108 = puVar9;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar3 = local_98;
    local_120 = puVar9;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_a0;
    local_118 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = uVar2;
    _dispatch_sync(uVar1,&local_140);
    puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_totalErrorCount);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_firstFailed);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    pcVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_successCount);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_148 = pcVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
               (undefined1 *)((long)&pcVar10->field0_0x0 + 1));
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_successCount);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    pcVar3 = local_98;
    FUN_007ed3b8(local_98,local_90,local_e0,local_f8[0],local_100);
    _objc_retainAutoreleasedReturnValue();
    local_150 = pcVar3;
    FUN_007e7270(pcVar3);
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = &cf_<;
    puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_0_);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_type;
    local_50 = &cf_redeem_success;
    local_70 = &cf_code;
    if (local_90 == (cfstringStruct *)0x0) {
      local_3c8 = &cf___;
    }
    else {
      local_3c8 = local_90;
    }
    local_48 = local_3c8;
    local_68 = &cf_wxid;
    if (local_98 == (cfstringStruct *)0x0) {
      local_3d8 = &cf___;
    }
    else {
      local_3d8 = local_98;
    }
    local_40 = local_3d8;
    local_60 = &cf_messageSource;
    if (local_e0 == (cfstringStruct *)0x0) {
      local_3e8 = &cf___;
    }
    else {
      local_3e8 = local_e0;
    }
    local_38 = local_3e8;
    local_58 = &cf_senderName;
    if (local_f8[0] == (cfstringStruct *)0x0) {
      local_3f8 = &cf___;
    }
    else {
      local_3f8 = local_f8[0];
    }
    local_30 = local_3f8;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_160 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar4;
    FUN_007ed62c(local_158,local_160,puVar4);
    puVar9 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    local_170 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_themeBoxTotalSuccessCount_026a8508);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar9,PTR_s_setThemeBoxTotalSuccessCount__026a8510,puVar4 + 1);
    pcVar5 = "MMServiceCenter";
    _objc_getClass();
    local_178 = (cfstringStruct *)pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_s_getService__0269d170;
    pcVar6 = "CContactMgr";
    local_180 = (cfstringStruct *)pcVar5;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_performSelector_withObject__026ca7c0,puVar9,pcVar6);
    _objc_retainAutoreleasedReturnValue();
    local_188 = (cfstringStruct *)pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_190 = (cfstringStruct *)pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    local_468 = (cfstringStruct *)pcVar5;
    if ((cfstringStruct *)pcVar5 == (cfstringStruct *)0x0) {
      local_468 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = local_468;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar3 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,local_198);
    puVar9 = local_170;
    if (((ulong)pcVar3 & 1) == 0) {
      puVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_themeBoxTotalFriendRedeemCount_026a8518)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar9,PTR_s_setThemeBoxTotalFriendRedeemCoun_026a8520,puVar4 + 1);
    }
    else {
      FUN_007edabc(1);
    }
    _objc_storeStrong(&local_198);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_108,0);
  }
  uVar2 = local_a0;
  uVar1 = DAT_028cce90;
  local_260 = PTR___NSConcreteGlobalBlock_02578658;
  local_258 = 0xd0800000;
  local_254 = 0;
  local_250 = FUN_007ee084;
  local_248 = &DAT_0257ab20;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar3 = local_a8;
  local_240 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_238 = pcVar3;
  _dispatch_sync(uVar1,&local_260);
  _objc_storeStrong(&local_238);
  _objc_storeStrong(&local_240,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(local_f8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

