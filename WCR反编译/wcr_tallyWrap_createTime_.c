// wcr_tallyWrap:createTime: @ 014ee338

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x1c bytes */

bool WCRefineSessionStatsEngine::wcr_tallyWrap_createTime_
               (ID param_1,SEL param_2,ID param_3,unsigned_int param_4)

{
  byte bVar1;
  unsigned_int uVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  cfstringStruct *local_268;
  byte local_174;
  uint local_114;
  uint local_110;
  undefined *local_f8;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  bool local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  ulong local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  byte local_81;
  cfstringStruct *local_80;
  byte local_71;
  undefined *local_70;
  int local_68;
  int local_64;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  unsigned_int local_44;
  ulong local_40;
  SEL local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar11 = local_40;
  local_44 = param_4;
  FUN_014e48f4(local_40,&cf_m_uiMessageType);
  local_50 = uVar11 & 0xffffffff;
  uVar11 = local_40;
  FUN_014efbac(local_40,&cf_m_nsContent);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_40;
  local_58 = uVar11;
  FUN_014efde0();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
  if (uVar4 == 0) {
    uVar4 = local_50;
    FUN_014f0818(local_50,local_58);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = local_60;
    local_60 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar11);
  }
  uVar11 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (uVar11 == 0) {
    local_21 = 0;
    local_64 = 1;
  }
  else {
    uVar11 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_system);
    if ((uVar11 & 1) == 0) {
      uVar11 = local_40;
      FUN_014e48f4(local_40,&cf_m_uiMesLocalID);
      local_68 = (int)uVar11;
      if (local_68 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   uVar11 & 0xffffffff);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = local_60;
        local_70 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_isEqualToString__0269ccc8,&cf_redpacket);
        local_110 = 1;
        if ((uVar11 & 1) == 0) {
          uVar11 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_isEqualToString__0269ccc8,&cf_transfer);
          local_110 = (uint)uVar11;
        }
        local_71 = (byte)local_110 & 1;
        local_81 = 0;
        local_114 = 0;
        if ((local_110 & 1) != 0) {
          pcVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSeenPayIDs_026afbb0);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_114 = (uint)pcVar6;
        }
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        if ((local_114 & 1) == 0) {
          pcVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSeenLocalIDs_026afbb8);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          if (((ulong)pcVar7 & 1) == 0) {
            pcVar6 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSeenLocalIDs_026afbb8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            if ((local_71 & 1) != 0) {
              pcVar6 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSeenPayIDs_026afbb0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar6);
            }
            local_64 = 0;
          }
          else {
            if ((local_71 & 1) != 0) {
              pcVar6 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSeenPayIDs_026afbb0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
              pcVar6 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobTypes_026afbc0);
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,
                         (char *)((long)&pcVar8->field0_0x0 + 1));
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobTypes_026afbc0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar8);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(pcVar7);
              (*(code *)PTR__objc_release_02578630)(pcVar6);
            }
            local_21 = 0;
            local_64 = 1;
          }
        }
        else {
          local_21 = 0;
          local_64 = 1;
        }
        _objc_storeStrong(&local_70,0);
        if (local_64 != 0) goto LAB_014efb6c;
      }
      pcVar6 = local_30;
      pcVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobTotal_026afbc8);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_setJobTotal__026afa80,(char *)((long)&pcVar7->field0_0x0 + 1));
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      pcVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobTypes_026afbc0);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 (char *)((long)&pcVar8->field0_0x0 + 1));
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobTypes_026afbc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      uVar11 = local_40;
      puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
      pcVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobUsr_026afba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_senderIDForMessageWrap_sessionID_026a41f8,uVar11);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      puVar5 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserWxid_0269ec70);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_90;
      local_98 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      local_174 = 0;
      if (puVar9 != (undefined *)0x0) {
        puVar5 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        local_174 = 0;
        if (puVar5 != (undefined *)0x0) {
          puVar5 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isEqualToString__0269ccc8,local_98);
          local_174 = (byte)puVar5;
        }
      }
      local_99 = local_174 & 1;
      pcVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobWords_026afbd0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = 0;
      if (pcVar6 != (cfstringStruct *)0x0) {
        uVar11 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_text);
        bVar1 = 0;
        if ((uVar11 & 1) != 0) {
          pcVar7 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_overviewMode_026af898);
          bVar1 = 1;
          if (((ulong)pcVar7 & 1) != 0) {
            bVar1 = local_99;
          }
        }
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      uVar11 = local_58;
      if ((bVar1 & 1) != 0) {
        pcVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobWords_026afbd0);
        _objc_retainAutoreleasedReturnValue();
        FUN_014f1120(uVar11);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSample_026afbd8);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 0;
        bVar3 = false;
        if (pcVar6 != (cfstringStruct *)0x0) {
          pcVar7 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSample_026afbd8);
          _objc_retainAutoreleasedReturnValue();
          local_a9 = 1;
          local_a8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar3 = pcVar7 < (cfstringStruct *)0x1388;
        }
        if ((local_a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        if (bVar3) {
          uVar4 = local_58;
          FUN_014f19b4();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_b8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = local_b8;
          local_b8 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar11);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          uVar11 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
          if (1 < uVar11) {
            uVar11 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
            if (0x78 < uVar11) {
              uVar4 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_substringToIndex__0269d6c0,0x78);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = local_b8;
              local_b8 = uVar10;
              (*(code *)PTR__objc_release_02578630)(uVar11);
              (*(code *)PTR__objc_release_02578630)(uVar4);
            }
            uVar11 = local_40;
            puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
            pcVar6 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobUsr_026afba0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_senderIDForMessageWrap_sessionID_026a41f8,uVar11);
            _objc_retainAutoreleasedReturnValue();
            local_c0 = puVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = &::cf___;
            pcVar6 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobIsGroup_026afbe0);
            if ((((ulong)pcVar6 & 1) == 0) ||
               (puVar9 = local_c0,
               (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
               puVar5 = local_c0, pcVar6 = (cfstringStruct *)PTR_WCRefineChatRoomKickHelper_026ce2d8
               , puVar9 == (undefined *)0x0)) {
              if ((local_99 & 1) == 0) {
                pcVar6 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobDisplayName_026afbe8);
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_d1 = false;
                if (pcVar7 == (cfstringStruct *)0x0) {
                  local_268 = &cf__e;
                }
                else {
                  local_268 = local_30;
                  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobDisplayName_026afbe8);
                  _objc_retainAutoreleasedReturnValue();
                  local_d0 = local_268;
                }
                local_d1 = pcVar7 != (cfstringStruct *)0x0;
                _objc_storeStrong(&local_c8,local_268);
                if ((local_d1 & 1U) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_d0);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar6);
              }
              else {
                _objc_storeStrong(&local_c8,&::cf_b);
              }
            }
            else {
              pcVar8 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobUsr_026afba0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar6,PTR_s_displayNameForUser_inRoom__0269ecd0,puVar5);
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = local_c8;
              local_c8 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar7);
              (*(code *)PTR__objc_release_02578630)(pcVar8);
              pcVar6 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
              if (((pcVar6 == (cfstringStruct *)0x0) ||
                  (pcVar6 = local_c8,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c8,PTR_s_isEqualToString__0269ccc8,local_c0),
                  ((ulong)pcVar6 & 1) != 0)) ||
                 (pcVar6 = local_c8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_hasPrefix__0269d320,&cf_wxid_)
                 , ((ulong)pcVar6 & 1) != 0)) {
                _objc_storeStrong(&local_c8,&cf__S);
              }
            }
            pcVar6 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSample_026afbd8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            _objc_storeStrong(&local_c8);
            _objc_storeStrong(&local_c0,0);
          }
          _objc_storeStrong(&local_b8,0);
        }
      }
      uVar2 = local_44;
      pcVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobLatestCreateTime_026afb98);
      if ((uint)pcVar6 < uVar2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setJobLatestCreateTime__026afa30,local_44);
      }
      if (local_44 != 0) {
        pcVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobActiveDays_026afb90);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        uVar11 = (ulong)local_44;
        FUN_014ee1e0(uVar11);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,uVar11);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      uVar11 = local_40;
      puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
      pcVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobUsr_026afba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_senderIDForMessageWrap_sessionID_026a41f8,uVar11);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      puVar5 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserWxid_0269ec70);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = (ulong)local_44;
      local_e8 = puVar5;
      FUN_014f1e6c();
      pcVar6 = local_30;
      local_f0 = uVar11;
      if ((-1 < (long)uVar11) && ((long)uVar11 < 5)) {
        pcVar7 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobOvernightCount_026afbf0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_setJobOvernightCount__026afa38,
                   (char *)((long)&pcVar7->field0_0x0 + 1));
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        uVar11 = (ulong)local_44;
        FUN_014ee1e0(uVar11);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,uVar11);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_30;
        local_f8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobOvernightDays_026afbf8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        puVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
        if ((puVar5 != (undefined *)0x0) &&
           ((puVar5 = local_e8,
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
            puVar5 != (undefined *)0x0 &&
            (puVar5 = local_e0,
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,local_e8)
            , ((ulong)puVar5 & 1) != 0)))) {
          pcVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobOvernightSelfDays_026afc00);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
        _objc_storeStrong(&local_f8,0);
      }
      pcVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobIsGroup_026afbe0);
      if (((ulong)pcVar6 & 1) == 0) {
        puVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
        if (((puVar5 == (undefined *)0x0) ||
            (puVar5 = local_e8,
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
            puVar5 == (undefined *)0x0)) ||
           (puVar5 = local_e0,
           (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,local_e8),
           pcVar6 = local_30, ((ulong)puVar5 & 1) == 0)) {
          pcVar6 = local_30;
          pcVar7 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobOtherCount_026afc20);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_setJobOtherCount__026af9c8,(char *)((long)&pcVar7->field0_0x0 + 1)
                    );
        }
        else {
          pcVar7 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSelfCount_026afc08);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_setJobSelfCount__026af9c0,(char *)((long)&pcVar7->field0_0x0 + 1))
          ;
          uVar2 = local_44;
          pcVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSelfLatestCreateTime_026afba8);
          if ((uint)pcVar6 < uVar2) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_setJobSelfLatestCreateTime__026af9e8,local_44);
          }
        }
      }
      else {
        puVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
        if (((puVar5 != (undefined *)0x0) &&
            (puVar5 = local_e8,
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
            puVar5 != (undefined *)0x0)) &&
           (puVar5 = local_e0,
           (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,local_e8),
           pcVar6 = local_30, ((ulong)puVar5 & 1) != 0)) {
          pcVar7 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSelfCount_026afc08);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_setJobSelfCount__026af9c0,(char *)((long)&pcVar7->field0_0x0 + 1))
          ;
          uVar2 = local_44;
          pcVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSelfLatestCreateTime_026afba8);
          if ((uint)pcVar6 < uVar2) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_setJobSelfLatestCreateTime__026af9e8,local_44);
          }
        }
        puVar9 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        if (puVar9 != (undefined *)0x0) {
          pcVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSpeakers_026afc10);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,
                     (char *)((long)&pcVar8->field0_0x0 + 1));
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSpeakers_026afc10);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          pcVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSpeakerLatest_026afc18);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          if ((uint)pcVar8 < local_44) {
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                       local_44);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jobSpeakerLatest_026afc18);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
        }
      }
      local_21 = 1;
      local_64 = 1;
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
    }
    else {
      local_21 = 0;
      local_64 = 1;
    }
  }
LAB_014efb6c:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

