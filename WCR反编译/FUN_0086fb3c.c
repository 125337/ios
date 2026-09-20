// FUN_0086fb3c @ 0086fb3c

void FUN_0086fb3c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cd7b0)(param_1,param_2);
  if ((DAT_028cd86b & 1) != 0) {
    _WCRChatScrollFeatureProbeBegin(8,local_18);
    FUN_0088d498(local_18);
    _WCRChatScrollFeatureProbeEnd(auStack_40);
  }
  return;
}

