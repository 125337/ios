// sendEmoticonData:title:chatVC:skipHaptic: @ 00f39a64

/* Function Stack Size: 0x2c bytes */

void WCRefineEmoticonToolsHelper::sendEmoticonData_title_chatVC_skipHaptic_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6)

{
  undefined8 local_38;
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
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  DAT_028e2d50 = (byte)param_6 & 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_sendEmoticonData_title_chatVC__026ac138,local_28,local_30,local_38);
  DAT_028e2d50 = 0;
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

