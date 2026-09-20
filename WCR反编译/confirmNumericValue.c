// confirmNumericValue @ 01ec8ffc

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineToDoListSettingsViewController::confirmNumericValue
          (WCRefineToDoListSettingsViewController *this,ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
  double local_68;
  undefined *local_40;
  ID local_38;
  double local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_18;
    local_30 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingNumericKey_026be4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_38 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_38;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardHeight);
    if ((IVar1 & 1) == 0) {
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardWidth);
      if ((IVar1 & 1) == 0) {
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardCornerRadius);
        if ((IVar1 & 1) == 0) {
          IVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardStrokeWidth);
          if ((IVar1 & 1) == 0) {
            IVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardSideMargin);
            if ((IVar1 & 1) == 0) {
              IVar1 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardContentInset);
              if ((IVar1 & 1) == 0) {
                IVar1 = local_38;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_38,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardContentItemSpacing);
                if ((IVar1 & 1) == 0) {
                  IVar1 = local_38;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_38,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardWebContentOffsetX)
                  ;
                  if ((IVar1 & 1) == 0) {
                    IVar1 = local_38;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_38,PTR_s_isEqualToString__0269ccc8,
                               &cf_toDoCardWebContentOffsetY);
                    if ((IVar1 & 1) == 0) {
                      IVar1 = local_38;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardTopSpacing);
                      if ((IVar1 & 1) == 0) {
                        IVar1 = local_38;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_38,PTR_s_isEqualToString__0269ccc8,
                                   &cf_toDoCardBottomSpacing);
                        if ((IVar1 & 1) == 0) {
                          IVar1 = local_38;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_38,PTR_s_isEqualToString__0269ccc8,
                                     &cf_toDoCardSinkDistance);
                          if ((IVar1 & 1) == 0) {
                            IVar1 = local_38;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_38,PTR_s_isEqualToString__0269ccc8,
                                       &cf_toDoCardBackgroundMediaOpacity);
                            if ((IVar1 & 1) == 0) {
                              IVar1 = local_38;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_38,PTR_s_isEqualToString__0269ccc8,
                                         &cf_toDoCardLocalFontSize);
                              if ((IVar1 & 1) == 0) {
                                IVar1 = local_38;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_38,PTR_s_isEqualToString__0269ccc8,
                                           &cf_toDoCardTitleFontSize);
                                if ((IVar1 & 1) == 0) {
                                  IVar1 = local_38;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_38,PTR_s_isEqualToString__0269ccc8,
                                             &cf_toDoCardBulletTextSpacing);
                                  if ((IVar1 & 1) == 0) {
                                    IVar1 = local_38;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_38,PTR_s_isEqualToString__0269ccc8,
                                               &cf_toDoCardBulletSize);
                                    if ((IVar1 & 1) == 0) {
                                      IVar1 = local_38;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_38,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_toDoCardCustomSectionOffset);
                                      if ((IVar1 & 1) != 0) {
                                        if (local_30 < 0.0) {
                                          local_68 = local_30 - 0.5;
                                        }
                                        else {
                                          local_68 = local_30 + 0.5;
                                        }
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_40,
                                                  PTR_s_setToDoCardCustomSectionOffset__026c7af0,
                                                  (long)local_68);
                                      }
                                    }
                                    else {
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_30,local_40,
                                                 PTR_s_setToDoCardBulletSize__026c7b78);
                                    }
                                  }
                                  else {
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_30,local_40,
                                               PTR_s_setToDoCardBulletTextSpacing__026c7b70);
                                  }
                                }
                                else {
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_30,local_40,
                                             PTR_s_setToDoCardTitleFontSize__026c7b68);
                                }
                              }
                              else {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_30,local_40,
                                           PTR_s_setToDoCardLocalFontSize__026c7b60);
                              }
                            }
                            else {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_30,local_40,
                                         PTR_s_setToDoCardBackgroundMediaOpacit_026c7b58);
                            }
                          }
                          else {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_30,local_40,PTR_s_setToDoCardSinkDistance__026c7b50);
                          }
                        }
                        else {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_30,local_40,PTR_s_setToDoCardBottomSpacing__026c7b48);
                        }
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_30,local_40,PTR_s_setToDoCardTopSpacing__026c7b40);
                      }
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_30,local_40,PTR_s_setToDoCardWebContentOffsetY__026c6db8);
                    }
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_30,local_40,PTR_s_setToDoCardWebContentOffsetX__026c6db0);
                  }
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_30,local_40,PTR_s_setToDoCardContentItemSpacing__026c7b38);
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,local_40,PTR_s_setToDoCardContentInset__026c7b30);
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,local_40,PTR_s_setToDoCardSideMargin__026c7b28);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,local_40,PTR_s_setToDoCardStrokeWidth__026c7b20);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,local_40,PTR_s_setToDoCardCornerRadius__026c7b18);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_40,PTR_s_setToDoCardWidth__026c6d98);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_40,PTR_s_setToDoCardHeight__026c6d90);
    }
    _WCRefineToDoPersistHTMLLayoutForWork();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingNumericKey__026be4d8,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

