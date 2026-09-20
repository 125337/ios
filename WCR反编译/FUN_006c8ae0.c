// FUN_006c8ae0 @ 006c8ae0

void FUN_006c8ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  double dVar10;
  cfstringStruct *local_b10;
  cfstringStruct *local_af0;
  cfstringStruct *local_ad8;
  cfstringStruct *local_ac0;
  cfstringStruct *local_ab8;
  cfstringStruct *local_a48;
  cfstringStruct *local_a20;
  ulong local_978;
  ulong local_960;
  ulong local_948;
  cfstringStruct *local_920;
  cfstringStruct *local_8e8;
  cfstringStruct *local_8c8;
  ulong local_808;
  ulong local_7f0;
  ulong local_7c8;
  ulong local_7b0;
  ulong local_748;
  ulong local_730;
  ulong local_6b8;
  cfstringStruct *local_678;
  cfstringStruct *local_4c8;
  cfstringStruct *local_448;
  ulong local_3e0;
  ulong local_3c8;
  cfstringStruct *local_398;
  byte local_389;
  cfstringStruct *local_388;
  cfstringStruct *local_380;
  cfstringStruct *local_378;
  byte local_369;
  cfstringStruct *local_368;
  byte local_359;
  cfstringStruct *local_358;
  cfstringStruct *local_350;
  undefined1 local_341;
  cfstringStruct *local_340;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  undefined *local_328;
  byte local_319;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  undefined *local_308;
  undefined *local_300;
  undefined *local_2f8;
  undefined *local_2f0;
  undefined *local_2e8;
  byte local_2d9;
  ulong local_2d8;
  byte local_2c9;
  ulong local_2c8;
  byte local_2b9;
  ulong local_2b8;
  byte local_2a9;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  bool local_289;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  double local_268;
  cfstringStruct *local_260;
  long local_258;
  long local_250;
  byte local_241;
  ulong local_240;
  byte local_231;
  ulong local_230;
  ulong local_228;
  byte local_219;
  ulong local_218;
  byte local_209;
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  byte local_1e1;
  ulong local_1e0;
  byte local_1d1;
  ulong local_1d0;
  ulong local_1c8;
  double local_1c0;
  cfstringStruct *local_1b8;
  byte local_1a9;
  ulong local_1a8;
  ulong local_1a0;
  double local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  byte local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140 [2];
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  char *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  char *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  ulong local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  double local_60;
  undefined4 local_58;
  cfstringStruct *local_48;
  ulong local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_redEnvelopCustomNotificationEnab_026a6a40);
  if (((ulong)pcVar2 & 1) == 0) {
    local_58 = 1;
  }
  else {
    dVar10 = 0.0;
    local_60 = 0.0;
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_receiveAmount);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    local_81 = 0;
    local_3c8 = uVar3;
    if (uVar3 == 0) {
      local_3e0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_receive_amount);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_3e0;
      if (local_3e0 == 0) {
        local_3e0 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_3e0;
      }
      local_3c8 = local_3e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_3c8;
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_68;
    if (local_68 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar5 = local_68;
      if ((uVar3 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((uVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_doubleValue_026ca608);
          local_60 = dVar10;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_doubleValue_026ca608);
        local_60 = dVar10;
      }
      if ((local_60 <= 0.0) || (10000.0 <= local_60)) {
        if (10000.0 <= local_60) {
          local_60 = local_60 / 100.0;
        }
      }
      else {
        local_60 = local_60 / 100.0;
      }
    }
    if (0.0 < local_60) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sessionUserName_026a6a48);
      _objc_retainAutoreleasedReturnValue();
      local_448 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_448 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_448;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_90;
      puVar4 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_rangeOfString__0269d838,&cf__chatroom);
      local_91 = pcVar2 != (cfstringStruct *)0x7fffffffffffffff;
      local_a8 = pcVar2;
      local_a0 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      pcVar6 = "MMServiceCenter";
      _objc_getClass();
      local_b8 = (cfstringStruct *)pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = "CContactMgr";
      local_c0 = (cfstringStruct *)pcVar6;
      _objc_getClass();
      pcVar2 = local_c0;
      local_c8 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                 pcVar7);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = pcVar2;
      if ((pcVar2 != (cfstringStruct *)0x0) &&
         (pcVar2 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
         pcVar2 != (cfstringStruct *)0x0)) {
        pcVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_getContactByName__0269d178,local_90);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = pcVar2;
        if (pcVar2 != (cfstringStruct *)0x0) {
          pcVar2 = &cf_getContactDisplayName;
          _NSSelectorFromString();
          pcVar8 = local_d8;
          local_e0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_respondsToSelector__026ca818,pcVar2);
          if (((ulong)pcVar8 & 1) == 0) {
            pcVar2 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
            _objc_retainAutoreleasedReturnValue();
            local_4c8 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_4c8 = local_90;
            }
            _objc_storeStrong(&local_b0,local_4c8);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          else {
            pcVar8 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_performSelector__026ca7b8,local_e0)
            ;
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_b0;
            local_b0 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
        }
        _objc_storeStrong(&local_d8,0);
      }
      pcVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = &cf__J;
        if ((local_91 & 1) == 0) {
          pcVar2 = &cf_yJ;
        }
        _objc_storeStrong(&local_b0,pcVar2);
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = &cf__gw;
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = &cf___;
      local_f9 = 0;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_senderUserName_026a6a50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      if (pcVar2 != (cfstringStruct *)0x0) {
        pcVar8 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_senderUserName_026a6a50);
        _objc_retainAutoreleasedReturnValue();
        local_f9 = 1;
        local_f8 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = pcVar8 != (cfstringStruct *)0x0;
      }
      if ((local_f9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (bVar1) {
        pcVar6 = "MMServiceCenter";
        _objc_getClass();
        local_108 = (cfstringStruct *)pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = "CContactMgr";
        local_110 = (cfstringStruct *)pcVar6;
        _objc_getClass();
        pcVar2 = local_110;
        local_118 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                   pcVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_s_getContactByName__0269d178;
        local_120 = pcVar2;
        if (pcVar2 != (cfstringStruct *)0x0) {
          pcVar8 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_senderUserName_026a6a50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_performSelector_withObject__026ca7c0,puVar4);
          _objc_retainAutoreleasedReturnValue();
          local_128 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          if (local_128 == (cfstringStruct *)0x0) {
            pcVar8 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_senderUserName_026a6a50);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_e8;
            local_e8 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          else {
            local_130 = (cfstringStruct *)0x0;
            pcVar2 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsAliasName_026a6a58);
            if (((ulong)pcVar2 & 1) != 0) {
              pcVar8 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_performSelector__026ca7b8,PTR_s_m_nsAliasName_026a6a58);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_130;
              local_130 = pcVar8;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
            }
            if (((local_130 == (cfstringStruct *)0x0) ||
                (pcVar2 = local_130,
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
                pcVar2 == (cfstringStruct *)0x0)) &&
               (pcVar2 = local_128,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_128,PTR_s_respondsToSelector__026ca818,PTR_s_valueForKey__0269d128),
               ((ulong)pcVar2 & 1) != 0)) {
              pcVar8 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_valueForKey__0269d128,&cf_m_nsAlias);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_130;
              local_130 = pcVar8;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
            }
            pcVar2 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            if (pcVar2 != (cfstringStruct *)0x0) {
              _objc_storeStrong(pcVar2,&local_f0,local_130);
            }
            pcVar2 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_valueForKey__0269d128,&cf_m_nsRemark);
            _objc_retainAutoreleasedReturnValue();
            local_140[0] = pcVar2;
            if ((pcVar2 == (cfstringStruct *)0x0) ||
               ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0),
               pcVar2 == (cfstringStruct *)0x0)) {
              pcVar2 = &cf_getContactDisplayName;
              _NSSelectorFromString(0);
              pcVar8 = local_128;
              local_148 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_respondsToSelector__026ca818,pcVar2);
              if (((ulong)pcVar8 & 1) == 0) {
                pcVar2 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_128,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
                _objc_retainAutoreleasedReturnValue();
                local_150 = pcVar2;
                if ((pcVar2 == (cfstringStruct *)0x0) ||
                   ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0),
                   pcVar2 == (cfstringStruct *)0x0)) {
                  pcVar8 = local_38;
                  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_senderUserName_026a6a50);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar2 = local_e8;
                  local_e8 = pcVar8;
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                }
                else {
                  _objc_storeStrong(pcVar2,&local_e8,local_150);
                }
                _objc_storeStrong(&local_150,0);
              }
              else {
                pcVar8 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_128,PTR_s_performSelector__026ca7b8,local_148);
                _objc_retainAutoreleasedReturnValue();
                pcVar2 = local_e8;
                local_e8 = pcVar8;
                (*(code *)PTR__objc_release_02578630)(pcVar2);
              }
            }
            else {
              _objc_storeStrong(&local_e8,local_140[0]);
            }
            _objc_storeStrong(local_140);
            _objc_storeStrong(&local_130,0);
          }
          _objc_storeStrong(&local_128,0);
        }
        _objc_storeStrong(&local_120);
        _objc_storeStrong(&local_110,0);
      }
      local_159 = 0;
      pcVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      bVar1 = false;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_senderUserName_026a6a50);
        _objc_retainAutoreleasedReturnValue();
        local_159 = 1;
        local_158 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = pcVar2 != (cfstringStruct *)0x0;
      }
      if ((local_159 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_158);
      }
      if (bVar1) {
        pcVar8 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_senderUserName_026a6a50);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_f0;
        local_f0 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
      local_168 = puVar4;
      _objc_alloc_init();
      local_170 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar9,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss);
      puVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_stringFromDate__0269d1d8,local_168);
      _objc_retainAutoreleasedReturnValue();
      local_178 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = &cf___;
      if (local_60 == (double)(long)local_60) {
        pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_180;
        local_180 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      else {
        pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_180;
        local_180 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = &cf__S;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgType_026a6a60);
      _objc_retainAutoreleasedReturnValue();
      local_678 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_678 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = local_678;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_isEqualToString__0269ccc8,&cf_0);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_isEqualToString__0269ccc8,&cf_1);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_isEqualToString__0269ccc8,&cf_2);
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
            if (pcVar2 != (cfstringStruct *)0x0) {
              pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf__S_);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_188;
              local_188 = pcVar8;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
            }
          }
          else {
            _objc_storeStrong(&local_188,&cf_SN_S);
          }
        }
        else {
          _objc_storeStrong(&local_188,&cf_bKbl_S);
        }
      }
      else {
        _objc_storeStrong(&local_188,&cf_nf_S);
      }
      dVar10 = 0.0;
      local_198 = 0.0;
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_totalAmount);
      _objc_retainAutoreleasedReturnValue();
      local_1a9 = 0;
      local_6b8 = uVar3;
      if (uVar3 == 0) {
        local_6b8 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_total_amount);
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = local_6b8;
      }
      local_1a9 = uVar3 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = local_6b8;
      if ((local_1a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1a8);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_1a0;
      if (local_1a0 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar5 = local_1a0;
        if ((uVar3 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_doubleValue_026ca608);
            local_198 = dVar10;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_doubleValue_026ca608);
          local_198 = dVar10;
        }
        if ((local_198 <= 0.0) || (10000.0 <= local_198)) {
          if (10000.0 <= local_198) {
            local_198 = local_198 / 100.0;
          }
        }
        else {
          local_198 = local_198 / 100.0;
        }
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1b8 = &cf___;
      if (0.0 < local_198) {
        pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_1b8;
        local_1b8 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      dVar10 = -1.0;
      local_1c0 = -1.0;
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_receiveTotalAmount);
      _objc_retainAutoreleasedReturnValue();
      local_1d1 = 0;
      local_1e1 = 0;
      local_730 = uVar3;
      if (uVar3 == 0) {
        local_748 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_receive_total_amount);
        _objc_retainAutoreleasedReturnValue();
        local_1d1 = 1;
        local_1d0 = local_748;
        if (local_748 == 0) {
          local_748 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_receivedTotalAmount);
          _objc_retainAutoreleasedReturnValue();
          local_1e1 = 1;
          local_1e0 = local_748;
        }
        local_730 = local_748;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = local_730;
      if ((local_1e1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1e0);
      }
      if ((local_1d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1d0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_1c8;
      if (local_1c8 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar5 = local_1c8;
        if ((uVar3 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_doubleValue_026ca608);
            local_1c0 = dVar10;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_doubleValue_026ca608);
          local_1c0 = dVar10;
        }
        if ((local_1c0 <= 0.0) || (10000.0 <= local_1c0)) {
          if (10000.0 <= local_1c0) {
            local_1c0 = local_1c0 / 100.0;
          }
        }
        else {
          local_1c0 = local_1c0 / 100.0;
        }
      }
      local_1f0 = 0;
      local_1f8 = 0;
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_totalNum);
      _objc_retainAutoreleasedReturnValue();
      local_209 = 0;
      local_219 = 0;
      local_7b0 = uVar3;
      if (uVar3 == 0) {
        local_7c8 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_total_num);
        _objc_retainAutoreleasedReturnValue();
        local_209 = 1;
        local_208 = local_7c8;
        if (local_7c8 == 0) {
          local_7c8 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_totalCnt);
          _objc_retainAutoreleasedReturnValue();
          local_219 = 1;
          local_218 = local_7c8;
        }
        local_7b0 = local_7c8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_200 = local_7b0;
      if ((local_219 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_218);
      }
      if ((local_209 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_208);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_receiveNum);
      _objc_retainAutoreleasedReturnValue();
      local_231 = 0;
      local_241 = 0;
      local_7f0 = uVar3;
      if (uVar3 == 0) {
        local_808 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_receive_num);
        _objc_retainAutoreleasedReturnValue();
        local_231 = 1;
        local_230 = local_808;
        if (local_808 == 0) {
          local_808 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_receiveCnt);
          _objc_retainAutoreleasedReturnValue();
          local_241 = 1;
          local_240 = local_808;
        }
        local_7f0 = local_808;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_228 = local_7f0;
      if ((local_241 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_240);
      }
      if ((local_231 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_230);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_200;
      if (local_200 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar5 = local_200;
        if ((uVar3 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar5 & 1) != 0) {
            uVar3 = local_200;
            (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_integerValue_026ca750);
            local_1f0 = uVar3;
          }
        }
        else {
          uVar3 = local_200;
          (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_integerValue_026ca750);
          local_1f0 = uVar3;
        }
      }
      uVar3 = local_228;
      if (local_228 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar5 = local_228;
        if ((uVar3 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar5 & 1) != 0) {
            uVar3 = local_228;
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_integerValue_026ca750);
            local_1f8 = uVar3;
          }
        }
        else {
          uVar3 = local_228;
          (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_integerValue_026ca750);
          local_1f8 = uVar3;
        }
      }
      local_250 = 0;
      local_258 = 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_260 = &cf___;
      if (0 < (long)local_1f0) {
        local_250 = local_1f8 + 1;
        local_258 = local_1f0 - local_250;
        if (local_258 < 0) {
          local_258 = 0;
        }
        if (local_258 == 0) {
          pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__b_);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_260;
          local_260 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        else {
          pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__b_);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_260;
          local_260 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
      }
      local_268 = -1.0;
      if (0.0 < local_198) {
        if (local_1c0 < 0.0) {
          if (((0 < (long)local_1f0) && (local_250 <= (long)local_1f0)) &&
             (local_268 = (local_198 * (double)(long)(local_1f0 - local_250)) /
                          (double)(long)local_1f0, local_268 < 0.0)) {
            local_268 = 0.0;
          }
        }
        else {
          local_268 = local_198 - local_1c0;
          if (local_268 < 0.0) {
            local_268 = 0.0;
          }
        }
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_270 = &cf___;
      if (0.0 <= local_268) {
        pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_270;
        local_270 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      if ((local_91 & 1) == 0) {
        local_8c8 = &cf_yJ;
      }
      else {
        local_8c8 = local_b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_278 = local_8c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_8c8,PTR_s_length_0269cca0);
      if (local_8c8 == (cfstringStruct *)0x0) {
        pcVar2 = &cf__J;
        if ((local_91 & 1) == 0) {
          pcVar2 = &cf_yJ;
        }
        _objc_storeStrong(&local_278,pcVar2);
      }
      local_289 = false;
      bVar1 = (local_91 & 1) == 0;
      if (bVar1) {
        local_8e8 = &cf_yJ;
      }
      else {
        local_8e8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_288 = local_8e8;
      }
      local_289 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_280 = local_8e8;
      if ((local_289 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_288);
      }
      pcVar2 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_298 = pcVar2;
      local_2a9 = 0;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wishText_026a6a68);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar8 == (cfstringStruct *)0x0) {
        local_920 = (cfstringStruct *)0x0;
      }
      else {
        local_920 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wishText_026a6a68);
        _objc_retainAutoreleasedReturnValue();
        local_2a9 = 1;
        local_2a8 = local_920;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_2a0 = local_920;
      if ((local_2a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_2a8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if ((local_2a0 == (cfstringStruct *)0x0) ||
         (pcVar2 = local_2a0, (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0)
         , pcVar2 == (cfstringStruct *)0x0)) {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_wishing);
        _objc_retainAutoreleasedReturnValue();
        local_2b9 = 0;
        local_2c9 = 0;
        local_2d9 = 0;
        local_948 = uVar3;
        if (uVar3 == 0) {
          local_960 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_wish);
          _objc_retainAutoreleasedReturnValue();
          local_2b9 = 1;
          local_2b8 = local_960;
          if (local_960 == 0) {
            local_978 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
            _objc_retainAutoreleasedReturnValue();
            local_2c9 = 1;
            local_2c8 = local_978;
            if (local_978 == 0) {
              local_978 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_blessing);
              _objc_retainAutoreleasedReturnValue();
              local_2d9 = 1;
              local_2d8 = local_978;
            }
            local_960 = local_978;
          }
          local_948 = local_960;
        }
        _objc_storeStrong(&local_2a0,local_948);
        if ((local_2d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2d8);
        }
        if ((local_2c9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2c8);
        }
        if ((local_2b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2b8);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        pcVar2 = local_2a0;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
        pcVar8 = local_2a0;
        if (((ulong)pcVar2 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)pcVar8 & 1) == 0) {
            _objc_storeStrong(&local_2a0,0);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_stringValue_0269ef08);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_2a0;
          local_2a0 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
      }
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_2e8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ST_N_b0R);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_2f0 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_egn_);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_2f8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___W_);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_300 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__g_);
      _objc_retainAutoreleasedReturnValue();
      local_319 = 0;
      pcVar2 = local_2a0;
      local_308 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_a20 = &cf___;
      }
      else {
        local_a20 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Yl_);
        _objc_retainAutoreleasedReturnValue();
        local_319 = 1;
        local_318 = local_a20;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_310 = local_a20;
      if ((local_319 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_318);
      }
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_e_);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_328 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_redEnvelopNotificationJumpText_026a6a70);
      _objc_retainAutoreleasedReturnValue();
      local_a48 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_a48 = &cf_pQlSa__g;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_330 = local_a48;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_redEnvelopNotificationFormat_026a6a78);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar2;
      FUN_006d0554();
      _objc_retainAutoreleasedReturnValue();
      local_338 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_retain_02578638)();
      local_340 = &cf_filehelper;
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_redEnvelopNotificationSessionID_026a6a80)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (pcVar8 != (cfstringStruct *)0x0) {
        pcVar8 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_redEnvelopNotificationSessionID_026a6a80);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_340;
        local_340 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_redEnvelopNotificationType_026a6a88);
      if (pcVar2 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
        FUN_006d12cc(0);
        local_341 = SUB81(pcVar2,0);
        local_359 = 0;
        local_369 = 0;
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_redEnvelopNotificationJumpColor_026a6a98);
          _objc_retainAutoreleasedReturnValue();
          local_369 = 1;
          local_ad8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_ad8 = &cf_DDA0DD;
          }
          local_ac0 = local_ad8;
          local_368 = pcVar2;
        }
        else {
          pcVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_redEnvelopNotificationJumpDarkCo_026a6a90);
          _objc_retainAutoreleasedReturnValue();
          local_359 = 1;
          local_ab8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_ab8 = &cf_DDA0DD;
          }
          local_ac0 = local_ab8;
          local_358 = pcVar2;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_350 = local_ac0;
        if ((local_369 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_368);
        }
        if ((local_359 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_358);
        }
        if (local_90 == (cfstringStruct *)0x0) {
          local_af0 = &cf___;
        }
        else {
          local_af0 = local_90;
        }
        FUN_006d139c();
        _objc_retainAutoreleasedReturnValue();
        local_389 = 0;
        local_378 = local_af0;
        (*(code *)PTR__objc_msgSend_02578628)(local_af0,PTR_s_length_0269cca0);
        if (local_af0 == (cfstringStruct *)0x0) {
          local_b10 = &cf_WCRefineRedEnvelopColor___;
        }
        else {
          local_b10 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf___session___);
          _objc_retainAutoreleasedReturnValue();
          local_389 = 1;
          local_388 = local_b10;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_380 = local_b10;
        if ((local_389 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_388);
        }
        pcVar2 = local_338;
        _WCRefineRenderSystemTipMessage(local_338,local_330,local_350,local_380);
        _objc_retainAutoreleasedReturnValue();
        local_398 = pcVar2;
        _WCRefineInsertLocalSystemTip(local_340,pcVar2);
        _objc_storeStrong(&local_398);
        _objc_storeStrong(&local_380,0);
        _objc_storeStrong(&local_378,0);
        _objc_storeStrong(&local_350,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_338,
                   local_340);
      }
      _objc_storeStrong(&local_340);
      _objc_storeStrong(&local_338,0);
      _objc_storeStrong(&local_330,0);
      _objc_storeStrong(&local_328,0);
      _objc_storeStrong(&local_310,0);
      _objc_storeStrong(&local_308,0);
      _objc_storeStrong(&local_300,0);
      _objc_storeStrong(&local_2f8,0);
      _objc_storeStrong(&local_2f0,0);
      _objc_storeStrong(&local_2e8,0);
      _objc_storeStrong(&local_2a0,0);
      _objc_storeStrong(&local_298,0);
      _objc_storeStrong(&local_280,0);
      _objc_storeStrong(&local_278,0);
      _objc_storeStrong(&local_270,0);
      _objc_storeStrong(&local_260,0);
      _objc_storeStrong(&local_228,0);
      _objc_storeStrong(&local_200,0);
      _objc_storeStrong(&local_1c8,0);
      _objc_storeStrong(&local_1b8,0);
      _objc_storeStrong(&local_1a0,0);
      _objc_storeStrong(&local_190,0);
      _objc_storeStrong(&local_188,0);
      _objc_storeStrong(&local_180,0);
      _objc_storeStrong(&local_178,0);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_168,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_90,0);
      local_58 = 0;
    }
    else {
      local_58 = 1;
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

