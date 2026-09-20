// activateItem: @ 009541b0

/* Function Stack Size: 0x18 bytes */

void WCRClipboardHistoryPanelController::activateItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  ID local_168;
  cfstringStruct *local_140;
  cfstringStruct *local_110;
  ID local_e0;
  ID local_c0;
  bool local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  byte local_92;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined1 local_73;
  undefined1 local_72;
  byte local_71;
  ID local_70;
  byte local_61;
  ID local_60;
  ID local_58;
  cfstringStruct *local_50;
  ID local_48;
  byte local_3d;
  int local_3c;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == (cfstringStruct *)0x0) {
    local_3c = 1;
    goto LAB_00954ec8;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_3d = (byte)puVar3;
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inputToolView_0269d0e8);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = local_38;
  local_48 = IVar4;
  FUN_009463a8();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isEqualToString__0269ccc8,&cf_message);
  if ((((ulong)pcVar5 & 1) == 0) &&
     (pcVar5 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_file),
     ((ulong)pcVar5 & 1) == 0)) {
    if ((local_3d & 1) == 0) {
      local_92 = 0;
      pcVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_image);
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_b1 = false;
        bVar1 = ((ulong)pcVar8 & 1) == 0;
        if (bVar1) {
          local_140 = &::cf___;
        }
        else {
          local_140 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = local_140;
        }
        local_b1 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = local_140;
        if ((local_b1 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
        if (pcVar5 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Q__Nzz);
          local_3c = 1;
        }
        else {
          puVar2 = PTR_WCRefineInputBoxGestureSupport_026ce678;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineInputBoxGestureSupport_026ce678,
                     PTR_s_insertText_intoInputToolView_und_026aab28,local_a8,local_48,1);
          local_92 = (byte)puVar2;
          if (((ulong)puVar2 & 1) == 0) {
            IVar4 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_growTextViewFromTool__026aaae8,local_48);
            _objc_retainAutoreleasedReturnValue();
            local_168 = IVar4;
            if (IVar4 == 0) {
              local_168 = local_48;
            }
            puVar2 = PTR_WCRefineInputBoxGestureSupport_026ce678;
            local_c0 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineInputBoxGestureSupport_026ce678,
                       PTR_s_insertText_intoInputToolView_und_026aab28,local_a8,local_168,1);
            local_92 = (byte)puVar2;
            _objc_storeStrong(&local_c0,0);
          }
          if ((local_92 & 1) == 0) {
            puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
          }
          local_3c = 0;
        }
        _objc_storeStrong(&local_a8,0);
      }
      else {
        local_a0 = (undefined *)0x0;
        pcVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        if (((ulong)pcVar8 & 1) == 0) {
          puVar3 = PTR_WCRClipboardHistoryStore_026ce680;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_imageForItem__026aa848,local_38);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_a0;
          local_a0 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        else {
          puVar3 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          FUN_009473cc();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_a0;
          local_a0 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        if (local_a0 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrNS_u);
          local_3c = 1;
        }
        else {
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_pasteImageIntoInput_tool__026aab18,local_a0,local_48);
          local_92 = (byte)IVar4;
          if ((IVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
          }
          local_3c = 0;
        }
        _objc_storeStrong(&local_a0,0);
      }
      if (local_3c == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissSheet_0269e418);
        local_3c = 0;
      }
    }
    else {
      local_73 = 0;
      pcVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_image);
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_91 = false;
        bVar1 = ((ulong)pcVar8 & 1) == 0;
        if (bVar1) {
          local_110 = &::cf___;
        }
        else {
          local_110 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
          _objc_retainAutoreleasedReturnValue();
          local_90 = local_110;
        }
        local_91 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_110;
        if ((local_91 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if (pcVar5 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Q__Nzz);
          local_3c = 1;
        }
        else {
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendTextDirectly__026aab20,local_88);
          local_73 = (undefined1)IVar4;
          if ((IVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_g_RS_MRO)
            ;
            local_3c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
            local_3c = 0;
          }
        }
        _objc_storeStrong(&local_88,0);
      }
      else {
        local_80 = (undefined *)0x0;
        pcVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        if (((ulong)pcVar8 & 1) == 0) {
          puVar3 = PTR_WCRClipboardHistoryStore_026ce680;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_imageForItem__026aa848,local_38);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_80;
          local_80 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        else {
          puVar3 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          FUN_009473cc();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_80;
          local_80 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        if (local_80 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrNS_u);
          local_3c = 1;
        }
        else {
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendImageDirectly__026aab10,local_80)
          ;
          local_73 = (undefined1)IVar4;
          if ((IVar4 & 1) == 0) {
            IVar4 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_pasteImageIntoInput_tool__026aab18,local_80,local_48);
            local_73 = (undefined1)IVar4;
            if ((IVar4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S1Y_);
              local_3c = 1;
              goto LAB_00954754;
            }
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
          local_3c = 0;
        }
LAB_00954754:
        _objc_storeStrong(&local_80,0);
      }
      if (local_3c == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissSheet_0269e418);
        local_3c = 1;
      }
    }
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatName_026aa868);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_61 = 0;
    local_71 = 0;
    local_e0 = local_28;
    if (IVar6 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolveChatName_026aa870);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_e0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatName_026aa868);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_e0;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setChatName__026aa878,local_58);
    IVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (IVar4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_g_RS_MRO);
    }
    else {
      puVar2 = PTR_WCRClipboardCapture_026ceac8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRClipboardCapture_026ceac8,PTR_s_sendItem_toUserName__026aab08,local_38,
                 local_58);
      local_72 = SUB81(puVar2,0);
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissSheet_0269e418);
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
LAB_00954ec8:
  _objc_storeStrong(&local_38,0);
  return;
}

