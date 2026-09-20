// setChatSinkValue:forTarget: @ 01b4911c

/* Function Stack Size: 0x20 bytes */

void WCRefineLayoutFunctionViewController::setChatSinkValue_forTarget_
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
  FUN_01b490cc();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  if (local_30 == 0xb) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setRepeatChatRoomSink__026bf520,local_38);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setRepeatPrivateChatSink__026bf528,local_38);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

