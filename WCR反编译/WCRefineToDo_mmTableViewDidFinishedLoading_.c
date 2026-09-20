// WCRefineToDo_mmTableViewDidFinishedLoading: @ 007f30a8

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHook::WCRefineToDo_mmTableViewDidFinishedLoading_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_mmTableViewDidFinis_026a85f8,local_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_markHeaderReadyAndS_026a8800,
             &cf_mmTableViewDidFinishedLoading);
  _objc_storeStrong(&local_28,0);
  return;
}

