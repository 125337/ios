// FUN_001f5600 @ 001f5600

void FUN_001f5600(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  _WCRChatScrollFeatureProbeBegin(auStack_38,6,local_18);
  FUN_001f5684(local_18);
  _WCRChatScrollFeatureProbeEnd(auStack_38);
  _objc_storeStrong(&local_18,0);
  return;
}

