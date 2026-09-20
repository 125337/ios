// FUN_0002f158 @ 0002f158

void FUN_0002f158(undefined8 param_1,uint param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_0002f204(local_18,_WCRAISessionConversationEnabled,param_2 & 1);
  FUN_0002f204(local_18,_WCRAISessionAutoReplyEnabled,param_2 & 1);
  _objc_storeStrong(&local_18,0);
  return;
}

