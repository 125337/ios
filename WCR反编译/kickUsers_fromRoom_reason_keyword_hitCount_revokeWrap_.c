// kickUsers:fromRoom:reason:keyword:hitCount:revokeWrap: @ 00eda7c4

/* Function Stack Size: 0x40 bytes */

bool WCRefineChatRoomKickHelper::kickUsers_fromRoom_reason_keyword_hitCount_revokeWrap_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7
               ,ID param_8)

{
  ID IVar1;
  undefined8 local_50;
  long_long local_48;
  undefined8 local_40;
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
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_50 = 0;
  local_48 = param_7;
  _objc_storeStrong(&local_50,param_8);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcr_kickUsers_fromRoom_reason_ke_026ab708,local_28,local_30,local_38,
             local_40,local_48,local_50,1);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (bool)IVar1;
}

