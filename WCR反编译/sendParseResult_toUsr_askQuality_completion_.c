// sendParseResult:toUsr:askQuality:completion: @ 0100b95c

/* Function Stack Size: 0x2c bytes */

void WCRefineLinkMediaSender::sendParseResult_toUsr_askQuality_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 local_40;
  byte local_31;
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
  local_31 = (byte)param_5;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_sendParseResult_toUsr_askQuality_026ada60,local_28,local_30,local_31 & 1
             ,0,local_40);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

