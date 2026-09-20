// confirmTextValue @ 01f0d6cc

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::confirmTextValue(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_240;
  cfstringStruct *local_230;
  cfstringStruct *local_220;
  undefined *local_210;
  undefined *local_1d0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_120;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  SEL local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = param_2;
  local_a0 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    pcVar1 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_120 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_120 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_120;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_pendingKey_026aebf0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar1 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_pendingKey_026aebf0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar1 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_pendingKey_026aebf0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar1 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_htmlTextView_026c7f70);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_1a8 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = local_1a8;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar1 = local_b8;
          FUN_01ef17c0(local_b8,&cf__g_TTNx,&cf_WCR);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_WCRefineConfig_026cdf58;
          local_c8 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_d9 = 0;
          local_1d0 = puVar5;
          if (puVar5 == (undefined *)0x0) {
            local_1d0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_d8 = local_1d0;
          }
          local_d9 = puVar5 == (undefined *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = local_1d0;
          if ((local_d9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_d8);
          }
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)();
          FUN_01f01544();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
          local_e8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          _arc4random_uniform(10000);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_stringWithFormat__0269cca8,&cf_WCR_HTML__lld__u);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar3 = local_e8;
          puVar4 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_210 = puVar5;
          if (puVar5 == (undefined *)0x0) {
            local_210 = *(undefined **)PTR____NSDictionary0___02578288;
          }
          FUN_01f016dc(puVar3,local_210);
          _objc_retainAutoreleasedReturnValue();
          local_f8 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar3 = local_e8;
          FUN_01f0e378(local_e8,local_f0);
          if (((ulong)puVar3 & 1) != 0) {
            puVar4 = local_f8;
            FUN_01f0e634(local_f8,local_e8,local_f0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_f8;
            local_f8 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          local_98 = &cf_id;
          local_60 = local_f0;
          local_90 = &cf_name;
          pcVar1 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          local_220 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_220 = &cf__g_TTNx;
          }
          local_58 = local_220;
          local_88 = &cf_author;
          pcVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_230 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_230 = &cf_WCR;
          }
          local_50 = local_230;
          local_80 = &cf_html;
          local_48 = local_c0;
          local_78 = &cf_storage;
          if (local_f8 == (undefined *)0x0) {
            local_240 = *(undefined **)PTR____NSDictionary0___02578288;
          }
          else {
            local_240 = local_f8;
          }
          local_40 = local_240;
          local_70 = &cf_createdAt;
          puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          local_68 = &cf_pinned;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_38 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
          _objc_retainAutoreleasedReturnValue();
          local_100 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_insertObject_atIndex__0269eac0,local_100,0);
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          FUN_01eec144(local_f0,local_c0,1);
          puVar3 = local_f8;
          puVar4 = local_f0;
          FUN_01f0ea0c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_writeToFile_atomically__0269f928,puVar4,1);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _WCRefineToDoPersistHTMLLayoutForWork(local_e8);
          _WCRefineToDoCopyHTMLLayoutJSON(local_e8,local_f0);
          FUN_01ef4aac(local_f0);
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OX_0RNxN_);
          _objc_storeStrong(&local_100);
          _objc_storeStrong(&local_f8,0);
          _objc_storeStrong(&local_f0,0);
          _objc_storeStrong(&local_e8,0);
          _objc_storeStrong(&local_d0,0);
          _objc_storeStrong(&local_c8,0);
          _objc_storeStrong(&local_c0,0);
        }
      }
      else {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    else {
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
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addURLToHistory__026c7f90,local_b8);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setCurrentAlert__026aa348);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setPendingKey__026aebd8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

