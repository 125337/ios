// confirmMenuOpenTrigger: @ 01e2879c

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatSettingsViewController::confirmMenuOpenTrigger_
               (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_48;
  char *local_40;
  undefined1 local_31;
  undefined8 local_30;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
  local_28 = (undefined1 *)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballAppearance_026b18a0);
  if ((puVar2 == (undefined *)0x0) && (local_28 == (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_el_O_u_cS,&cf_zagv_cN_uNNNbRN_uegSb,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  else {
    puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuOpenTrigger_026b1960);
    if (puVar2 == local_28) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
    }
    else {
      local_30 = 0;
      puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballAppearance_026b18a0);
      local_31 = puVar2 == (undefined *)0x0;
      if (local_28 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        _objc_storeStrong(0,&local_30,&cf__c_uNSb);
      }
      else if (local_28 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        pcVar1 = &cf__SnRSb;
        if (!(bool)local_31) {
          pcVar1 = &cf__SnRSb;
        }
        _objc_storeStrong(&local_30,pcVar1);
      }
      else {
        pcVar1 = &cf_pQSb;
        if (!(bool)local_31) {
          pcVar1 = &cf_pQ_uNSb;
        }
        _objc_storeStrong(&local_30,pcVar1);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setPendingMenuOpenTrigger__026c6218,local_28);
      pcVar3 = "WCUIAlertView";
      _objc_getClass();
      local_40 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setMenuOpenTrigger__026c6230,
                   local_28);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_48 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                   PTR_s_cancelMenuOpenTriggerSwitch_026c6220);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf___Rbc,local_18,
                   PTR_s_commitMenuOpenTriggerSwitch_026c6228);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

