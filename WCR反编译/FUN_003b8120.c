// FUN_003b8120 @ 003b8120

void FUN_003b8120(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long local_100;
  long local_c0;
  long local_98;
  long local_88;
  long local_78;
  long local_68;
  long local_40;
  char *local_38;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  pcVar4 = "CContactMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_30;
  local_38 = pcVar4;
  FUN_003b90d0();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar5;
  if (((local_38 == (char *)0x0) || (lVar5 == 0)) ||
     (pcVar4 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_respondsToSelector__026ca818,
                PTR_s_setContact_sessionTop_sync__026a2ed8), ((ulong)pcVar4 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXN_ecn_vRbc);
  }
  else {
    lVar5 = local_30;
    FUN_003b7a54();
    bVar2 = ((byte)lVar5 ^ 1) & 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setContact_sessionTop_sync__026a2ed8,local_40,bVar2,1);
    lVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = lVar5;
    if (lVar5 == 0) {
      local_68 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_68;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_78;
    }
    lVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    FUN_003668c8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSession__0269d2e0);
    (*(code *)PTR__objc_release_02578630)(local_c0);
    (*(code *)PTR__objc_release_02578630)(lVar6);
    if (lVar5 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(lVar5);
    lVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,bVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_00367110(lVar5,&cf_m_bIsTop);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    if (bVar2 == 0) {
      lVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      local_100 = lVar5;
      if (lVar5 == 0) {
        local_88 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_88;
        FUN_00366324();
        _objc_retainAutoreleasedReturnValue();
        local_100 = local_98;
      }
      FUN_003b9978(local_100,0);
      if (lVar5 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      (*(code *)PTR__objc_release_02578630)(lVar5);
    }
    uVar3 = local_28;
    lVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    FUN_003b7208(uVar3,lVar5);
    (*(code *)PTR__objc_release_02578630)(lVar6);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    FUN_00368c14(local_28,&cf_homeLongPressPin);
    pcVar1 = &cf__n_v;
    if (bVar2 == 0) {
      pcVar1 = &cf__Smn_v;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

