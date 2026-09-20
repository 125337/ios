// wcrShowPromptOfPersona:prompt: @ 017caa40

/* Function Stack Size: 0x20 bytes */

void WCRefineAIPersonaLibraryViewController::wcrShowPromptOfPersona_prompt_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  char *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (char *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (char *)0x0;
  _objc_storeStrong(&local_30,param_4);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_sQ,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

