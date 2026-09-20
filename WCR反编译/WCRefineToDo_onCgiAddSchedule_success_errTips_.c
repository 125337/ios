// WCRefineToDo_onCgiAddSchedule:success:errTips: @ 007f97d0

/* Function Stack Size: 0x24 bytes */

void WCRefineToDoHook::WCRefineToDo_onCgiAddSchedule_success_errTips_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_onCgiAddSchedule_su_026a86b8,local_28,local_29 & 1,local_38
            );
  FUN_007f9358();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

