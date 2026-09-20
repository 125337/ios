// parseAndSendText:toUsr:keepOrigin:sendChoice:completion: @ 01009e24

/* Function Stack Size: 0x34 bytes */

void WCRefineLinkMediaSender::parseAndSendText_toUsr_keepOrigin_sendChoice_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,long_long param_6,
               ID param_7,undefined4 param_8)

{
  undefined8 local_48;
  long_long local_40;
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
  local_48 = 0;
  local_40 = param_6;
  _objc_storeStrong(&local_48,param_7);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_parseAndSendText_toUsr_keepOrigi_026ada50,local_28,local_30,local_31 & 1
             ,0,0,local_40,local_48);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

