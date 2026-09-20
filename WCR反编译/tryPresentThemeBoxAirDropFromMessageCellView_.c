// tryPresentThemeBoxAirDropFromMessageCellView: @ 00fb6748

/* Function Stack Size: 0x18 bytes */

bool WCRefineHelper::tryPresentThemeBoxAirDropFromMessageCellView_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong local_258;
  ulong local_250;
  ulong local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  undefined *local_168;
  ulong local_160;
  ID local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  ulong local_140;
  undefined *local_138;
  cfstringStruct *local_130;
  ulong local_128;
  cfstringStruct *local_120 [4];
  ulong local_100;
  ulong local_f8;
  cfstringStruct *local_f0;
  ulong local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  uint local_cc;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  if (local_c8 == (cfstringStruct *)0x0) {
    local_a9 = 0;
    local_cc = 1;
    goto LAB_00fb7410;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_showModernToast__0269ce78,&cf_HQ_W);
    local_a9 = 1;
    local_cc = 1;
    goto LAB_00fb7410;
  }
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hasThemeBoxAutoRedeemPermission_026a6e40);
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_showModernToast__0269ce78,&cf_fe_NvP_zzbCgP);
    local_a9 = 1;
    local_cc = 1;
    goto LAB_00fb7410;
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  pcVar4 = local_c8;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_showModernToast__0269ce78,&cf_HQ_WzzbumR_N_X_);
    local_a9 = 1;
    local_cc = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = pcVar4;
    local_e8 = 0;
    pcVar4 = &cf_BaseMsgContentViewController;
    _NSClassFromString();
    local_f0 = pcVar4;
    while (local_e0 != (cfstringStruct *)0x0) {
      if ((local_f0 != (cfstringStruct *)0x0) &&
         (pcVar4 = local_e0,
         (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isKindOfClass__0269cd68,local_f0),
         ((ulong)pcVar4 & 1) != 0)) {
        _objc_storeStrong(&local_e8,local_e0);
        break;
      }
      pcVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_e0;
      local_e0 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (local_e8 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_showModernToast__0269ce78,&cf_el_MOO);
      local_a9 = 1;
      local_cc = 1;
    }
    else {
      local_f8 = 0;
      uVar9 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
      if ((uVar9 & 1) != 0) {
        uVar6 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_GetContact_0269d2c0);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = local_f8;
        local_f8 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar9);
      }
      if ((local_f8 == 0) &&
         (uVar9 = local_e8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630),
         (uVar9 & 1) != 0)) {
        uVar6 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_getChatContact_0269d630);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = local_f8;
        local_f8 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar9);
      }
      local_100 = 0;
      uVar9 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
      if ((uVar9 & 1) != 0) {
        uVar6 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = local_100;
        local_100 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar9);
      }
      uVar9 = local_100;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((uVar9 & 1) == 0) ||
         (uVar9 = local_100, (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0),
         uVar9 == 0)) {
        uVar6 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = local_100;
        local_100 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar9);
      }
      uVar9 = local_100;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((uVar9 & 1) == 0) ||
         (uVar9 = local_100, (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0),
         uVar9 == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_showModernToast__0269ce78,&cf_elSO_S);
        local_a9 = 1;
        local_cc = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_120[0] = &::cf___;
        uVar9 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160)
        ;
        if ((uVar9 & 1) != 0) {
          uVar9 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_getContactDisplayName_0269d160);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_128 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar9 & 1) != 0) {
            _objc_storeStrong(local_120,local_128);
          }
          _objc_storeStrong(&local_128,0);
        }
        pcVar4 = local_c8;
        FUN_00fb7464();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = local_100;
        puVar1 = PTR_s_rangeOfString__0269d838;
        local_130 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_rangeOfString__0269d838,&cf__chatroom)
        ;
        local_140 = uVar9;
        local_138 = puVar1;
        if (uVar9 + 0x8000000000000001 == 0) {
LAB_00fb6f40:
          pcVar4 = local_120[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_120[0],PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            _objc_storeStrong(local_120,local_100);
          }
          puVar1 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          if (((ulong)puVar2 & 1) != 0) {
            pcVar4 = local_130;
            FUN_00fb8278(local_130,local_100);
            _objc_retainAutoreleasedReturnValue();
            IVar3 = local_b8;
            local_150 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_themeCardDeliveryAccountTokensIn_026acfc8,pcVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_100;
            local_158 = IVar3;
            FUN_00fb84b8();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            local_160 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_100;
            local_168 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_160;
            local_170 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_178 = uVar6;
            _memset(auStack_1c0,0,0x40);
            IVar3 = local_158;
            (*(code *)PTR__objc_retain_02578638)();
            local_250 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                       0x10);
            if (local_250 != 0) {
              lVar8 = *local_1b0;
              local_258 = 0;
              do {
                do {
                  if (*local_1b0 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_1b0 - lVar8,IVar3);
                  }
                  uVar9 = *(ulong *)(local_1b8 + local_258 * 8);
                  local_180 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_lowercaseString_0269d9c0);
                  _objc_retainAutoreleasedReturnValue();
                  local_1c8 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar9,PTR_s_isEqualToString__0269ccc8,local_170);
                  if ((uVar9 & 1) == 0) {
                    uVar9 = local_178;
                    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
                    if ((uVar9 == 0) ||
                       (uVar9 = local_1c8,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_1c8,PTR_s_isEqualToString__0269ccc8,local_178),
                       (uVar9 & 1) == 0)) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_168,PTR_s_addObject__0269d180,local_180);
                      local_cc = 0;
                    }
                    else {
                      local_cc = 6;
                    }
                  }
                  else {
                    local_cc = 6;
                  }
                  _objc_storeStrong(&local_1c8,0);
                  local_258 = local_258 + 1;
                } while (local_258 < local_250);
                local_250 = IVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,
                           auStack_a8,0x10);
                local_258 = 0;
              } while (local_250 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(IVar3);
            puVar1 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
            if (puVar1 != (undefined *)0x0) {
              FUN_00fb8800(puVar1,local_100,local_120[0],local_160,local_168);
              local_a9 = 1;
            }
            local_cc = (uint)(puVar1 != (undefined *)0x0);
            _objc_storeStrong(&local_178);
            _objc_storeStrong(&local_170,0);
            _objc_storeStrong(&local_168,0);
            _objc_storeStrong(&local_160,0);
            _objc_storeStrong(&local_158,0);
            _objc_storeStrong(&local_150,0);
            if (local_cc != 0) goto LAB_00fb73a0;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_ThemeBoxAirDropThemePickViewController_026cec00,
                     PTR_s_presentPickerWithTargetWxid_targ_026acfd0,local_100,local_120[0]);
          local_a9 = 1;
          local_cc = 1;
        }
        else {
          pcVar4 = local_130;
          FUN_00fb78a0(uVar9 + 0x8000000000000001);
          _objc_retainAutoreleasedReturnValue();
          local_148 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
          if (pcVar4 != (cfstringStruct *)0x0) {
            _objc_storeStrong(&local_100,local_148);
            pcVar7 = local_148;
            FUN_00fb7e54();
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_120[0];
            local_120[0] = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_showModernToast__0269ce78,&cf_el_R_mo_S);
            local_a9 = 1;
          }
          local_cc = (uint)(pcVar4 == (cfstringStruct *)0x0);
          _objc_storeStrong(&local_148,0);
          if (local_cc == 0) goto LAB_00fb6f40;
        }
LAB_00fb73a0:
        _objc_storeStrong(&local_130);
        _objc_storeStrong(local_120,0);
      }
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d8,0);
LAB_00fb7410:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

