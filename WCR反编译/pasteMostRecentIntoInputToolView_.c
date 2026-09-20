// pasteMostRecentIntoInputToolView: @ 009558cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

bool WCRClipboardHistoryStore::pasteMostRecentIntoInputToolView_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  void *pvVar5;
  undefined *puVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  ulong local_350;
  cfstringStruct *local_348;
  cfstringStruct *local_338;
  uint local_32c;
  cfstringStruct *local_320;
  cfstringStruct *local_300;
  void *local_298;
  void *local_290;
  cfstringStruct *local_268;
  cfstringStruct *local_258;
  cfstringStruct *local_248;
  bool local_229;
  ulong local_228;
  ulong local_220;
  byte local_212;
  byte local_211;
  cfstringStruct *local_210;
  byte local_201;
  cfstringStruct *local_200;
  bool local_1f1;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  byte local_1da;
  byte local_1d9;
  cfstringStruct *local_1d8;
  ID local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  undefined *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  ulong local_1a0;
  double local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  double local_148;
  cfstringStruct *local_140;
  byte local_131;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  bool local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined4 local_fc;
  ulong local_f8;
  SEL local_f0;
  ID local_e8;
  byte local_d9;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  local_f0 = param_2;
  local_e8 = param_1;
  _objc_storeStrong(&local_f8,param_3);
  if (local_f8 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__41Y_eeQFh);
    local_d9 = 0;
    local_fc = 1;
  }
  else {
    IVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    local_108 = pcVar3;
    FUN_00956b08();
    local_119 = false;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_248 = (cfstringStruct *)0x0;
    }
    else {
      local_248 = local_108;
      FUN_009473cc();
      _objc_retainAutoreleasedReturnValue();
      local_118 = local_248;
    }
    local_119 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = local_248;
    if ((local_119 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    local_131 = 0;
    if (local_110 == (cfstringStruct *)0x0) {
      pcVar3 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_131 = 1;
      local_268 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_268 = &::cf___;
      }
      local_258 = local_268;
      local_130 = pcVar3;
    }
    else {
      local_258 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = local_258;
    if ((local_131 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
    local_140 = (cfstringStruct *)0x0;
    if ((local_110 == (cfstringStruct *)0x0) &&
       (pcVar3 = local_128, (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0),
       pcVar3 == (cfstringStruct *)0x0)) {
      FUN_00956fd0(0);
      if (((ulong)pcVar3 & 1) != 0) {
        local_148 = -1.0;
        pvVar5 = _memset(auStack_190,0,0x40);
        FUN_00957358();
        _objc_retainAutoreleasedReturnValue();
        local_290 = pvVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_290 != (void *)0x0) {
          lVar10 = *local_180;
          local_298 = (void *)0x0;
          do {
            do {
              if (*local_180 - lVar10 != 0) {
                _objc_enumerationMutation(*local_180 - lVar10,pvVar5);
              }
              uVar11 = *(ulong *)(local_188 + (long)local_298 * 8);
              puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_150 = uVar11;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar6);
              if ((uVar11 & 1) != 0) {
                dVar12 = 0.0;
                local_198 = 0.0;
                uVar11 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
                _objc_retainAutoreleasedReturnValue();
                local_1a0 = uVar11;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar11,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
                if ((uVar11 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_doubleValue_026ca608);
                  local_198 = dVar12;
                }
                if ((local_140 == (cfstringStruct *)0x0) || (local_148 <= local_198)) {
                  _objc_storeStrong(&local_140,local_150);
                  local_148 = local_198;
                }
                _objc_storeStrong(&local_1a0,0);
              }
              local_298 = (void *)((long)local_298 + 1);
            } while (local_298 < local_290);
            local_290 = pvVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pvVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_d8
                       ,0x10);
            local_298 = (void *)0x0;
          } while (local_290 != (void *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(pvVar5);
      }
    }
    else {
      local_58 = &cf_id;
      local_40 = &cf___current__;
      local_50 = &cf_type;
      local_38 = &cf_image;
      if (local_110 == (cfstringStruct *)0x0) {
        local_38 = &cf_text;
      }
      local_48 = &cf_text;
      local_30 = local_128;
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_140;
      local_140 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    if (local_140 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__4_g_Nzz);
      local_d9 = 0;
      local_fc = 1;
    }
    else {
      pcVar3 = local_140;
      FUN_009463a8();
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8,&cf_message);
      if ((((ulong)pcVar3 & 1) == 0) &&
         (pcVar3 = local_1a8,
         (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_isEqualToString__0269ccc8,&cf_file),
         ((ulong)pcVar3 & 1) == 0)) {
        pcVar3 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_isEqualToString__0269ccc8,&cf_image);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
          local_1f1 = false;
          bVar1 = ((ulong)pcVar4 & 1) == 0;
          if (bVar1) {
            local_320 = &::cf___;
          }
          else {
            local_320 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
            _objc_retainAutoreleasedReturnValue();
            local_1f0 = local_320;
          }
          local_1f1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_1e8 = local_320;
          if ((local_1f1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1f0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_length_0269cca0);
          local_201 = 0;
          local_32c = 0;
          if (pcVar3 == (cfstringStruct *)0x0) {
            pcVar3 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_201 = 1;
            local_200 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_32c = (uint)pcVar3;
          }
          if ((local_201 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_200);
          }
          if ((local_32c & 1) != 0) {
            pcVar3 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
            local_211 = 0;
            if (pcVar3 == (cfstringStruct *)0x0) {
              pcVar3 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_string_0269cc38);
              _objc_retainAutoreleasedReturnValue();
              local_211 = 1;
              local_348 = pcVar3;
              if (pcVar3 == (cfstringStruct *)0x0) {
                local_348 = &::cf___;
              }
              local_338 = local_348;
              local_210 = pcVar3;
            }
            else {
              local_338 = local_128;
            }
            _objc_storeStrong(&local_1e8,local_338);
            if ((local_211 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_210);
            }
          }
          pcVar3 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_length_0269cca0);
          if (pcVar3 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Q__Nzz);
            local_d9 = 0;
          }
          else {
            puVar6 = PTR_WCRefineInputBoxGestureSupport_026ce678;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineInputBoxGestureSupport_026ce678,
                       PTR_s_insertText_intoInputToolView_und_026aab28,local_1e8,local_f8,1);
            local_212 = (byte)puVar6;
            if (((ulong)puVar6 & 1) == 0) {
              uVar11 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
              local_229 = (uVar11 & 1) == 0;
              if (local_229) {
                local_350 = 0;
              }
              else {
                local_350 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_textView_0269d0f8);
                _objc_retainAutoreleasedReturnValue();
                local_228 = local_350;
              }
              local_229 = !local_229;
              (*(code *)PTR__objc_retain_02578638)();
              local_220 = local_350;
              if (local_229) {
                (*(code *)PTR__objc_release_02578630)(local_228);
              }
              uVar11 = local_220;
              puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar6);
              if ((uVar11 & 1) != 0) {
                puVar6 = PTR_WCRefineInputBoxGestureSupport_026ce678;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineInputBoxGestureSupport_026ce678,
                           PTR_s_insertText_intoInputToolView_und_026aab28,local_1e8,local_220,1);
                local_212 = (byte)puVar6;
              }
              _objc_storeStrong(&local_220,0);
            }
            puVar6 = PTR_WCRefineHelper_026ce000;
            if ((local_212 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__41Y_);
              local_d9 = 0;
            }
            else {
              puVar8 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_triggerHapticFeedbackWithIndex__0269f248,puVar9);
              (*(code *)PTR__objc_release_02578630)(puVar8);
              local_d9 = 1;
            }
          }
          local_fc = 1;
          _objc_storeStrong(&local_1e8,0);
        }
        else {
          local_1d0 = 0;
          pcVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (((ulong)pcVar4 & 1) == 0) {
            IVar7 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_imageForItem__026aa848,local_140);
            _objc_retainAutoreleasedReturnValue();
            IVar2 = local_1d0;
            local_1d0 = IVar7;
            (*(code *)PTR__objc_release_02578630)(IVar2);
          }
          else {
            local_300 = local_110;
            local_1d9 = 0;
            bVar1 = local_110 == (cfstringStruct *)0x0;
            if (bVar1) {
              local_300 = local_108;
              FUN_009473cc();
              _objc_retainAutoreleasedReturnValue();
              local_1d8 = local_300;
            }
            local_1d9 = bVar1;
            _objc_storeStrong(&local_1d0,local_300);
            if ((local_1d9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1d8);
            }
          }
          if (local_1d0 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrNS_u);
            local_d9 = 0;
          }
          else {
            puVar8 = PTR_WCRefineInputBoxGestureSupport_026ce678;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineInputBoxGestureSupport_026ce678,
                       PTR_s_pasteImage_intoInputToolView__026aab50,local_1d0,local_f8);
            puVar6 = PTR_WCRefineHelper_026ce000;
            local_1da = (byte)puVar8;
            if (((ulong)puVar8 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGr_41Y_);
            }
            else {
              puVar8 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_triggerHapticFeedbackWithIndex__0269f248,puVar9);
              (*(code *)PTR__objc_release_02578630)(puVar8);
            }
            local_d9 = local_1da & 1;
          }
          local_fc = 1;
          _objc_storeStrong(&local_1d0,0);
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_1b0 = &::cf___;
        puVar6 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_currentChatContactFromTopViewCon_026a1800);
        _objc_retainAutoreleasedReturnValue();
        local_1b8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
        if (((ulong)puVar6 & 1) != 0) {
          puVar6 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_m_nsUsrName_0269d638);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1c0 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar8);
          if (((ulong)puVar6 & 1) != 0) {
            _objc_storeStrong(&local_1b0,local_1c0);
          }
          _objc_storeStrong(&local_1c0,0);
        }
        pcVar3 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0);
        if (pcVar3 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_g_RS_MRO);
          local_d9 = 0;
        }
        else {
          puVar8 = PTR_WCRClipboardCapture_026ceac8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRClipboardCapture_026ceac8,PTR_s_sendItem_toUserName__026aab08,local_140,
                     local_1b0);
          puVar6 = PTR_WCRefineHelper_026ce000;
          local_1c1 = (byte)puVar8;
          if (((ulong)puVar8 & 1) != 0) {
            puVar8 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_triggerHapticFeedbackWithIndex__0269f248,puVar9);
            (*(code *)PTR__objc_release_02578630)(puVar8);
          }
          local_d9 = local_1c1 & 1;
        }
        local_fc = 1;
        _objc_storeStrong(&local_1b8);
        _objc_storeStrong(&local_1b0,0);
      }
      _objc_storeStrong(&local_1a8,0);
    }
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_d9 & 1;
}

