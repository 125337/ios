// setChatLiftValue:forTarget: @ 01b4cb1c

/* Function Stack Size: 0x20 bytes */

void WCRefineLayoutFunctionViewController::setChatLiftValue_forTarget_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *local_40;
  long_long local_38;
  long_long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_01b4caf8();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  if (local_30 == 0x15) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setRepeatChatRoomLift__026bf588,local_38);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setRepeatPrivateChatLift__026bf590,local_38);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

