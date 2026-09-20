// WCRefineToDo_handleSyncAction:remindId: @ 007f98f0

/* Function Stack Size: 0x1c bytes */

void WCRefineToDoHook::WCRefineToDo_handleSyncAction_remindId_
               (ID param_1,SEL param_2,unsigned_int param_3,ID param_4)

{
  undefined8 local_30;
  unsigned_int local_24;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_handleSyncAction_re_026a86d8,local_24,local_30);
  FUN_007f9358();
  _objc_storeStrong(&local_30,0);
  return;
}

