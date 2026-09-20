// hideActionMenu @ 0094f238

/* Function Stack Size: 0x10 bytes */

void WCRClipboardHistoryPanelController::hideActionMenu(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIMenuController_026ce770;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIMenuController_026ce770,PTR_s_sharedMenuController_026a0478);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingActionItem__026aaa38,0);
  return;
}

