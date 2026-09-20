// showVersionPicker @ 01f53324

/* Function Stack Size: 0x10 bytes */

void WCRefineVersionController::showVersionPicker(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_N_O,local_18,
               PTR_s_selectDefaultVersion_026c9380);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf__O,local_18,
               PTR_s_selectVersion831_026c9388);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf__O,local_18,
               PTR_s_selectVersion833_026c9390);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf__O,local_18,
               PTR_s_selectVersion849_026c9398);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf__O,local_18,
               PTR_s_selectVersion856_026c93a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf__O,local_18,
               PTR_s_selectVersion875_026c93a8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf__O,local_18,
               PTR_s_selectVersion876_026c93b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf__O,local_18,
               PTR_s_selectVersion878_026c93b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

