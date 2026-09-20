// chatIndentValueForTarget: @ 01b46dbc

/* Function Stack Size: 0x18 bytes */

long_long WCRefineLayoutFunctionViewController::chatIndentValueForTarget_
                    (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_repeatChatRoomIndentLeft_0269e7b0);
    FUN_01b46f10();
    local_18 = puVar1;
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_repeatChatRoomIndentRight_0269e7b8);
    FUN_01b46f10();
    local_18 = puVar1;
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_repeatPrivateChatIndentLeft_0269e7c0);
    FUN_01b46f10();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_repeatPrivateChatIndentRight_0269e7c8);
    FUN_01b46f10();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_38,0);
  return (long_long)local_18;
}

