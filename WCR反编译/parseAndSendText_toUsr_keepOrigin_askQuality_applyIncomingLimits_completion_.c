// parseAndSendText:toUsr:keepOrigin:askQuality:applyIncomingLimits:completion: @ 01009f14

/* Function Stack Size: 0x34 bytes */

void WCRefineLinkMediaSender::
     parseAndSendText_toUsr_keepOrigin_askQuality_applyIncomingLimits_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,bool param_6,bool param_7,
               ID param_8,undefined4 param_9)

{
  undefined8 local_40;
  byte local_33;
  byte local_32;
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
  local_32 = (byte)param_6;
  local_33 = (byte)param_7;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_parseAndSendText_toUsr_keepOrigi_026ada50,local_28,local_30,local_31 & 1
             ,local_32 & 1,local_33 & 1,0,local_40);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

