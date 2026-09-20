// confirmClearSelfGenderAndRegion: @ 01a6fb2c

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::confirmClearSelfGenderAndRegion_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = "SettingMyProfileViewController";
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&cf_S_MR_OHr_gN_ecdkR,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    local_34 = 1;
  }
  else {
    _objc_alloc_init();
    local_40 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_performSelector__026ca7b8,PTR_s_view_026cabd8);
      }
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_fetchData_026bd348);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_performSelector__026ca7b8,PTR_s_fetchData_026bd348);
      }
      local_48 = (char *)0x0;
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_infoLogic);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_valueForKey__0269d128,&cf_m_usrInfo);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_48;
        local_48 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_50,0);
      if (local_48 == (char *)0x0) {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_usrInfo);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_48;
        local_48 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar1 = local_48;
      if (local_48 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                   &cf_WCRefine,&cf_SDe1Y_zT,&cf_wSN,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        local_34 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_m_uiSex);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setValue_forKey__0269d300,&::cf___,&cf_m_nsCountry);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setValue_forKey__0269d300,&::cf___,&cf_m_nsProvince);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setValue_forKey__0269d300,&::cf___,&cf_m_nsCity);
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_Save_026bd350);
        if (((ulong)pcVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                     &cf_WCRefine,&cf_S_MR_OHr_gN_ecdkR,&cf_wSN,0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          local_34 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_performSelector__026ca7b8,PTR_s_Save_026bd350);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                     &cf_WCRefine,&cf_0W_S_nzz,&cf_bwSN,0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          local_34 = 0;
        }
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

