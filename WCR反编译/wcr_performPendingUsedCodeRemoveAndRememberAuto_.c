// wcr_performPendingUsedCodeRemoveAndRememberAuto: @ 017359c4

/* Function Stack Size: 0x14 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_performPendingUsedCodeRemoveAndRememberAuto_
               (ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1a8;
  cfstringStruct *local_178;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined1 local_fd;
  undefined4 local_fc;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  ID local_e8;
  byte local_d9;
  SEL local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d9 = (byte)param_3;
  local_d8 = param_2;
  local_d0 = (cfstringStruct *)param_1;
  _objc_getAssociatedObject(param_1,&DAT_028e3f88);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_d0;
  local_e8 = param_1;
  _objc_getAssociatedObject(local_d0,&DAT_028e3f89);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_d0;
  local_f0 = pcVar1;
  _objc_getAssociatedObject(local_d0,&DAT_028e3f8a);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_wcr_clearUsedCodeRemovePrompt_026b3d48);
  if ((local_d9 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  IVar4 = local_e8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  pcVar1 = local_f0;
  if ((IVar4 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)pcVar1 & 1) != 0) &&
       (pcVar2 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
       pcVar1 = local_d0, pcVar2 != (cfstringStruct *)0x0)) {
      IVar4 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_unsignedIntegerValue_026cabb8);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_wcr_removeCodeFromWarehouseForTh_026b3c48,IVar4,local_f0);
      local_fd = SUB81(pcVar1,0);
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N__N_g_b0RQQbcx);
        local_fc = 1;
      }
      else {
        pcVar1 = local_d0;
        _objc_getAssociatedObject(local_d0,&DAT_028e3f83);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_108 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((((ulong)pcVar1 & 1) == 0) ||
           (pcVar1 = local_108,
           (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0),
           pcVar1 == (cfstringStruct *)0x0)) {
          _objc_storeStrong(&local_108,&cf_QQbcx__O_u);
        }
        pcVar1 = local_d0;
        _objc_getAssociatedObject(local_d0,&DAT_028e3f81);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_110 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar1 & 1) == 0) {
          local_178 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_wcr_currentRedeemProvider_026b3b88);
        }
        else {
          local_178 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_integerValue_026ca750);
          FUN_01728a88();
        }
        local_118 = local_178;
        FUN_01728acc();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_d0;
        pcVar2 = local_118;
        local_120 = local_178;
        FUN_01728b80(local_118);
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_wcr_effectiveTargetAccountUsesWe_026b3b90,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_d0;
        local_c8 = &cf_time;
        local_128 = pcVar1;
        FUN_01728bdc();
        _objc_retainAutoreleasedReturnValue();
        local_c0 = &cf_success;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_78 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = &cf_theme;
        if (local_f8 == (cfstringStruct *)0x0) {
          local_1a8 = &::cf___;
        }
        else {
          local_1a8 = local_f8;
        }
        local_68 = local_1a8;
        local_b0 = &cf_code;
        local_60 = local_f0;
        local_a8 = &cf_targetWxid;
        pcVar5 = local_d0;
        local_70 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_targetWxid_026b3bd0);
        _objc_retainAutoreleasedReturnValue();
        local_1b8 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_1b8 = &::cf___;
        }
        local_58 = local_1b8;
        local_a0 = &cf_targetNickname;
        pcVar6 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_targetNickname_026b3bc8);
        _objc_retainAutoreleasedReturnValue();
        local_1c8 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_1c8 = &::cf___;
        }
        local_50 = local_1c8;
        local_98 = &cf_targetAccount;
        if (local_128 == (cfstringStruct *)0x0) {
          local_1d8 = &::cf___;
        }
        else {
          local_1d8 = local_128;
        }
        local_48 = local_1d8;
        local_90 = &cf_provider;
        if (local_120 == (cfstringStruct *)0x0) {
          local_1e8 = &::cf___;
        }
        else {
          local_1e8 = local_120;
        }
        local_40 = local_1e8;
        local_88 = &cf_message;
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_80 = &cf_stockRemoved;
        puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_38 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_c8,10);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_wcr_appendAirDropLog__026b3be0);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = &::cf__;
        if ((local_d9 & 1) == 0) {
          pcVar1 = &cf__NN_RdQQbcx;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
        _objc_storeStrong(&local_128);
        _objc_storeStrong(&local_120,0);
        _objc_storeStrong(&local_110,0);
        _objc_storeStrong(&local_108,0);
        local_fc = 0;
      }
      goto LAB_017361d8;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elRdQQbcx);
  local_fc = 1;
LAB_017361d8:
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

