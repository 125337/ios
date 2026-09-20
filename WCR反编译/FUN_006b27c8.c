// FUN_006b27c8 @ 006b27c8

void FUN_006b27c8(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  cfstringStruct *local_a8;
  long local_80;
  cfstringStruct *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  pcVar2 = &cf_MMLocalNotificationUtil;
  _NSClassFromString();
  local_38 = PTR_s_showLocalNotificationWithIdentif_026a0c50;
  local_30 = pcVar2;
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (_class_getClassMethod(pcVar2,PTR_s_showLocalNotificationWithIdentif_026a0c50),
     pcVar2 == (cfstringStruct *)0x0)) {
    local_3c = 1;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_notificationDisguiseResolvedTitl_026a6808);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_a8 = &cf__OR;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_a8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_notificationDisguiseBody_026a6810);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_c0 = &cf__Og;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_c0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_notificationDisguiseIdentityUser_026a6818);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_69 = false;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_d8 = (cfstringStruct *)0x0;
    }
    else {
      local_d8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_notificationDisguiseIdentityUser_026a6818);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_d8;
    }
    local_69 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_d8;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = &cf_wcr_pf_disguise;
    local_80 = 0;
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_n64MesSvrID);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_80;
    local_80 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_80 != 0) {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_wcr_pf___)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_78;
      local_78 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,local_38,local_78,0,local_50,local_58,0,0,0,0,local_60,local_60,1);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

