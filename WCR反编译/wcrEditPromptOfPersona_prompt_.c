// wcrEditPromptOfPersona:prompt: @ 017cb640

/* Function Stack Size: 0x20 bytes */

void WCRefineAIPersonaLibraryViewController::wcrEditPromptOfPersona_prompt_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOriginalPersonaName__026b4fa8,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWorkingName__026b4fb0,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWorkingPrompt__026b4fb8,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrPresentPromptEditorTitle_mess_026b4fd8,local_28,&cf_9eQ_NNvc_y,
             local_30,1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

