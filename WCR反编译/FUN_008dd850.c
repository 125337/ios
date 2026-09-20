// FUN_008dd850 @ 008dd850

void FUN_008dd850(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028ce308)(local_18,local_20,local_28,param_4 & 1);
  _WCRVoiceProgressSeekNotePlayingChanged(local_18,0);
  _objc_storeStrong(&local_28,0);
  return;
}

