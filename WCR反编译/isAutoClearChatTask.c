// isAutoClearChatTask @ 01d34434

/* Function Stack Size: 0x10 bytes */

bool WCRefineScheduledTaskViewController::isAutoClearChatTask(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isAutoClearChatTask__026a6cc0);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (bool)puVar1;
}

