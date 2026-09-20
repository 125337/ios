// sendTerminateLocalNotificationWithTitle:body: @ 00eb9da0

/* Function Stack Size: 0x20 bytes */

void WCRefineBackgroundKeepAlive::sendTerminateLocalNotificationWithTitle_body_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = (cfstringStruct *)0x0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_68,param_4);
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_026ce968;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UNUserNotificationCenter_026ce968,
             PTR_s_currentNotificationCenter_026a8548);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UNMutableNotificationContent_026ce810;
  local_70 = puVar1;
  _objc_alloc_init();
  pcVar3 = local_60;
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_98 = &cf_TSO_msS_1YHe;
  }
  else {
    local_98 = local_60;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTitle__0269cef0,local_98);
  if (local_68 == (cfstringStruct *)0x0) {
    local_a8 = &::cf___;
  }
  else {
    local_a8 = local_68;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBody__026a6680,local_a8);
  puVar1 = PTR__OBJC_CLASS___UNNotificationSound_026ce970;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UNNotificationSound_026ce970,PTR_s_defaultSound_026a8560);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setSound__026a6688);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_38 = &cf_wcr;
  local_30 = &cf_background_drop_ended;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setUserInfo__026a17c8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_70;
  local_40 = &cf_wcr_background_drop_ended;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeDeliveredNotificationsWith_026ab438);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_70;
  local_48 = &cf_wcr_background_drop_ended;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removePendingNotificationRequest_026ab440);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___UNTimeIntervalNotificationTrigger_026ceb20;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,PTR__OBJC_CLASS___UNTimeIntervalNotificationTrigger_026ceb20,
             PTR_s_triggerWithTimeInterval_repeats__026ab448,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UNNotificationRequest_026ce818;
  local_80 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UNNotificationRequest_026ce818,
             PTR_s_requestWithIdentifier_content_tr_026a6698,&cf_wcr_background_drop_ended,local_78,
             puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_addNotificationRequest_withCompl_026a6650,puVar2);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

