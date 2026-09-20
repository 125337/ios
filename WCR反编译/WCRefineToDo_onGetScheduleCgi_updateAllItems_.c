// WCRefineToDo_onGetScheduleCgi:updateAllItems: @ 007f9558

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoHook::WCRefineToDo_onGetScheduleCgi_updateAllItems_
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
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_onGetScheduleCgi_up_026a8678,local_28,local_30);
  FUN_007f9358();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

