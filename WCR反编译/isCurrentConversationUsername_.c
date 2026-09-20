// isCurrentConversationUsername: @ 015fdd48

/* Function Stack Size: 0x18 bytes */

bool WCRQuickChatRuntime::isCurrentConversationUsername_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_015fdda8();
  _objc_storeStrong(&local_28,0);
  return (bool)uVar1;
}

