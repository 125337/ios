// WCRefineToDo_notifyTaskBarOnMainTableViewInitReady @ 007f3130

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHook::WCRefineToDo_notifyTaskBarOnMainTableViewInitReady(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefineToDo_notifyTaskBarOnMain_026a8608);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_WCRefineToDo_markHeaderReadyAndS_026a8800,
             &cf_notifyTaskBarOnMainTableViewInitReady);
  return;
}

