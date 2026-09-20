// showForceCallKitEntitlementAlert: @ 01f4ef48

/* Function Stack Size: 0x18 bytes */

void WCRefineVersionController::showForceCallKitEntitlementAlert_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  char *local_50;
  undefined *local_48;
  long local_40;
  undefined4 local_34;
  char *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_30 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0),
     lVar2 == 0)) {
    local_34 = 1;
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_S_MR__TS___0__);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_30;
    local_48 = puVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

