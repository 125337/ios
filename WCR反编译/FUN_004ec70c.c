// FUN_004ec70c @ 004ec70c

void FUN_004ec70c(double param_1,cfstringStruct *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  undefined **ppuVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 ****ppppuVar14;
  ulong uVar15;
  cfstringStruct *local_960;
  cfstringStruct *local_918;
  cfstringStruct *local_8c0;
  cfstringStruct *local_868;
  cfstringStruct *local_790;
  cfstringStruct *local_778;
  cfstringStruct *local_760;
  undefined8 *local_738;
  undefined8 *local_728;
  cfstringStruct *local_6e8;
  cfstringStruct *local_6c8;
  long local_6a0;
  long local_640;
  cfstringStruct *local_628;
  cfstringStruct *local_598;
  cfstringStruct *local_540;
  cfstringStruct *local_530;
  cfstringStruct *local_4f0;
  int local_4b4;
  cfstringStruct **local_4a0;
  cfstringStruct *local_468;
  cfstringStruct *local_380;
  cfstringStruct *local_338;
  cfstringStruct *local_2b8;
  cfstringStruct *local_298;
  char *local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  undefined *local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  undefined8 ***local_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  byte local_1d9;
  undefined8 ***local_1d8;
  long local_1d0;
  byte local_1c1;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  long local_1a8;
  byte local_199;
  long local_198;
  long local_190;
  long local_188;
  undefined1 local_179;
  long local_178;
  byte local_169;
  long local_168;
  long local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  byte local_f9;
  undefined *local_f8;
  undefined *local_f0;
  int local_e4;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  char *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_3;
  local_28 = param_2;
  _objc_storeStrong(&local_38,param_4);
  FUN_004eb604();
  if ((DAT_028caea0 & 1) == 0) {
    (*DAT_028cae90)(local_28,local_30,local_38);
    local_48 = 1;
    goto LAB_004efae0;
  }
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsContent_0269d0a0);
  _objc_retainAutoreleasedReturnValue();
  local_298 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_298 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_298;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsFromUsr_0269d088);
  _objc_retainAutoreleasedReturnValue();
  local_2b8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_2b8 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_2b8;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  ppuVar4 = &PTR___NSConcreteGlobalBlock_0257d678;
  _objc_retainBlock();
  local_60 = (cfstringStruct *)ppuVar4;
  (*(code *)((cfstringStruct *)ppuVar4)->field2_0x10)(ppuVar4,local_50,&cf_<session>,&cf_<_session>)
  ;
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_60;
  local_68 = (cfstringStruct *)ppuVar4;
  (*(code *)local_60->field2_0x10)(local_60,local_50,&cf_<newmsgid>,&cf_<_newmsgid>);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar3;
  if (DAT_028caeb0 == (cfstringStruct *)0x0) {
    pcVar5 = "MMServiceCenter";
    _objc_getClass();
    DAT_028caeb0 = (cfstringStruct *)pcVar5;
  }
  pcVar3 = DAT_028caeb0;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  if (DAT_028caeb8 == (char *)0x0) {
    pcVar5 = "CContactMgr";
    _objc_getClass();
    DAT_028caeb8 = pcVar5;
  }
  pcVar5 = DAT_028caeb8;
  _objc_retainAutoreleaseReturnValue();
  pcVar6 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar5);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar6;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getContactByName__0269d178,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_91 = 0;
  local_80 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_m_nsUsrName_0269d638);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_338 = local_58;
  }
  else {
    local_338 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = local_338;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_338;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = &cf___;
  pcVar3 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar6 = local_80;
    FUN_004f2588();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_a0;
    local_a0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  else {
    pcVar6 = local_50;
    FUN_004f1e30(local_50,local_60);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_a0;
    local_a0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if ((pcVar3 == (cfstringStruct *)0x0) &&
     (pcVar3 = local_88,
     (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     ((ulong)pcVar3 & 1) == 0)) {
    if (local_88 == (cfstringStruct *)0x0) {
      local_380 = &cf___;
    }
    else {
      local_380 = local_88;
    }
    _objc_storeStrong(&local_a0,local_380);
  }
  pcVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (((pcVar3 == (cfstringStruct *)0x0) ||
      (pcVar3 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
      pcVar3 == (cfstringStruct *)0x0)) ||
     (pcVar3 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    (*DAT_028cae90)(local_28,local_30,local_38);
    local_48 = 1;
  }
  else {
    FUN_004f2844();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      if (DAT_028caed0 == (char *)0x0) {
        pcVar5 = "SettingUtil";
        _objc_getClass();
        DAT_028caed0 = pcVar5;
      }
      pcVar5 = DAT_028caed0;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_getLocalUsrName__0269ce98,0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_b0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
      if (((ulong)pcVar5 & 1) != 0) {
        _objc_storeStrong(&local_a8,local_b0);
      }
      _objc_storeStrong(&local_b0,0);
    }
    pcVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    if ((pcVar3 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_88,
       (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,local_a8),
       ((ulong)pcVar3 & 1) == 0)) {
      if (DAT_028caeb0 == (cfstringStruct *)0x0) {
        pcVar5 = "MMServiceCenter";
        _objc_getClass();
        DAT_028caeb0 = (cfstringStruct *)pcVar5;
      }
      pcVar3 = DAT_028caeb0;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      if (DAT_028caed8 == (char *)0x0) {
        pcVar5 = "CMessageMgr";
        _objc_getClass();
        DAT_028caed8 = pcVar5;
      }
      pcVar5 = DAT_028caed8;
      _objc_retainAutoreleaseReturnValue();
      pcVar6 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar5);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar6 = local_68;
      pcVar3 = local_b8;
      if (local_b8 == (cfstringStruct *)0x0) {
        (*DAT_028cae90)(local_28,local_30,local_38);
        local_48 = 1;
      }
      else {
        pcVar8 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_longLongValue_0269d5e0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_GetMsg_n64SvrID__0269d5f0,pcVar6,pcVar8);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          (*DAT_028cae90)(local_28,local_30,local_38);
          local_48 = 1;
        }
        else {
          local_d1 = 0;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_m_nsRealChatUsr_0269d190);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (pcVar6 == (cfstringStruct *)0x0) {
            local_468 = local_88;
          }
          else {
            local_468 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_nsRealChatUsr_0269d190);
            _objc_retainAutoreleasedReturnValue();
            local_d1 = 1;
            local_d0 = local_468;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = local_468;
          if ((local_d1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_d0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
          uVar15 = 0;
          if (pcVar3 == (cfstringStruct *)0x0) {
LAB_004ed3f8:
            pcVar3 = local_68;
            FUN_004f2c04(uVar15,local_68,local_70);
            if (((ulong)pcVar3 & 1) == 0) {
              local_48 = 1;
            }
            else {
              pcVar3 = local_78;
              FUN_004f2f48(local_78,local_68,local_c8,local_a0);
              _objc_retainAutoreleasedReturnValue();
              local_e0 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
              if (pcVar3 == (cfstringStruct *)0x0) {
                pcVar3 = local_c8;
                FUN_004f3738();
                if (((ulong)pcVar3 & 1) == 0) {
                  local_4a0 = &local_a0;
                }
                else {
                  local_4a0 = &local_c8;
                }
                _objc_storeStrong(&local_e0,*local_4a0);
              }
              pcVar3 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_uiCreateTime_0269d208);
              puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
              local_4b4 = (int)pcVar3;
              local_f9 = 0;
              local_e4 = local_4b4;
              if (local_4b4 < 1) {
                puVar9 = PTR__OBJC_CLASS___NSDate_026cdf88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
                _objc_retainAutoreleasedReturnValue();
                local_f9 = 1;
                local_f8 = puVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_4b4 = (int)param_1;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        ((double)local_4b4,puVar7,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
              _objc_retainAutoreleasedReturnValue();
              local_f0 = puVar7;
              if ((local_f9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_f8);
              }
              pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
              _objc_alloc_init();
              pcVar6 = DAT_028cae20;
              local_108 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae20,PTR_s_length_0269cca0);
              if (pcVar6 == (cfstringStruct *)0x0) {
                local_4f0 = &cf_yyyy_MM_ddHH_mm_ss;
              }
              else {
                local_4f0 = DAT_028cae20;
              }
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setDateFormat__0269d1c8,local_4f0);
              pcVar6 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_stringFromDate__0269d1d8,local_f0);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_28;
              pcVar8 = local_c0;
              local_110 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_uiMessageType_0269d0a8);
              pcVar6 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_nsContent_0269d0a0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_getMessageTypeDescription_conten_026a43f8,
                         (ulong)pcVar8 & 0xffffffff);
              _objc_retainAutoreleasedReturnValue();
              local_530 = pcVar3;
              if (pcVar3 == (cfstringStruct *)0x0) {
                local_530 = &cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_118 = local_530;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              if ((DAT_028caea2 & 1) == 0) {
                local_540 = local_118;
              }
              else {
                local_540 = &cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              pcVar3 = local_28;
              local_120 = local_540;
              pcVar6 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_uiMessageType_0269d0a8);
              pcVar8 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_nsContent_0269d0a0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_getMessageTypeName_content__026a4400,
                         (ulong)pcVar6 & 0xffffffff);
              _objc_retainAutoreleasedReturnValue();
              local_128 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar8);
              puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf___________);
              _objc_retainAutoreleasedReturnValue();
              local_130 = puVar7;
              if (((DAT_028caea4 & 1) != 0) &&
                 (pcVar3 = local_c0,
                 (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_uiMessageType_0269d0a8),
                 (int)pcVar3 == 1)) {
                pcVar3 = local_c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_nsContent_0269d0a0);
                _objc_retainAutoreleasedReturnValue();
                local_598 = pcVar3;
                if (pcVar3 == (cfstringStruct *)0x0) {
                  local_598 = &cf___;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_138 = local_598;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                pcVar3 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
                if (pcVar3 != (cfstringStruct *)0x0) {
                  _objc_storeStrong(pcVar3,&local_130,local_138);
                }
                _objc_storeStrong(&local_138,0);
              }
              if (DAT_028caeb0 == (cfstringStruct *)0x0) {
                pcVar5 = "MMServiceCenter";
                _objc_getClass();
                DAT_028caeb0 = (cfstringStruct *)pcVar5;
              }
              pcVar3 = DAT_028caeb0;
              _objc_retainAutoreleaseReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
              _objc_retainAutoreleasedReturnValue();
              if (DAT_028caeb8 == (char *)0x0) {
                pcVar5 = "CContactMgr";
                _objc_getClass();
                DAT_028caeb8 = pcVar5;
              }
              pcVar5 = DAT_028caeb8;
              _objc_retainAutoreleaseReturnValue();
              pcVar6 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar5);
              _objc_retainAutoreleasedReturnValue();
              local_140 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              pcVar3 = local_140;
              pcVar6 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_nsToUsr_0269d090);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getContactByName__0269d178);
              _objc_retainAutoreleasedReturnValue();
              local_148 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar3 = local_148;
              FUN_004f2588();
              _objc_retainAutoreleasedReturnValue();
              local_150 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
              if (pcVar3 == (cfstringStruct *)0x0) {
                pcVar3 = local_c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_nsToUsr_0269d090);
                _objc_retainAutoreleasedReturnValue();
                local_628 = pcVar3;
                if (pcVar3 == (cfstringStruct *)0x0) {
                  local_628 = &cf___;
                }
                _objc_storeStrong(&local_150,local_628);
                (*(code *)PTR__objc_release_02578630)(pcVar3);
              }
              pcVar3 = local_68;
              FUN_004f38d0(local_68,local_140);
              _objc_retainAutoreleasedReturnValue();
              local_158 = pcVar3;
              if ((DAT_028caea3 & 1) != 0) {
                local_169 = 0;
                local_640 = DAT_028cae50;
                (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae50,PTR_s_length_0269cca0);
                if (local_640 == 0) {
                  FUN_004f0b78(0);
                  _objc_retainAutoreleasedReturnValue();
                  local_169 = 1;
                  local_168 = local_640;
                }
                else {
                  local_640 = DAT_028cae50;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_160 = local_640;
                if ((local_169 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_168);
                }
                lVar10 = local_160;
                FUN_004f3b44(local_160,local_e0,local_c8,local_110,local_130,local_158,local_68);
                _objc_retainAutoreleasedReturnValue();
                local_178 = lVar10;
                (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_length_0269cca0);
                if (lVar10 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,
                             local_178,local_68);
                }
                if ((DAT_028caea4 & 1) != 0) {
                  FUN_004f4238(local_b8,local_c0,local_68,local_a8);
                }
                _objc_storeStrong(&local_178);
                _objc_storeStrong(&local_160,0);
              }
              if ((DAT_028caea5 & 1) != 0) {
                pcVar3 = local_68;
                FUN_004f4a88(local_68,local_c8);
                lVar10 = DAT_028cae58;
                local_179 = SUB81(pcVar3,0);
                if (((ulong)pcVar3 & 1) != 0) {
                  puVar7 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (lVar10,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                  _objc_retainAutoreleasedReturnValue();
                  local_188 = lVar10;
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                  lVar10 = local_188;
                  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                  if (lVar10 == 0) {
                    _objc_storeStrong(&local_188,&cf_filehelper);
                  }
                  FUN_004f4238(local_b8,local_c0,local_188,local_a8);
                  local_199 = 0;
                  local_6a0 = DAT_028cae60;
                  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae60,PTR_s_length_0269cca0);
                  if (local_6a0 == 0) {
                    FUN_004f0b84(0);
                    _objc_retainAutoreleasedReturnValue();
                    local_199 = 1;
                    local_198 = local_6a0;
                  }
                  else {
                    local_6a0 = DAT_028cae60;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_190 = local_6a0;
                  if ((local_199 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_198);
                  }
                  lVar10 = local_190;
                  FUN_004f3b44(local_190,local_e0,local_c8,local_110,local_130,local_158,local_68);
                  _objc_retainAutoreleasedReturnValue();
                  local_1a8 = lVar10;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_length_0269cca0);
                  if (lVar10 != 0) {
                    if (DAT_028caea8 == 1) {
                      if (local_68 == (cfstringStruct *)0x0) {
                        local_6c8 = &cf___;
                      }
                      else {
                        local_6c8 = local_68;
                      }
                      FUN_004f4e70();
                      _objc_retainAutoreleasedReturnValue();
                      local_1c1 = 0;
                      local_1b0 = local_6c8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_6c8,PTR_s_length_0269cca0);
                      if (local_6c8 == (cfstringStruct *)0x0) {
                        local_6e8 = &cf___;
                      }
                      else {
                        local_6e8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSString_026cdfe8,
                                   PTR_s_stringWithFormat__0269cca8,
                                   &cf_WCRefineRedEnvelopSession___session___);
                        _objc_retainAutoreleasedReturnValue();
                        local_1c1 = 1;
                        local_1c0 = local_6e8;
                      }
                      (*(code *)PTR__objc_retain_02578638)();
                      local_1b8 = local_6e8;
                      if ((local_1c1 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_1c0);
                      }
                      lVar10 = local_1a8;
                      _WCRefineRenderSystemTipMessage(local_1a8,&cf_pQldVO,&cf_800080,local_1b8);
                      _objc_retainAutoreleasedReturnValue();
                      local_1d0 = lVar10;
                      _WCRefineInsertLocalSystemTip(local_188,lVar10);
                      _objc_storeStrong(&local_1d0);
                      _objc_storeStrong(&local_1b8,0);
                      _objc_storeStrong(&local_1b0,0);
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineHelper_026ce000,
                                 PTR_s_sendMsg_toContactUsrName__0269d3f0,local_1a8,local_188);
                    }
                  }
                  _objc_storeStrong(&local_1a8);
                  _objc_storeStrong(&local_190,0);
                  _objc_storeStrong(&local_188,0);
                }
              }
              ppppuVar11 = DAT_028cae48;
              if ((DAT_028caea1 & 1) == 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_1d8 = ppppuVar11;
                if ((ppppuVar11 == (undefined8 ****)0x0) ||
                   ((*(code *)PTR__objc_msgSend_02578628)(ppppuVar11,PTR_s_length_0269cca0),
                   ppppuVar11 == (undefined8 ****)0x0)) {
                  ppppuVar11 = &local_1d8;
                  _objc_storeStrong(ppppuVar11,&cf__T_Tip_C);
                }
                uVar2 = (uint)ppppuVar11;
                FUN_004f5090();
                local_1d9 = (byte)uVar2;
                if ((uVar2 & 1) == 0) {
                  local_728 = &DAT_028cae28;
                }
                else {
                  local_728 = &DAT_028cae30;
                }
                uVar12 = *local_728;
                (*(code *)PTR__objc_retain_02578638)();
                if ((local_1d9 & 1) == 0) {
                  local_738 = &DAT_028cae38;
                }
                else {
                  local_738 = &DAT_028cae40;
                }
                uVar13 = *local_738;
                local_1e8 = uVar12;
                (*(code *)PTR__objc_retain_02578638)();
                uVar12 = local_1e8;
                local_1f0 = uVar13;
                FUN_004f5168(local_1e8,&cf_66CD00);
                _objc_retainAutoreleasedReturnValue();
                uVar13 = local_1f0;
                local_1f8 = uVar12;
                FUN_004f5168(local_1f0,&cf_1E90FF);
                _objc_retainAutoreleasedReturnValue();
                if (local_68 == (cfstringStruct *)0x0) {
                  local_760 = &cf___;
                }
                else {
                  local_760 = local_68;
                }
                local_200 = uVar13;
                (*(code *)PTR__objc_retain_02578638)();
                local_208 = local_760;
                if (local_110 == (cfstringStruct *)0x0) {
                  local_778 = &cf___;
                }
                else {
                  local_778 = local_110;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_210 = local_778;
                if (local_e0 == (cfstringStruct *)0x0) {
                  local_790 = &cf___;
                }
                else {
                  local_790 = local_e0;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_218 = local_790;
                pcVar3 = local_208;
                FUN_004f4e70();
                _objc_retainAutoreleasedReturnValue();
                local_220 = pcVar3;
                (*(code *)PTR__objc_retain_02578638)();
                local_228 = &cf___;
                pcVar3 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
                if ((pcVar3 != (cfstringStruct *)0x0) &&
                   (pcVar3 = local_c8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_c8,PTR_s_hasSuffix__0269d018,&cf__chatroom),
                   ((ulong)pcVar3 & 1) == 0)) {
                  pcVar6 = local_c8;
                  FUN_004f4e70();
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_228;
                  local_228 = pcVar6;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
                puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_uiMesLocalID_0269d238);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar7,PTR_s_stringWithFormat__0269cca8,
                           &cf_WCRefineRevokeFrom___session____localID__d);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
                pcVar3 = local_210;
                local_230 = puVar7;
                FUN_004f535c();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar9,PTR_s_stringWithFormat__0269cca8,
                           &cf_<_wc_custom_link_color______href_____>__<__wc_custom_link_>);
                _objc_retainAutoreleasedReturnValue();
                local_238 = puVar9;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_WCRefineRevokeUser___user____session___);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                pcVar3 = local_218;
                local_240 = puVar9;
                FUN_004f535c();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar7,PTR_s_stringWithFormat__0269cca8,
                           &cf_<_wc_custom_link_color______href_____>__<__wc_custom_link_>);
                _objc_retainAutoreleasedReturnValue();
                local_248 = puVar7;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                pppuVar1 = local_1d8;
                (*(code *)PTR__objc_retain_02578638)();
                local_250 = pppuVar1;
                pcVar3 = DAT_028cae18;
                FUN_004f0a28();
                _objc_retainAutoreleasedReturnValue();
                local_868 = pcVar3;
                if (pcVar3 == (cfstringStruct *)0x0) {
                  local_868 = &cf___;
                }
                local_258 = pcVar3;
                (*(code *)PTR__objc_retain_02578638)();
                local_260 = local_868;
                puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf__);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_260;
                local_268 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_containsString__0269d0b0,&cf___S_);
                if (((ulong)pcVar3 & 1) != 0) {
                  pcVar6 = local_260;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_260,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___S_,
                             local_268);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_260;
                  local_260 = pcVar6;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
                pcVar3 = local_260;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_containsString__0269d0b0,&cf__);
                if (((ulong)pcVar3 & 1) != 0) {
                  pcVar6 = local_260;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_260,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,
                             local_268);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_260;
                  local_260 = pcVar6;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
                pcVar6 = local_260;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__S,
                           local_248);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_260;
                local_260 = pcVar6;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                ppppuVar11 = (undefined8 ****)local_250;
                FUN_004f5538(local_250,local_260,local_230);
                _objc_retainAutoreleasedReturnValue();
                pppuVar1 = local_250;
                local_250 = ppppuVar11;
                (*(code *)PTR__objc_release_02578630)(pppuVar1);
                ppppuVar11 = (undefined8 ****)local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__Tip,
                           local_260);
                _objc_retainAutoreleasedReturnValue();
                pppuVar1 = local_250;
                local_250 = ppppuVar11;
                (*(code *)PTR__objc_release_02578630)(pppuVar1);
                if (local_120 == (cfstringStruct *)0x0) {
                  local_8c0 = &cf___;
                }
                else {
                  local_8c0 = local_120;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_270 = local_8c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_8c0,PTR_s_length_0269cca0);
                if ((cfstringStruct *)(section_000000b8.sectname + 0xf) < local_8c0 &&
                    &local_8c0[-7].field3_0x18 != (long *)0x0) {
                  pcVar3 = local_270;
                  FUN_004f5e30(&local_8c0[-7].field3_0x18,local_270,200);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_278 = pcVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                             &cf______);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_270;
                  local_270 = pcVar6;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                  _objc_storeStrong(&local_278,0);
                }
                ppppuVar11 = (undefined8 ****)local_250;
                FUN_004f6134(local_250,&cf__C,local_270,local_1f8,local_230);
                _objc_retainAutoreleasedReturnValue();
                pppuVar1 = local_250;
                local_250 = ppppuVar11;
                (*(code *)PTR__objc_release_02578630)(pppuVar1);
                if (local_150 == (cfstringStruct *)0x0) {
                  local_918 = &cf___;
                }
                else {
                  local_918 = local_150;
                }
                ppppuVar11 = (undefined8 ****)local_250;
                FUN_004f6134(local_250,&cf__R,local_918,local_1f8,local_230);
                _objc_retainAutoreleasedReturnValue();
                pppuVar1 = local_250;
                local_250 = ppppuVar11;
                (*(code *)PTR__objc_release_02578630)(pppuVar1);
                ppppuVar11 = (undefined8 ****)local_250;
                FUN_004f6134(local_250,&cf__T,local_210,local_1f8,local_230);
                _objc_retainAutoreleasedReturnValue();
                pppuVar1 = local_250;
                local_250 = ppppuVar11;
                (*(code *)PTR__objc_release_02578630)(pppuVar1);
                ppppuVar11 = (undefined8 ****)local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__Hex,
                           local_1f8);
                _objc_retainAutoreleasedReturnValue();
                pppuVar1 = local_250;
                local_250 = ppppuVar11;
                (*(code *)PTR__objc_release_02578630)(pppuVar1);
                ppppuVar11 = (undefined8 ****)local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__T,
                           local_238);
                _objc_retainAutoreleasedReturnValue();
                pppuVar1 = local_250;
                local_250 = ppppuVar11;
                (*(code *)PTR__objc_release_02578630)(pppuVar1);
                ppppuVar11 = (undefined8 ****)local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__S,
                           local_248);
                _objc_retainAutoreleasedReturnValue();
                pppuVar1 = local_250;
                local_250 = ppppuVar11;
                (*(code *)PTR__objc_release_02578630)(pppuVar1);
                ppppuVar11 = (undefined8 ****)local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__C,
                           local_270);
                _objc_retainAutoreleasedReturnValue();
                pppuVar1 = local_250;
                local_250 = ppppuVar11;
                (*(code *)PTR__objc_release_02578630)(pppuVar1);
                if (local_150 == (cfstringStruct *)0x0) {
                  local_960 = &cf___;
                }
                else {
                  local_960 = local_150;
                }
                ppppuVar11 = (undefined8 ****)local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__R,
                           local_960);
                _objc_retainAutoreleasedReturnValue();
                pppuVar1 = local_250;
                local_250 = ppppuVar11;
                (*(code *)PTR__objc_release_02578630)(pppuVar1);
                ppppuVar11 = (undefined8 ****)local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_containsString__0269d0b0,&cf_<_wc_custom_link_);
                if ((((ulong)ppppuVar11 & 1) != 0) &&
                   (ppppuVar14 = (undefined8 ****)local_250,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_250,PTR_s_containsString__0269d0b0,&cf_href___),
                   ppppuVar11 = (undefined8 ****)local_250, ((ulong)ppppuVar14 & 1) != 0)) {
                  puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                             &cf_href_____);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (ppppuVar11,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_href___)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  pppuVar1 = local_250;
                  local_250 = ppppuVar11;
                  (*(code *)PTR__objc_release_02578630)(pppuVar1);
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                }
                if (DAT_028caef8 == (char *)0x0) {
                  pcVar5 = "CMessageWrap";
                  _objc_getClass();
                  DAT_028caef8 = pcVar5;
                }
                pcVar5 = DAT_028caef8;
                _objc_retainAutoreleaseReturnValue();
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar5,PTR_s_initWithMsgType__0269d3f8,&DAT_00002710);
                pcVar3 = local_c0;
                local_280 = pcVar5;
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_nsFromUsr_0269d088);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_setM_nsFromUsr__0269d408);
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                pcVar5 = local_280;
                pcVar3 = local_c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_nsToUsr_0269d090);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_setM_nsToUsr__0269d410);
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_setM_uiStatus__0269d418,4);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_280,PTR_s_setM_nsContent__0269ef88,local_250);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_280,PTR_s_setM_uiCreateTime__0269d428,local_e4 + 1);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b8,PTR_s_AddLocalMsg_MsgWrap_fixTime_NewM_026a4220,local_68,
                           local_280,0,0);
                local_48 = 1;
                _objc_storeStrong(&local_280);
                _objc_storeStrong(&local_270,0);
                _objc_storeStrong(&local_268,0);
                _objc_storeStrong(&local_260,0);
                _objc_storeStrong(&local_258,0);
                _objc_storeStrong(&local_250,0);
                _objc_storeStrong(&local_248,0);
                _objc_storeStrong(&local_240,0);
                _objc_storeStrong(&local_238,0);
                _objc_storeStrong(&local_230,0);
                _objc_storeStrong(&local_228,0);
                _objc_storeStrong(&local_220,0);
                _objc_storeStrong(&local_218,0);
                _objc_storeStrong(&local_210,0);
                _objc_storeStrong(&local_208,0);
                _objc_storeStrong(&local_200,0);
                _objc_storeStrong(&local_1f8,0);
                _objc_storeStrong(&local_1f0,0);
                _objc_storeStrong(&local_1e8,0);
                _objc_storeStrong(&local_1d8,0);
              }
              else {
                local_48 = 1;
              }
              _objc_storeStrong(&local_158);
              _objc_storeStrong(&local_150,0);
              _objc_storeStrong(&local_148,0);
              _objc_storeStrong(&local_140,0);
              _objc_storeStrong(&local_130,0);
              _objc_storeStrong(&local_128,0);
              _objc_storeStrong(&local_120,0);
              _objc_storeStrong(&local_118,0);
              _objc_storeStrong(&local_110,0);
              _objc_storeStrong(&local_108,0);
              _objc_storeStrong(&local_f0,0);
              _objc_storeStrong(&local_e0,0);
            }
          }
          else {
            pcVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,local_a8)
            ;
            uVar15 = (ulong)pcVar3 & 0xffffffff;
            if (((ulong)pcVar3 & 1) == 0) goto LAB_004ed3f8;
            (*DAT_028cae90)(local_28,local_30,local_38);
            local_48 = 1;
          }
          _objc_storeStrong(&local_c8,0);
        }
        _objc_storeStrong(&local_c0,0);
      }
      _objc_storeStrong(&local_b8,0);
    }
    else {
      (*DAT_028cae90)(local_28,local_30,local_38);
      local_48 = 1;
    }
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
LAB_004efae0:
  _objc_storeStrong(&local_38,0);
  return;
}

