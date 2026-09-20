// FUN_004fedb0 @ 004fedb0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004fedb0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  cfstringStruct *local_408;
  cfstringStruct *local_3e0;
  cfstringStruct *local_3c0;
  undefined *local_2f8;
  undefined *local_2f0;
  cfstringStruct *local_2b0;
  cfstringStruct *local_298;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  uint local_208;
  bool local_201;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  byte local_1e9;
  cfstringStruct *local_1e8;
  byte local_1d9;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  byte local_1ba;
  bool local_1b9;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  undefined *local_198;
  byte local_189;
  undefined *local_188;
  byte local_179;
  cfstringStruct *local_178;
  byte local_169;
  undefined *local_168;
  byte local_159;
  undefined *local_158;
  undefined *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  byte local_ca;
  byte local_c9;
  undefined4 local_c8;
  byte local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_atMentionNotificationEnabled_026a44b0);
  local_c1 = 0;
  local_208 = 1;
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_isSelfSent);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    local_c0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_208 = (uint)pcVar1;
  }
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  if ((local_208 & 1) == 0) {
    pcVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_isAtMe);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_c9 = (byte)pcVar2;
    pcVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_isAtAll);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_ca = (byte)pcVar2;
    if (((local_c9 & 1) == 0) && (((ulong)pcVar2 & 1) == 0)) {
      puVar3 = PTR_WCRefineMessageSyncRule_026ce708;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_currentUserWxid_0269ec70);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar3;
      _memset(auStack_120,0,0x40);
      pcVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_atUserList);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      local_268 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      if (local_268 != (cfstringStruct *)0x0) {
        lVar9 = *local_110;
        local_270 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_110 - lVar9 != 0) {
              _objc_enumerationMutation(*local_110 - lVar9,pcVar2);
            }
            uVar10 = *(ulong *)(local_118 + (long)local_270 * 8);
            local_e0 = uVar10;
            FUN_004fe524();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_d8;
            local_128 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
            if ((puVar3 == (undefined *)0x0) ||
               (uVar10 = local_128,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_128,PTR_s_isEqualToString__0269ccc8,local_d8), (uVar10 & 1) == 0)) {
              uVar10 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_isEqualToString__0269ccc8,&cf_notify_all);
              if (((uVar10 & 1) != 0) ||
                 (uVar10 = local_128,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_128,PTR_s_isEqualToString__0269ccc8,&cf__all), (uVar10 & 1) != 0))
              {
                local_ca = 1;
              }
            }
            else {
              local_c9 = 1;
            }
            _objc_storeStrong(&local_128,0);
            local_270 = (cfstringStruct *)((long)&local_270->field0_0x0 + 1);
          } while (local_270 < local_268);
          local_268 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_270 = (cfstringStruct *)0x0;
        } while (local_268 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_d8,0);
    }
    if ((((local_c9 & 1) == 0) && ((local_ca & 1) == 0)) ||
       (((local_ca & 1) != 0 &&
        (pcVar1 = local_b8,
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_atMentionIncludeAtAll_026a4508),
        ((ulong)pcVar1 & 1) == 0)))) {
      local_c8 = 1;
    }
    else {
      pcVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
      _objc_retainAutoreleasedReturnValue();
      local_298 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_298 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = local_298;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_sender);
      _objc_retainAutoreleasedReturnValue();
      local_2b0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_2b0 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_138 = local_2b0;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
                 local_130);
      if ((((ulong)puVar3 & 1) == 0) &&
         (puVar3 = PTR_WCRefinePrivateFriendManager_026ce160,
         (*(code *)PTR__objc_msgSend_02578628)
                   (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
                    local_138), ((ulong)puVar3 & 1) == 0)) {
        pcVar1 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_b0;
        local_140 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_svrID);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        local_2f8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_159 = 0;
        local_169 = 0;
        local_179 = 0;
        local_189 = 0;
        local_148 = pcVar2;
        if ((long)local_140 < 1) {
          if ((long)pcVar2 < 1) {
            pcVar1 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
            _objc_retainAutoreleasedReturnValue();
            local_179 = 1;
            local_178 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2f8,PTR_s_stringWithFormat__0269cca8,&cf_c_lu);
            _objc_retainAutoreleasedReturnValue();
            local_189 = 1;
            local_188 = local_2f8;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_s_lld);
            _objc_retainAutoreleasedReturnValue();
            local_169 = 1;
            local_168 = local_2f8;
          }
          local_2f0 = local_2f8;
        }
        else {
          local_2f0 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_l_lld)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_159 = 1;
          local_158 = local_2f0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = local_2f0;
        if ((local_189 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_188);
        }
        if ((local_179 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_178);
        }
        if ((local_169 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_168);
        }
        if ((local_159 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_158);
        }
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_at______
                  );
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        FUN_00500d14();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR_WCRefineMessageSyncRule_026ce708;
        if (((ulong)puVar4 & 1) == 0) {
          local_c8 = 1;
        }
        else {
          pcVar1 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageType);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          pcVar5 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_typeKeyForMessageType_content__026a41a0,pcVar2);
          _objc_retainAutoreleasedReturnValue();
          local_198 = puVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          puVar3 = local_198;
          pcVar1 = (cfstringStruct *)PTR_WCRefineMessageSyncRule_026ce708;
          pcVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_displayContentForTypeKey_rawCont_026a44b8,puVar3,pcVar2,local_138)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar1 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
          if (pcVar1 == (cfstringStruct *)0x0) {
            pcVar2 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar2;
            FUN_00500168();
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_1a0;
            local_1a0 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          pcVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_atMentionNotificationFormat_026a4510)
          ;
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_createTime);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          FUN_0050218c((double)(long)pcVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_WCRefineMessageSyncRule_026ce708;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_displayNameForSession__026a4518,
                     local_130);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_WCRefineMessageSyncRule_026ce708;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_displayNameForUser_inRoom__0269ecd0,
                     local_138,local_130);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = &cf__yr_bgN;
          if ((local_ca & 1) == 0) {
            pcVar1 = &cf__yrb;
          }
          pcVar7 = pcVar2;
          FUN_005018cc(pcVar2,pcVar6,puVar3,puVar4,local_1a0,pcVar1);
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = pcVar7;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_atMentionNotificationSessionID_026a4520);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1b9 = false;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_3c0 = &cf_filehelper;
          }
          else {
            local_3c0 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_atMentionNotificationSessionID_026a4520);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = local_3c0;
          }
          local_1b9 = pcVar2 != (cfstringStruct *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = local_3c0;
          if ((local_1b9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1b8);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          FUN_0050236c(local_1b0);
          pcVar1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_atMentionNotificationType_026a4528);
          puVar8 = (undefined1 *)((long)&pcVar1[-1].field3_0x18 + 7);
          if (puVar8 == (undefined1 *)0x0) {
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_at_mentionrender_beginsession___target___local__lldsvr__lld);
            _objc_retainAutoreleasedReturnValue();
            _WCRefineCrashReporterBreadcrumb();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_1ba = 0;
            puVar3 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UITraitCollection_026ce138,
                       PTR_s_currentTraitCollection_026ca5d8);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1ba = puVar8 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            pcVar1 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_atMentionNotificationJumpText_026a4530);
            _objc_retainAutoreleasedReturnValue();
            local_1d9 = 0;
            local_1e9 = 0;
            local_3e0 = local_b8;
            local_1c8 = pcVar1;
            if ((local_1ba & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_atMentionNotificationJumpColor_026a4540);
              _objc_retainAutoreleasedReturnValue();
              local_1e9 = 1;
              local_1e8 = local_3e0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_atMentionNotificationJumpDarkCol_026a4538);
              _objc_retainAutoreleasedReturnValue();
              local_1d9 = 1;
              local_1d8 = local_3e0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1d0 = local_3e0;
            if ((local_1e9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1e8);
            }
            if ((local_1d9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1d8);
            }
            pcVar5 = local_1a8;
            pcVar2 = local_1c8;
            pcVar1 = local_1d0;
            pcVar6 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_atMentionNotificationJumpEnabled_026a4548);
            local_201 = ((ulong)pcVar6 & 1) == 0;
            if (local_201) {
              local_408 = &cf___;
            }
            else {
              local_408 = local_b0;
              FUN_0050249c();
              _objc_retainAutoreleasedReturnValue();
              local_200 = local_408;
            }
            local_201 = !local_201;
            _WCRefineRenderSystemTipMessage(pcVar5,pcVar2,pcVar1,local_408);
            _objc_retainAutoreleasedReturnValue();
            local_1f8 = pcVar5;
            if (local_201) {
              (*(code *)PTR__objc_release_02578630)(local_200);
            }
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_at_mentionrender_endcontent__lu);
            _objc_retainAutoreleasedReturnValue();
            _WCRefineCrashReporterBreadcrumb();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _WCRefineInsertLocalSystemTip(local_1b0,local_1f8);
            _WCRefineCrashReporterBreadcrumb(&cf_at_mentioninsert_dispatched);
            _objc_storeStrong(&local_1f8);
            _objc_storeStrong(&local_1d0,0);
            _objc_storeStrong(&local_1c8,0);
          }
          else {
            FUN_005027d4(puVar8,local_1a8,local_1b0);
          }
          _objc_storeStrong(&local_1b0);
          _objc_storeStrong(&local_1a8,0);
          _objc_storeStrong(&local_1a0,0);
          _objc_storeStrong(&local_198,0);
          local_c8 = 0;
        }
        _objc_storeStrong(&local_150,0);
      }
      else {
        local_c8 = 1;
      }
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_130,0);
    }
  }
  else {
    local_c8 = 1;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

