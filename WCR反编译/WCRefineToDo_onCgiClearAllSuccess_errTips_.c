// WCRefineToDo_onCgiClearAllSuccess:errTips: @ 007f9878

/* Function Stack Size: 0x1c bytes */

void WCRefineToDoHook::WCRefineToDo_onCgiClearAllSuccess_errTips_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  undefined8 local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_onCgiClearAllSucces_026a86c8,local_21 & 1,local_30);
  FUN_007f9358();
  _objc_storeStrong(&local_30,0);
  return;
}

