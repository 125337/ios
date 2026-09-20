// FUN_006cd8f0 @ 006cd8f0

void FUN_006cd8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_1b0;
  cfstringStruct *local_148;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  int local_94;
  cfstringStruct *local_90 [3];
  undefined8 local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = (cfstringStruct *)0x0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_4);
  pcVar2 = local_70;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  pcVar3 = local_70;
  if (((ulong)pcVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_90[0] = pcVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar2 = local_90[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90[0],PTR_s_hasPrefix__0269d320,&cf_WCRefineRedEnvelopColor___);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar3 = local_90[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90[0],PTR_s_hasPrefix__0269d320,&cf_WCRefineRedEnvelopSession___);
      pcVar2 = local_90[0];
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90[0],PTR_s_hasPrefix__0269d320,&cf_WCRefineAtMention___);
        if (((ulong)pcVar2 & 1) == 0) {
          local_94 = 0;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_at_mentionlink_tapraw___);
          _objc_retainAutoreleasedReturnValue();
          _WCRefineCrashReporterBreadcrumb();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          pcVar3 = local_90[0];
          pcVar2 = &cf_WCRefineAtMention___;
          (*(code *)PTR__objc_msgSend_02578628)(&cf_WCRefineAtMention___,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_substringFromIndex__0269d120,pcVar2);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = pcVar3;
          FUN_006db2cc();
          _objc_retainAutoreleasedReturnValue();
          local_c0 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_1b0 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = local_1b0;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          if (pcVar2 == (cfstringStruct *)0x0) {
            _WCRefineCrashReporterBreadcrumb(0,&cf_at_mentionlink_missing_session);
          }
          else {
            pcVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            pcVar3 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_stringWithFormat__0269cca8,
                       &cf_at_mentionlink_routesession___local__lldsvr__lld);
            _objc_retainAutoreleasedReturnValue();
            _WCRefineCrashReporterBreadcrumb();
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            FUN_006db818(local_60,local_c8);
            puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_58 = &cf_session;
            local_40 = local_c8;
            local_50 = &cf_localID;
            pcVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKeyedSubscript__0269d098);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithLongLong__0269d808,pcVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_48 = &cf_mesSvrID;
            pcVar3 = local_c0;
            local_38 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKeyedSubscript__0269d098);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithLongLong__0269d808,pcVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_30 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
            _objc_retainAutoreleasedReturnValue();
            _WCRefineLocateMessageInChatContext();
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          local_94 = 1;
          _objc_storeStrong(&local_c8);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_b8,0);
        }
      }
      else {
        pcVar3 = &cf_WCRefineRedEnvelopSession___;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_WCRefineRedEnvelopSession___,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = pcVar2;
        FUN_006db2cc();
        _objc_retainAutoreleasedReturnValue();
        local_a8 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
        _objc_retainAutoreleasedReturnValue();
        local_148 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_148 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_148;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          FUN_006db818(pcVar2,local_60,local_b0);
        }
        local_94 = 1;
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_a8,0);
        _objc_storeStrong(&local_a0,0);
      }
    }
    else {
      local_94 = 1;
    }
    _objc_storeStrong(local_90,0);
    if (local_94 != 0) goto LAB_006ce410;
  }
  (*DAT_028cc250)(local_60,local_68,local_70,local_78);
  local_94 = 0;
LAB_006ce410:
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

