// wcrFinishEdit @ 017ccb9c

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrFinishEdit(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditAlert__026b4ff0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditStage__026b4fe8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWorkingName__026b4fb0,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWorkingPrompt__026b4fb8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setOriginalPersonaName__026b4fa8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrReloadContent_026b4e40);
  return;
}

