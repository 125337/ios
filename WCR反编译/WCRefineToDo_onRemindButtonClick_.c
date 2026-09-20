// WCRefineToDo_onRemindButtonClick: @ 007f9d84

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHook::WCRefineToDo_onRemindButtonClick_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_onRemindButtonClick_026a87a8,local_28);
  FUN_007f9358();
  _objc_storeStrong(&local_28,0);
  return;
}

