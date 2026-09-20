// onContactSendOrVerifyFail:opCode:returnCode: @ 00402098

/* Function Stack Size: 0x20 bytes */

void WCRAutoAcceptFriendDelegate::onContactSendOrVerifyFail_opCode_returnCode_
               (ID param_1,SEL param_2,ID param_3,unsigned_int param_4,int param_5)

{
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_storeStrong(&local_28,0);
  return;
}

