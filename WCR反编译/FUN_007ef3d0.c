// FUN_007ef3d0 @ 007ef3d0

void FUN_007ef3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  undefined *local_60;
  undefined *local_58 [3];
  undefined *local_40;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_026ce968;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UNUserNotificationCenter_026ce968,
             PTR_s_currentNotificationCenter_026a8548);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UNMutableNotificationContent_026ce810;
  local_40 = puVar1;
  _objc_alloc_init();
  if (local_28 == (cfstringStruct *)0x0) {
    local_98 = &cf_QQbcbR;
  }
  else {
    local_98 = local_28;
  }
  local_58[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitle__0269cef0,local_98);
  if (local_30 == (cfstringStruct *)0x0) {
    local_a8 = &cf_0QQbcx0_bR_N0w;
  }
  else {
    local_a8 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setBody__026a6680,local_a8);
  puVar1 = PTR__OBJC_CLASS___UNNotificationSound_026ce970;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UNNotificationSound_026ce970,PTR_s_defaultSound_026a8560);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setSound__026a6688);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_38 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setUserInfo__026a17c8,local_38);
  }
  puVar2 = PTR__OBJC_CLASS___UNNotificationRequest_026ce818;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_stringWithFormat__0269cca8,&cf_redeem_success__ld);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_requestWithIdentifier_content_tr_026a6698,puVar1,local_58[0],0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_addNotificationRequest_withCompl_026a6650,local_60,
             &PTR___NSConcreteGlobalBlock_025802c0);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

