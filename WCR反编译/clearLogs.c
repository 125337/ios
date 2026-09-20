// clearLogs @ 01724fb4

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropLogViewController::clearLogs(ID param_1,SEL param_2)

{
  ID IVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  ID local_60;
  char *local_50;
  undefined *local_48;
  uint local_3c;
  char *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayLogs_026b3af8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar1;
  if (IVar1 == 0) {
    local_60 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  FUN_01724d2c();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "WCUIAlertView";
  local_30 = IVar1;
  _objc_getClass();
  local_38 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf__nzzS_MR__Nve__HQ_Q);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_38;
    local_48 = puVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nzz,local_18,
               PTR_s_confirmClearLogs__026b3b70);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_confirmClearLogs__026b3b70,0);
  }
  local_3c = (uint)(pcVar2 == (char *)0x0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

