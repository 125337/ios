// FUN_00896e54 @ 00896e54

byte FUN_00896e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_40;
  FUN_008a28c0();
  uVar1 = (uint)uVar2;
  if (((uVar2 & 1) == 0) || (FUN_0089ccc0(), (uVar1 & 1) == 0)) {
    uVar2 = local_40;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_isEqualToString__0269ccc8,&cf_clicfg_main_frame_menu_search_entry),
       (uVar2 & 1) == 0)) {
      uVar2 = local_40;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_40,PTR_s_isEqualToString__0269ccc8,
                    &cf_clicfg_system_control_menu_show_delete), (uVar2 & 1) == 0)) {
        uVar2 = local_40;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar1 = (uint)uVar2;
        if ((uVar2 & 1) != 0) {
          uVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_isEqualToString__0269ccc8,&cf_clicfg_reserve_session_at_delete);
          uVar1 = (uint)uVar2;
          if ((uVar2 & 1) != 0) {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            FUN_0088fb40();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
              local_21 = 1;
            }
            else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
              local_21 = 0;
            }
            else {
              uVar5 = local_30;
              (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
              local_21 = (byte)uVar5 & 1;
            }
            goto LAB_0089848c;
          }
        }
        FUN_008a0c48();
        uVar2 = local_40;
        if ((uVar1 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar2 & 1) != 0) &&
             (uVar2 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_40,PTR_s_isEqualToString__0269ccc8,&cf_clicfg_enable_optimize_config),
             (uVar2 & 1) != 0)) {
            FUN_008a1538();
            FUN_0088fb40();
            if (uVar2 == 1) {
              local_21 = 1;
            }
            else if (uVar2 == 2) {
              local_21 = 0;
            }
            else {
              uVar5 = local_30;
              (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
              local_21 = (byte)uVar5 & 1;
            }
            goto LAB_0089848c;
          }
        }
        uVar2 = local_40;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((uVar2 & 1) == 0) ||
           (uVar2 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40,PTR_s_isEqualToString__0269ccc8,
                      &cf_clicfg_inviter_user_all_member_can_see), (uVar2 & 1) == 0)) {
          uVar2 = local_40;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar2 & 1) == 0) ||
             ((uVar2 = local_40,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_isEqualToString__0269ccc8,&cf_clicfg_chat_voice_trans_open),
              (uVar2 & 1) == 0 &&
              (uVar2 = local_40,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_isEqualToString__0269ccc8,
                         &cf_clicfg_chat_voice_trans_newstyle), (uVar2 & 1) == 0)))) {
            uVar2 = local_40;
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((uVar2 & 1) == 0) ||
               (((uVar2 = local_40,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_40,PTR_s_isEqualToString__0269ccc8,
                            &cf_clicfg_chat_dictation_command), (uVar2 & 1) == 0 &&
                 (uVar2 = local_40,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_40,PTR_s_isEqualToString__0269ccc8,
                            &cf_clicfg_chat_dictation_command_33), (uVar2 & 1) == 0)) &&
                (uVar2 = local_40,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_isEqualToString__0269ccc8,&cf_clicfg_chat_dictation_ilink)
                , (uVar2 & 1) == 0)))) {
              uVar2 = local_40;
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((uVar2 & 1) != 0) &&
                 ((uVar2 = local_40,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_isEqualToString__0269ccc8,
                             &cf_clicfg_voice_trans_placeholder_dismiss_enabled), (uVar2 & 1) != 0
                  || (uVar2 = local_40,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_40,PTR_s_isEqualToString__0269ccc8,
                                &cf_clicfg_voice_record_button_border_disabled), (uVar2 & 1) != 0)))
                 ) {
                puVar3 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                FUN_0088fb40();
                (*(code *)PTR__objc_release_02578630)(puVar3);
                if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
                  local_21 = 0;
                  goto LAB_0089848c;
                }
              }
              uVar2 = local_40;
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((uVar2 & 1) == 0) ||
                 (uVar2 = local_40,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_40,PTR_s_isEqualToString__0269ccc8,
                            &cf_clicfg_moments_live_photo_can_save_live_photos), (uVar2 & 1) == 0))
              {
                uVar2 = local_40;
                puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
                if (((uVar2 & 1) == 0) ||
                   ((uVar2 = local_40,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_40,PTR_s_isEqualToString__0269ccc8,
                               &cf_clicfg_c2c_sight_auto_macro_switch_function_enabled),
                    (uVar2 & 1) == 0 &&
                    (uVar2 = local_40,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_40,PTR_s_isEqualToString__0269ccc8,
                               &cf_clicfg_c2c_sight_zoom_factor_control_function_enabled),
                    (uVar2 & 1) == 0)))) {
                  uVar2 = local_40;
                  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
                  if (((uVar2 & 1) == 0) ||
                     ((uVar2 = local_40,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_40,PTR_s_isEqualToString__0269ccc8,
                                 &cf_clicfg_quick_edit_contact_remark_switch), (uVar2 & 1) == 0 &&
                      (uVar2 = local_40,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_40,PTR_s_isEqualToString__0269ccc8,
                                 &cf_clicfg_tolerate_remark_input_optimizate_open_switch),
                      (uVar2 & 1) == 0)))) {
                    uVar2 = local_40;
                    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
                    if (((uVar2 & 1) == 0) ||
                       (uVar2 = local_40,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_40,PTR_s_isEqualToString__0269ccc8,
                                  &cf_clicfg_chat_album_pagesheet_mode), (uVar2 & 1) == 0)) {
                      uVar2 = local_40;
                      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
                      if (((uVar2 & 1) == 0) ||
                         (uVar2 = local_40,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_40,PTR_s_isEqualToString__0269ccc8,
                                    &cf_clicfg_file_online_preview_url_file_enabled),
                         (uVar2 & 1) == 0)) {
                        uVar5 = local_30;
                        (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
                        local_21 = (byte)uVar5 & 1;
                      }
                      else {
                        puVar3 = PTR_WCRefineConfig_026cdf58;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar4 = puVar3;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        FUN_0088fb40();
                        (*(code *)PTR__objc_release_02578630)(puVar3);
                        if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
                          local_21 = 1;
                        }
                        else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
                          local_21 = 0;
                        }
                        else {
                          uVar5 = local_30;
                          (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
                          local_21 = (byte)uVar5 & 1;
                        }
                      }
                    }
                    else {
                      FUN_008a2b74();
                      FUN_0088fb40();
                      if (uVar2 == 1) {
                        local_21 = 1;
                      }
                      else if (uVar2 == 2) {
                        local_21 = 0;
                      }
                      else {
                        uVar5 = local_30;
                        (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
                        local_21 = (byte)uVar5 & 1;
                      }
                    }
                  }
                  else {
                    puVar3 = PTR_WCRefineConfig_026cdf58;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    FUN_0088fb40();
                    (*(code *)PTR__objc_release_02578630)(puVar3);
                    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
                      local_21 = 1;
                    }
                    else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
                      local_21 = 0;
                    }
                    else {
                      uVar5 = local_30;
                      (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
                      local_21 = (byte)uVar5 & 1;
                    }
                  }
                }
                else {
                  puVar3 = PTR_WCRefineConfig_026cdf58;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  FUN_0088fb40();
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
                    local_21 = 1;
                  }
                  else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
                    local_21 = 0;
                  }
                  else {
                    uVar5 = local_30;
                    (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
                    local_21 = (byte)uVar5 & 1;
                  }
                }
              }
              else {
                local_21 = 1;
              }
            }
            else {
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              FUN_0088fb40();
              (*(code *)PTR__objc_release_02578630)(puVar3);
              if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
                local_21 = 1;
              }
              else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
                local_21 = 0;
              }
              else {
                uVar5 = local_30;
                (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
                local_21 = (byte)uVar5 & 1;
              }
            }
          }
          else {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            FUN_0088fb40();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
              local_21 = 1;
            }
            else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
              local_21 = 0;
            }
            else {
              uVar5 = local_30;
              (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
              local_21 = (byte)uVar5 & 1;
            }
          }
        }
        else {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          FUN_0088fb40();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
            local_21 = 1;
          }
          else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
            local_21 = 0;
          }
          else {
            uVar5 = local_30;
            (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
            local_21 = (byte)uVar5 & 1;
          }
        }
      }
      else {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        FUN_0088fb40();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          local_21 = 1;
        }
        else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
          local_21 = 0;
        }
        else {
          uVar5 = local_30;
          (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
          local_21 = (byte)uVar5 & 1;
        }
      }
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      FUN_0088fb40();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        local_21 = 1;
      }
      else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        local_21 = 0;
      }
      else {
        uVar5 = local_30;
        (*DAT_028cdbe0)(local_30,local_38,local_40,param_4 & 1);
        local_21 = (byte)uVar5 & 1;
      }
    }
  }
  else {
    local_21 = 0;
  }
LAB_0089848c:
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

