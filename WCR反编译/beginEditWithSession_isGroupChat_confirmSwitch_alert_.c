// beginEditWithSession:isGroupChat:confirmSwitch:alert: @ 00ecda58

/* Function Stack Size: 0x2c bytes */

void WCRefineChatIndentOverrideHelper::beginEditWithSession_isGroupChat_confirmSwitch_alert_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,ID param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
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
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
  uVar1 = DAT_028e2a10;
  DAT_028e2a10 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  DAT_028e2a28 = local_29 & 1;
  _objc_storeWeak(&DAT_028e2a18,local_38);
  _objc_storeStrong(&DAT_028e2a20,local_40);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

