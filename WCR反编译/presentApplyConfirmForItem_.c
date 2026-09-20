// presentApplyConfirmForItem: @ 01e3ce10

/* Function Stack Size: 0x18 bytes */

void WCRefineSvgColorSchemeHistoryViewController::presentApplyConfirmForItem_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf___u,local_18,
             PTR_s_confirmApplyHistoryItem__026b7be0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_30);
  _objc_setAssociatedObject(local_30,&DAT_028e47c8,local_28,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

