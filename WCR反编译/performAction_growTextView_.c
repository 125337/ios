// performAction:growTextView: @ 00fea30c

/* Function Stack Size: 0x20 bytes */

bool WCRefineInputBoxGestureSupport::performAction_growTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1b0;
  cfstringStruct *local_188;
  cfstringStruct *local_178;
  cfstringStruct *local_140;
  cfstringStruct *local_120;
  cfstringStruct *local_110;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined1 local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8 [4];
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  SEL local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_normalizedAction__026a3438,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isEqualToString__0269ccc8,&cf_none);
  if (((ulong)pcVar1 & 1) != 0) {
    local_21 = 0;
    local_54 = 1;
    goto LAB_00feaf44;
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_inputToolViewFromGrowTextView__026a34c0,local_48);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_60 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_innerTextViewFromGrowTextView__026a3440,local_48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_68 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_50;
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_undo);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_paste);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_clipboard);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_isEqualToString__0269ccc8,&cf_quickReply);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_clear);
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_isEqualToString__0269ccc8,&cf_copyAll);
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_isEqualToString__0269ccc8,&cf_cut);
              if (((ulong)pcVar1 & 1) == 0) {
                pcVar1 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_50,PTR_s_isEqualToString__0269ccc8,&cf_hideKeyboard);
                if (((ulong)pcVar1 & 1) == 0) {
                  local_21 = 0;
                  local_54 = 1;
                }
                else {
                  if (local_68 == (cfstringStruct *)0x0) {
                    local_1e0 = local_48;
                  }
                  else {
                    local_1e0 = local_68;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_f8 = local_1e0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e0,PTR_s_resignFirstResponder_0269ea18);
                  puVar3 = local_70;
                  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  FUN_00feb44c();
                  local_21 = 1;
                  local_54 = 1;
                  _objc_storeStrong(&local_f8,0);
                }
              }
              else {
                pcVar1 = local_48;
                FUN_00fe91d8(local_48,local_60,local_68);
                _objc_retainAutoreleasedReturnValue();
                local_1b0 = pcVar1;
                if (pcVar1 == (cfstringStruct *)0x0) {
                  local_1b0 = &::cf___;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_d8 = local_1b0;
                (*(code *)PTR__objc_release_02578630)(pcVar1);
                pcVar1 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
                if (pcVar1 == (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                             &cf_eQFh_Nzz);
                  local_21 = 0;
                }
                else {
                  local_e0 = (cfstringStruct *)0x0;
                  if ((local_68 != (cfstringStruct *)0x0) &&
                     (pcVar1 = local_68,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_68,PTR_s_respondsToSelector__026ca818,
                                PTR_s_selectedRange_026a43a0), ((ulong)pcVar1 & 1) != 0)) {
                    pcVar1 = local_68;
                    puVar3 = PTR_s_selectedRange_026a43a0;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    pcVar2 = local_d8;
                    local_f0 = pcVar1;
                    local_e8 = puVar3;
                    local_e0 = pcVar1;
                    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
                    if (pcVar2 < pcVar1) {
                      pcVar1 = local_d8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
                      local_e0 = pcVar1;
                    }
                  }
                  FUN_00feb7ec(local_48,local_60,local_68,local_d8,local_e0);
                  FUN_00feb71c(local_d8);
                  puVar3 = PTR_WCRClipboardHistoryStore_026ce680;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  FUN_00feb9f0(local_d8);
                  FUN_00feb504(local_48,local_60,local_68,&::cf___);
                  FUN_00feb44c();
                  local_21 = 1;
                }
                local_54 = 1;
                _objc_storeStrong(&local_d8,0);
              }
            }
            else {
              pcVar1 = local_48;
              FUN_00fe91d8(local_48,local_60,local_68);
              _objc_retainAutoreleasedReturnValue();
              local_188 = pcVar1;
              if (pcVar1 == (cfstringStruct *)0x0) {
                local_188 = &::cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_d0 = local_188;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              pcVar1 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
              if (pcVar1 != (cfstringStruct *)0x0) {
                FUN_00feb71c(local_d0);
                puVar3 = PTR_WCRClipboardHistoryStore_026ce680;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar3);
                FUN_00feb4e4();
                FUN_00feb44c();
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQFh_Nzz)
                ;
              }
              local_54 = 1;
              local_21 = pcVar1 != (cfstringStruct *)0x0;
              _objc_storeStrong(&local_d0,0);
            }
          }
          else {
            FUN_00feb504(local_48,local_60,local_68,&::cf___);
            FUN_00feb44c();
            local_21 = 1;
            local_54 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineQuickReplyStore_026cec50,
                     PTR_s_presentPanelFromViewController_i_026ab958,local_70,local_60);
          FUN_00feb44c();
          local_21 = 1;
          local_54 = 1;
        }
      }
      else {
        if (local_60 == (cfstringStruct *)0x0) {
          local_178 = local_48;
        }
        else {
          local_178 = local_60;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRClipboardHistoryStore_026ce680,
                   PTR_s_presentHistoryPanelFromViewContr_026aabc8,local_70,local_178);
        FUN_00feb44c();
        local_21 = 1;
        local_54 = 1;
      }
    }
    else {
      if (local_60 == (cfstringStruct *)0x0) {
        local_140 = local_48;
      }
      else {
        local_140 = local_60;
      }
      pcVar1 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8[0] = local_140;
      FUN_00feb4d8();
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
LAB_00fea844:
        puVar3 = PTR_WCRClipboardHistoryStore_026ce680;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRClipboardHistoryStore_026ce680,
                   PTR_s_pasteMostRecentIntoInputToolView_026ab948,local_b8[0]);
        local_21 = (byte)puVar3 & 1;
      }
      else {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_insertText_intoInputToolView_und_026aab28,local_c0,local_b8[0],1);
        local_c1 = SUB81(pcVar1,0);
        if (((ulong)pcVar1 & 1) == 0) goto LAB_00fea844;
        puVar3 = PTR_WCRClipboardHistoryStore_026ce680;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        FUN_00feb4e4();
        FUN_00feb44c();
        local_21 = 1;
      }
      local_54 = 1;
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(local_b8,0);
    }
  }
  else {
    pcVar1 = local_48;
    FUN_00feaf8c(local_48,local_60,local_68);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_undoManager_026ad510);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 0;
      local_91 = 0;
      local_110 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_120 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_undoManager_026ad510);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_120;
        if (local_120 == (cfstringStruct *)0x0) {
          local_120 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_undoManager_026ad510);
          _objc_retainAutoreleasedReturnValue();
          local_91 = 1;
          local_90 = local_120;
        }
        local_110 = local_120;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_110;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if ((local_78 == (cfstringStruct *)0x0) ||
         (pcVar1 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_canUndo_026ad518),
         ((ulong)pcVar1 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eSd);
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_undo_026ad520);
        FUN_00feb44c();
        local_21 = 1;
      }
      local_54 = 1;
      _objc_storeStrong(&local_78,0);
    }
    else {
      FUN_00feb44c();
      local_21 = 1;
      local_54 = 1;
    }
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
LAB_00feaf44:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

