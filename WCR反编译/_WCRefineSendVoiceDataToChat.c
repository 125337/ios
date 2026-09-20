// _WCRefineSendVoiceDataToChat @ 008ded1c

ulong _WCRefineSendVoiceDataToChat
                (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_1c = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  uVar1 = local_18;
  FUN_008dee38(local_18,local_1c,local_28,local_30,local_38);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

