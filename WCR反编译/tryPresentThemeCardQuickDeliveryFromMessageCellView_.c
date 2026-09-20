// tryPresentThemeCardQuickDeliveryFromMessageCellView: @ 00fbd634

/* Function Stack Size: 0x18 bytes */

bool WCRefineHelper::tryPresentThemeCardQuickDeliveryFromMessageCellView_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  undefined1 local_d9;
  cfstringStruct *local_d0 [3];
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90 [5];
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  SEL local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_triggerHapticFeedback_0269dc78);
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showModernToast__0269ce78,&::cf_HQ);
      local_21 = 1;
      local_44 = 1;
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showModernToast__0269ce78,&cf_HQ_W);
        local_21 = 1;
        local_44 = 1;
      }
      else {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_hasThemeBoxAutoRedeemPermission_026a6e40);
        if (((ulong)pcVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_showModernToast__0269ce78,&cf_fe_NvP_zzbCgP);
          local_21 = 1;
          local_44 = 1;
        }
        else {
          puVar1 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_50 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
          if (puVar1 == (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_showModernToast__0269ce78,&cf_HQ_WzzbumR_N_X_);
            local_21 = 1;
            local_44 = 1;
          }
          else {
            pcVar3 = local_40;
            FUN_00fb7464();
            _objc_retainAutoreleasedReturnValue();
            local_58 = pcVar3;
            (*(code *)PTR__objc_retain_02578638)();
            local_60 = &::cf___;
            local_68 = (cfstringStruct *)0x0;
            if (local_58 != (cfstringStruct *)0x0) {
              pcVar3 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_68 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              pcVar4 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_valueForKey__0269d128,&cf_m_nsContent);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar4;
              FUN_00fbe464();
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_60;
              local_60 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              (*(code *)PTR__objc_release_02578630)(pcVar4);
            }
            if (local_68 == (cfstringStruct *)0x1) {
              pcVar3 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_firstThemeCardDeliveryAccountTok_026acff0,local_60);
              _objc_retainAutoreleasedReturnValue();
              local_90[0] = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
              if (pcVar3 == (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_showModernToast__0269ce78,&cf__g_R0R);
                local_21 = 1;
                local_44 = 1;
              }
              else {
                pcVar4 = local_90[0];
                FUN_00fbe588();
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_90[0];
                local_98 = pcVar4;
                (*(code *)PTR__objc_retain_02578638)();
                local_a0 = pcVar3;
                (*(code *)PTR__objc_retain_02578638)();
                local_a8 = &::cf___;
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = &::cf___;
                if (local_98 != (cfstringStruct *)0x0) {
                  pcVar3 = local_98;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar4 = pcVar3;
                  FUN_00fbe464();
                  _objc_retainAutoreleasedReturnValue();
                  local_b8 = pcVar4;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                  pcVar3 = local_b8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
                  if (pcVar3 != (cfstringStruct *)0x0) {
                    _objc_storeStrong(pcVar3,&local_a0,local_b8);
                  }
                  _objc_storeStrong(&local_b8,0);
                  pcVar4 = local_98;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_valueForKey__0269d128,&cf_m_nsAliasName);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar5 = pcVar4;
                  FUN_00fbe464();
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_a8;
                  local_a8 = pcVar5;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                  (*(code *)PTR__objc_release_02578630)(pcVar4);
                  pcVar3 = local_98;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_respondsToSelector__026ca818,
                             PTR_s_getContactDisplayName_0269d160);
                  if (((ulong)pcVar3 & 1) != 0) {
                    pcVar4 = local_98;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_98,PTR_s_getContactDisplayName_0269d160);
                    _objc_retainAutoreleasedReturnValue();
                    local_d0[0] = pcVar4;
                    FUN_00fbe464();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar3 = local_b0;
                    local_b0 = pcVar4;
                    (*(code *)PTR__objc_release_02578630)(pcVar3);
                    _objc_storeStrong(local_d0,0);
                  }
                  pcVar3 = local_b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
                  if (pcVar3 == (cfstringStruct *)0x0) {
                    pcVar4 = local_98;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_98,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar5 = pcVar4;
                    FUN_00fbe464();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar3 = local_b0;
                    local_b0 = pcVar5;
                    (*(code *)PTR__objc_release_02578630)(pcVar3);
                    (*(code *)PTR__objc_release_02578630)(pcVar4);
                  }
                }
                pcVar3 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
                if (pcVar3 == (cfstringStruct *)0x0) {
                  pcVar4 = local_a0;
                  FUN_00fb7e54();
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_b0;
                  local_b0 = pcVar4;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
                pcVar3 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
                if (pcVar3 == (cfstringStruct *)0x0) {
                  _objc_storeStrong(&local_b0,local_90[0]);
                }
                pcVar3 = local_90[0];
                (*(code *)PTR__objc_msgSend_02578628)(local_90[0],PTR_s_lowercaseString_0269d9c0);
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = pcVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                local_d9 = SUB81(pcVar4,0);
                if (((ulong)pcVar4 & 1) == 0) {
                  puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,
                             PTR_s_stringWithFormat__0269cca8,&cf__R0R_S_);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_a0;
                  local_e8 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
                  if ((pcVar3 == (cfstringStruct *)0x0) ||
                     (pcVar3 = local_a0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_a0,PTR_s_isEqualToString__0269ccc8,local_90[0]),
                     ((ulong)pcVar3 & 1) != 0)) {
                    puVar1 = local_e8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar1,PTR_s_appendFormat__0269d148,&cf___O_NQQbcvh_O_u_);
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_appendFormat__0269d148,&cf___);
                  }
                  pcVar3 = local_a8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
                  if (pcVar3 != (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_appendFormat__0269d148,&cf__OS_);
                  }
                  pcVar3 = local_b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
                  if (pcVar3 != (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_appendFormat__0269d148,&cf_5fy_);
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_appendString__0269ccb0,&cf__SN_f);
                  pcVar5 = local_30;
                  pcVar4 = local_a0;
                  puVar1 = local_e8;
                  local_118 = PTR___NSConcreteStackBlock_02578660;
                  local_110 = 0xc2000000;
                  local_10c = 0;
                  local_108 = FUN_00fbf2b8;
                  local_100 = &DAT_02583a90;
                  (*(code *)PTR__objc_retain_02578638)();
                  pcVar3 = local_b0;
                  local_f8 = pcVar4;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_f0 = pcVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar5,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_nx,puVar1,
                             &cf_Sm,&PTR___NSConcreteGlobalBlock_02583a70,&cf___QQbc,&local_118);
                  _objc_unsafeClaimAutoreleasedReturnValue();
                  local_21 = 1;
                  local_44 = 1;
                  _objc_storeStrong(&local_f0);
                  _objc_storeStrong(&local_f8,0);
                  _objc_storeStrong(&local_e8,0);
                }
                else {
                  FUN_00fbf314(local_a0,local_b0);
                  local_21 = 1;
                  local_44 = 1;
                }
                _objc_storeStrong(&local_b0);
                _objc_storeStrong(&local_a8,0);
                _objc_storeStrong(&local_a0,0);
                _objc_storeStrong(&local_98,0);
              }
              _objc_storeStrong(local_90,0);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_showModernToast__0269ce78,&cf_N_ece_gmo_);
              local_21 = 1;
              local_44 = 1;
            }
            _objc_storeStrong(&local_60);
            _objc_storeStrong(&local_58,0);
          }
          _objc_storeStrong(&local_50,0);
        }
      }
    }
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

