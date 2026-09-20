// sendRepositoryCode:toChatName: @ 015a9110

/* Function Stack Size: 0x20 bytes */

bool WCRefineVoicePackSender::sendRepositoryCode_toChatName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID IVar2;
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
  uVar1 = local_28;
  FUN_015a91d8();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_sendRepositoryItem_toChatName_co_0269d728,uVar1,local_30,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (bool)IVar2;
}

