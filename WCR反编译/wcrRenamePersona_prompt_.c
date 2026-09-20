// wcrRenamePersona:prompt: @ 017cb540

/* Function Stack Size: 0x20 bytes */

void WCRefineAIPersonaLibraryViewController::wcrRenamePersona_prompt_
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
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWorkingName__026b4fb0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWorkingPrompt__026b4fb8,local_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrShowEditStage_title_message_d_026b4fd0,1,&cf__TT,&cf_S9eTW_c_yQ_OcNS,
             local_28,0x14,1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

