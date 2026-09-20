// showNumericAlertForKey:title:hint: @ 01ec87c4

/* Function Stack Size: 0x28 bytes */

void WCRefineToDoListSettingsViewController::showNumericAlertForKey_title_hint_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  char *local_68;
  undefined *local_60;
  undefined *local_58;
  double local_50;
  undefined4 local_44;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  local_40 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingNumericKey__026be4d8,local_28);
    dVar5 = 0.0;
    local_50 = 0.0;
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardHeight);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardWidth);
      if ((uVar4 & 1) == 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardCornerRadius);
        if ((uVar4 & 1) == 0) {
          uVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardStrokeWidth);
          if ((uVar4 & 1) == 0) {
            uVar4 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardSideMargin);
            if ((uVar4 & 1) == 0) {
              uVar4 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardContentInset);
              if ((uVar4 & 1) == 0) {
                uVar4 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardContentItemSpacing);
                if ((uVar4 & 1) == 0) {
                  uVar4 = local_28;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardWebContentOffsetX)
                  ;
                  if ((uVar4 & 1) == 0) {
                    uVar4 = local_28;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_28,PTR_s_isEqualToString__0269ccc8,
                               &cf_toDoCardWebContentOffsetY);
                    if ((uVar4 & 1) == 0) {
                      uVar4 = local_28;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toDoCardTopSpacing);
                      if ((uVar4 & 1) == 0) {
                        uVar4 = local_28;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_28,PTR_s_isEqualToString__0269ccc8,
                                   &cf_toDoCardBottomSpacing);
                        if ((uVar4 & 1) == 0) {
                          uVar4 = local_28;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_28,PTR_s_isEqualToString__0269ccc8,
                                     &cf_toDoCardSinkDistance);
                          if ((uVar4 & 1) == 0) {
                            uVar4 = local_28;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_28,PTR_s_isEqualToString__0269ccc8,
                                       &cf_toDoCardBackgroundMediaOpacity);
                            if ((uVar4 & 1) == 0) {
                              uVar4 = local_28;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_28,PTR_s_isEqualToString__0269ccc8,
                                         &cf_toDoCardLocalFontSize);
                              if ((uVar4 & 1) == 0) {
                                uVar4 = local_28;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_28,PTR_s_isEqualToString__0269ccc8,
                                           &cf_toDoCardTitleFontSize);
                                if ((uVar4 & 1) == 0) {
                                  uVar4 = local_28;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_28,PTR_s_isEqualToString__0269ccc8,
                                             &cf_toDoCardBulletTextSpacing);
                                  if ((uVar4 & 1) == 0) {
                                    uVar4 = local_28;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_28,PTR_s_isEqualToString__0269ccc8,
                                               &cf_toDoCardBulletSize);
                                    if ((uVar4 & 1) == 0) {
                                      uVar4 = local_28;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_28,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_toDoCardCustomSectionOffset);
                                      if ((uVar4 & 1) != 0) {
                                        puVar3 = local_58;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_58,
                                                  PTR_s_toDoCardCustomSectionOffset_026a2578);
                                        local_50 = (double)(long)puVar3;
                                      }
                                    }
                                    else {
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_58,PTR_s_toDoCardBulletSize_026c6e08);
                                      local_50 = dVar5;
                                    }
                                  }
                                  else {
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_58,PTR_s_toDoCardBulletTextSpacing_026c71d0);
                                    local_50 = dVar5;
                                  }
                                }
                                else {
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_58,PTR_s_toDoCardTitleFontSize_026c6df0);
                                  local_50 = dVar5;
                                }
                              }
                              else {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_58,PTR_s_toDoCardLocalFontSize_026c6e00);
                                local_50 = dVar5;
                              }
                            }
                            else {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_58,PTR_s_toDoCardBackgroundMediaOpacity_026c70a8);
                              local_50 = dVar5;
                            }
                          }
                          else {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_58,PTR_s_toDoCardSinkDistance_026c7b10);
                            local_50 = dVar5;
                          }
                        }
                        else {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_58,PTR_s_toDoCardBottomSpacing_026a8960);
                          local_50 = dVar5;
                        }
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_58,PTR_s_toDoCardTopSpacing_026a8958);
                        local_50 = dVar5;
                      }
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_58,PTR_s_toDoCardWebContentOffsetY_026c6d88);
                      local_50 = dVar5;
                    }
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_58,PTR_s_toDoCardWebContentOffsetX_026c6d80);
                    local_50 = dVar5;
                  }
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_58,PTR_s_toDoCardContentItemSpacing_026c6e10);
                  local_50 = dVar5;
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardContentInset_026c78b8);
                local_50 = dVar5;
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardSideMargin_026a8968);
              local_50 = dVar5;
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardStrokeWidth_026c6f00);
            local_50 = dVar5;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardCornerRadius_026c6ef8);
          local_50 = dVar5;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardWidth_026a8950);
        local_50 = dVar5;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardHeight_026a8948);
      local_50 = dVar5;
    }
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_40;
    local_60 = puVar3;
    _objc_alloc();
    uVar1 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_newline_s_
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle_message__0269d260,uVar1);
    local_68 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_showTextFieldWithMaxLen__0269e5e0,8);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextFieldDefaultText__0269fd98,local_60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmNumericValue_026be4e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_68);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

