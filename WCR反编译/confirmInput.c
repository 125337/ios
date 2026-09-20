// confirmInput @ 017df194

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::confirmInput(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_208;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  uint local_64;
  ID local_60;
  ID local_58;
  byte local_4a;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ID local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  FUN_017e0348();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingField_026b5480);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_28;
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingProviderID_026b5220);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_48 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingField__026b5468,0);
  local_4a = 0;
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_systemPrompt);
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_isEqualToString__0269ccc8,&cf_chatReplyPrompt);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,&cf_chatAgentTrigger);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_isEqualToString__0269ccc8,&cf_chatReplyCommand);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_isEqualToString__0269ccc8,&cf_chatAgentPrefix);
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isEqualToString__0269ccc8,&cf_chatAgentSuffix);
            if (((ulong)pcVar3 & 1) == 0) {
              pcVar3 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_isEqualToString__0269ccc8,&cf_chatImageCommand);
              if (((ulong)pcVar3 & 1) == 0) {
                pcVar3 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_isEqualToString__0269ccc8,&cf_chatVideoCommand);
                if (((ulong)pcVar3 & 1) == 0) {
                  pcVar3 = local_40;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_videoDurationSeconds);
                  if (((ulong)pcVar3 & 1) == 0) {
                    pcVar3 = local_40;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_40,PTR_s_isEqualToString__0269ccc8,&cf_apiKey);
                    IVar2 = local_38;
                    if (((ulong)pcVar3 & 1) == 0) {
                      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (IVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                      _objc_retainAutoreleasedReturnValue();
                      local_60 = IVar2;
                      (*(code *)PTR__objc_release_02578630)(puVar5);
                      IVar2 = local_60;
                      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
                      if ((IVar2 == 0) &&
                         (pcVar3 = local_40,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_40,PTR_s_isEqualToString__0269ccc8,&cf_imagePath),
                         ((ulong)pcVar3 & 1) == 0)) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                                   &cf_Q_N_Nzz);
                        local_64 = 1;
                      }
                      else {
                        pcVar3 = local_40;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_40,PTR_s_isEqualToString__0269ccc8,&cf_baseURL);
                        if (((ulong)pcVar3 & 1) != 0) {
                          puVar5 = PTR_WCRefineAIClient_026ce080;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR_WCRefineAIClient_026ce080,
                                     PTR_s_validationErrorForBaseURL__026b5498,local_60);
                          _objc_retainAutoreleasedReturnValue();
                          local_70 = puVar5;
                          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
                          if (puVar5 != (undefined *)0x0) {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                                       local_70);
                          }
                          local_64 = (uint)(puVar5 != (undefined *)0x0);
                          _objc_storeStrong(&local_70,0);
                          if (local_64 != 0) goto LAB_017dfe90;
                        }
                        pcVar3 = local_48;
                        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
                        if (pcVar3 == (cfstringStruct *)0x0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                                     &cf_S_MRs_SeHecS0W_W_gOX_);
                          local_64 = 1;
                        }
                        else {
                          puVar5 = PTR_WCRefineAIStore_026ce048;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)();
                          (*(code *)PTR__objc_release_02578630)(puVar5);
                          pcVar3 = local_40;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_40,PTR_s_isEqualToString__0269ccc8,&cf_baseURL);
                          if (((ulong)pcVar3 & 1) != 0) {
                            puVar5 = PTR_WCRefineAIStore_026ce048;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                            _objc_retainAutoreleasedReturnValue();
                            puVar6 = puVar5;
                            (*(code *)PTR__objc_msgSend_02578628)();
                            _objc_retainAutoreleasedReturnValue();
                            puVar7 = puVar6;
                            (*(code *)PTR__objc_msgSend_02578628)();
                            _objc_retainAutoreleasedReturnValue();
                            local_78 = puVar7;
                            (*(code *)PTR__objc_release_02578630)(puVar6);
                            (*(code *)PTR__objc_release_02578630)(puVar5);
                            puVar5 = local_78;
                            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
                            if (puVar5 == (undefined *)0x0) {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78
                                         ,&cf_cS0W_WOX_1Y_);
                              local_64 = 1;
                            }
                            else {
                              puVar5 = PTR_WCRefineAIStore_026ce048;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                              _objc_retainAutoreleasedReturnValue();
                              pcVar3 = local_48;
                              pcVar4 = local_28;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_28,PTR_s_pendingAPIKeyKind_026b5490);
                              _objc_retainAutoreleasedReturnValue();
                              puVar6 = puVar5;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (puVar5,PTR_s_apiKeyForProviderID_kind__0269d488,pcVar3);
                              _objc_retainAutoreleasedReturnValue();
                              local_80 = puVar6;
                              (*(code *)PTR__objc_release_02578630)(pcVar4);
                              (*(code *)PTR__objc_release_02578630)(puVar5);
                              puVar5 = local_80;
                              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
                              if (puVar5 != (undefined *)0x0) {
                                puVar6 = PTR_WCRefineAIStore_026ce048;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                                _objc_retainAutoreleasedReturnValue();
                                pcVar3 = local_48;
                                puVar5 = local_80;
                                pcVar4 = local_28;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_28,PTR_s_pendingAPIKeyKind_026b5490);
                                _objc_retainAutoreleasedReturnValue();
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (puVar6,PTR_s_setAPIKey_providerID_kind__026b5370,puVar5,
                                           pcVar3);
                                (*(code *)PTR__objc_release_02578630)(pcVar4);
                                (*(code *)PTR__objc_release_02578630)(puVar6);
                              }
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78
                                         ,&cf_cS0W_W_OX_);
                              _objc_storeStrong(&local_80,0);
                              local_64 = 0;
                            }
                            _objc_storeStrong(&local_78,0);
                            if (local_64 != 0) goto LAB_017dfe90;
                          }
                          local_64 = 0;
                        }
                      }
LAB_017dfe90:
                      _objc_storeStrong(&local_60,0);
                      if (local_64 != 0) goto LAB_017e0310;
                    }
                    else {
                      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (IVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                      _objc_retainAutoreleasedReturnValue();
                      local_58 = IVar2;
                      (*(code *)PTR__objc_release_02578630)(puVar5);
                      IVar2 = local_58;
                      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
                      if (IVar2 == 0) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                                   &cf__geQe);
                      }
                      else {
                        puVar5 = PTR_WCRefineAIStore_026ce048;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                        _objc_retainAutoreleasedReturnValue();
                        IVar2 = local_58;
                        pcVar3 = local_28;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_28,PTR_s_editingProviderID_026b5220);
                        _objc_retainAutoreleasedReturnValue();
                        pcVar4 = local_28;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_28,PTR_s_pendingAPIKeyKind_026b5490);
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = puVar5;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar5,PTR_s_setAPIKey_providerID_kind__026b5370,IVar2,pcVar3);
                        (*(code *)PTR__objc_release_02578630)(pcVar4);
                        (*(code *)PTR__objc_release_02578630)(pcVar3);
                        (*(code *)PTR__objc_release_02578630)(puVar5);
                        if (((ulong)puVar6 & 1) == 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                                     &::cf_A);
                        }
                        else {
                          local_49 = 1;
                        }
                      }
                      _objc_storeStrong(&local_58,0);
                    }
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
                    puVar5 = PTR_WCRefineAIStore_026ce048;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                  }
                }
                else {
                  puVar5 = PTR_WCRefineAIStore_026ce048;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                }
              }
              else {
                puVar5 = PTR_WCRefineAIStore_026ce048;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar5);
              }
            }
            else {
              puVar5 = PTR_WCRefineAIStore_026ce048;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
          }
          else {
            puVar5 = PTR_WCRefineAIStore_026ce048;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
        }
        else {
          puVar5 = PTR_WCRefineAIStore_026ce048;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
      }
      else {
        puVar5 = PTR_WCRefineAIStore_026ce048;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
    }
    else {
      puVar5 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_4a = 1;
    }
  }
  else {
    puVar5 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_4a = 1;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
  if ((local_4a & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrOfferSaveAsPersona__026b5458,local_38);
  }
  if ((local_49 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingModelProviderID__026b5390);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingModelKind__026b5398,0);
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingModelProviderID_026b5428);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_91 = false;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_208 = local_48;
    }
    else {
      local_208 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingModelProviderID_026b5428);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_208;
    }
    local_91 = pcVar4 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_208;
    if ((local_91 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar5 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingModelKind_026b5430);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = false;
    if (pcVar4 == (cfstringStruct *)0x0) {
      puVar5 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_supportsChat_026aad10);
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_supportsImage_026aad18);
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_supportsVideo_026aad20);
          local_238 = &cf_video;
          if (((ulong)puVar5 & 1) == 0) {
            local_238 = (cfstringStruct *)0x0;
          }
        }
        else {
          local_238 = &cf_image;
        }
        local_230 = local_238;
      }
      else {
        local_230 = &cf_chat;
      }
      local_228 = local_230;
    }
    else {
      local_228 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingModelKind_026b5430);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_b0 = local_228;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = local_228;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingModelProviderID__026b5390);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingModelKind__026b5398,0);
    pcVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcrFetchCloudModelsForProvider_k_026b53c8,local_a0,local_a8);
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_88,0);
  }
  local_64 = 0;
LAB_017e0310:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

