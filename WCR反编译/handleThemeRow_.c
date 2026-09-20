// handleThemeRow: @ 01732bcc

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropThemePickViewController::handleThemeRow_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *local_228;
  int local_214;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1b8;
  cfstringStruct *local_188;
  cfstringStruct *local_168;
  cfstringStruct *local_150;
  cfstringStruct *local_130;
  char *local_118;
  byte local_109;
  undefined *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  byte local_e9;
  undefined *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  undefined1 local_b9;
  char *local_b8;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_38;
  _objc_getAssociatedObject(local_38,&DAT_028e3f84);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar2 & 1) == 0) {
    local_44 = 1;
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_unsignedIntegerValue_026cabb8);
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_themeBoxAirDropThemeItems_026acfb8);
    _objc_retainAutoreleasedReturnValue();
    local_130 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_130 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_130;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_50;
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if (pcVar2 < pcVar4) {
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_79 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_150 = &::cf___;
      }
      else {
        local_150 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_150;
      }
      local_79 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_150;
      if ((local_79 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__N_);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_70;
        local_70 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_codes);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_91 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_168 = &::cf___;
      }
      else {
        local_168 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_codes);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_168;
      }
      local_91 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_168;
      if ((local_91 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_88;
      FUN_0173396c();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__NfeS_uaS_);
        local_44 = 1;
      }
      else {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_188 = local_28;
        local_a1 = bVar1;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_currentStockRepository_026b3bf0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_currentRedeemProvider_026b3b88);
        }
        local_b0 = local_188;
        if (((local_a1 & 1) == 0) &&
           (((local_188 == (cfstringStruct *)0x1 || (local_188 == (cfstringStruct *)0x2)) &&
            (pcVar2 = local_28,
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_isTargetFriend_026b3c18),
            puVar6 = PTR_WCRefineHelper_026ce000, puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8,
            ((ulong)pcVar2 & 1) == 0)))) {
          pcVar2 = local_b0;
          FUN_01728acc();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_showModernToast__0269ce78);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          local_44 = 1;
        }
        else {
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_targetWxid_026b3bd0);
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_1b8 = &::cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setThemeBoxAirDropPendingTargetW_026b3ce0,local_1b8);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_targetNickname_026b3bc8);
          _objc_retainAutoreleasedReturnValue();
          local_1c8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_1c8 = &::cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setThemeBoxAirDropPendingTargetN_026b3ce8,local_1c8);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setThemeBoxAirDropPendingThemeIn_026b3cf0,local_50);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_saveConfig_0269e5d0);
          pcVar2 = local_28;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                     local_50);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(pcVar2,&DAT_028e3f85);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_setAssociatedObject(local_28,&DAT_028e3f80,local_a0);
          _objc_setAssociatedObject(local_28,&DAT_028e3f86,local_70,3);
          pcVar2 = local_28;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_b0)
          ;
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(pcVar2,&DAT_028e3f81,puVar3,1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (((ulong)puVar6 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_wcr_startAirDropAfterConfirm_026b3d00);
            local_44 = 1;
          }
          else {
            pcVar7 = "WCUIAlertView";
            _objc_getClass();
            local_b8 = pcVar7;
            if (pcVar7 == (char *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_wcr_startAirDropAfterConfirm_026b3d00);
              local_44 = 1;
            }
            else {
              if ((local_a1 & 1) == 0) {
                pcVar2 = local_b0;
                FUN_01728b80();
                local_214 = (int)pcVar2;
              }
              else {
                pcVar2 = local_b0;
                FUN_0172fb14();
                local_214 = (int)pcVar2;
              }
              local_b9 = local_214 != 0;
              pcVar2 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_wcr_targetTitleUsesWechat__026b3cd0,local_b9);
              _objc_retainAutoreleasedReturnValue();
              local_228 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_d9 = 0;
              local_e9 = 0;
              local_f9 = 0;
              local_109 = 0;
              local_c8 = pcVar2;
              if ((local_a1 & 1) == 0) {
                pcVar2 = local_b0;
                FUN_01728acc();
                _objc_retainAutoreleasedReturnValue();
                local_f9 = 1;
                local_f8 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_228,PTR_s_stringWithFormat__0269cca8,&cf__NT_);
                _objc_retainAutoreleasedReturnValue();
                local_109 = 1;
                local_108 = local_228;
              }
              else {
                pcVar2 = local_b0;
                FUN_01729b1c();
                _objc_retainAutoreleasedReturnValue();
                local_d9 = 1;
                local_d8 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_228,PTR_s_stringWithFormat__0269cca8,&cf__NT_);
                _objc_retainAutoreleasedReturnValue();
                local_e9 = 1;
                local_e8 = local_228;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_d0 = local_228;
              if ((local_109 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_108);
              }
              if ((local_f9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_f8);
              }
              if ((local_e9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_e8);
              }
              if ((local_d9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_d8);
              }
              pcVar7 = local_b8;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)();
              local_118 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
                         PTR_s_wcr_cancelAirDropConfirm__026b3d08);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_118,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx,local_28,
                         PTR_s_wcr_confirmAirDropConfirm__026b3d10);
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_show_0269d280);
              _objc_storeStrong(&local_118);
              _objc_storeStrong(&local_d0,0);
              _objc_storeStrong(&local_c8,0);
              local_44 = 0;
            }
          }
        }
      }
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
    else {
      local_44 = 1;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

