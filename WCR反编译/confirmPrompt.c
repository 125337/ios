// confirmPrompt @ 017bccd8

/* Function Stack Size: 0x10 bytes */

void WCRefineAIFeatureViewController::confirmPrompt(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_promptAlert_026b4ca0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_promptKind_026b4cb8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPromptAlert__026b4c98);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPromptKind__026b4c90,0);
  IVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_imageCommand);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_videoCommand)
    ;
    if ((IVar1 & 1) == 0) {
      IVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,&cf_videoDuration);
      if ((IVar1 & 1) == 0) {
        IVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_isEqualToString__0269ccc8,&cf_polishCommand);
        if ((IVar1 & 1) == 0) {
          IVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_isEqualToString__0269ccc8,&cf_groupAnalysisCommand);
          if ((IVar1 & 1) == 0) {
            IVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isEqualToString__0269ccc8,&cf_replyCommand);
            if ((IVar1 & 1) == 0) {
              IVar1 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_isEqualToString__0269ccc8,&cf_prefix);
              if ((IVar1 & 1) == 0) {
                IVar1 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_isEqualToString__0269ccc8,&cf_suffix);
                if ((IVar1 & 1) == 0) {
                  IVar1 = local_40;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_replyCount);
                  if ((IVar1 & 1) == 0) {
                    IVar1 = local_40;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_40,PTR_s_isEqualToString__0269ccc8,&cf_replyMaxChars);
                    if ((IVar1 & 1) == 0) {
                      IVar1 = local_40;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_40,PTR_s_isEqualToString__0269ccc8,&cf_analysisMaxChars);
                      if ((IVar1 & 1) == 0) {
                        IVar1 = local_38;
                        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
                        if (IVar1 == 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                                     &cf_Q_N_Nzz);
                        }
                        else {
                          IVar1 = local_40;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_40,PTR_s_isEqualToString__0269ccc8,&cf_image);
                          if ((IVar1 & 1) == 0) {
                            IVar1 = local_40;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_40,PTR_s_isEqualToString__0269ccc8,&cf_video);
                            if ((IVar1 & 1) == 0) {
                              IVar1 = local_40;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_40,PTR_s_isEqualToString__0269ccc8,&cf_connectionTest
                                        );
                              if ((IVar1 & 1) != 0) {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_28,PTR_s_runPresetTestQuestion__026b4d28,local_38);
                              }
                            }
                            else {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_28,PTR_s_runVideo__026b4d20,local_38);
                            }
                          }
                          else {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_28,PTR_s_runImage__026b4d18,local_38);
                          }
                        }
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
                        puVar3 = PTR_WCRefineAIStore_026ce048;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(puVar3);
                        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
                      }
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
                      puVar3 = PTR_WCRefineAIStore_026ce048;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(puVar3);
                      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
                    }
                  }
                  else {
                    puVar3 = PTR_WCRefineAIStore_026ce048;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(puVar3);
                    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
                  }
                }
                else {
                  puVar3 = PTR_WCRefineAIStore_026ce048;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
                }
              }
              else {
                puVar3 = PTR_WCRefineAIStore_026ce048;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar3);
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
              }
            }
            else {
              puVar3 = PTR_WCRefineAIStore_026ce048;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
            }
          }
          else {
            puVar3 = PTR_WCRefineAIStore_026ce048;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
          }
        }
        else {
          puVar3 = PTR_WCRefineAIStore_026ce048;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
        puVar3 = PTR_WCRefineAIStore_026ce048;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
      }
    }
    else {
      puVar3 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
    }
  }
  else {
    puVar3 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTable_026aa898);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

