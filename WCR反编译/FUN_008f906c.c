// FUN_008f906c @ 008f906c

byte FUN_008f906c(undefined8 param_1)

{
  char *pcVar1;
  char *local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_008f9224;
  }
  pcVar1 = "AudioReceiver";
  _objc_getClass();
  FUN_008f3348();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
LAB_008f91e8:
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_downloadVoiceMessage__026a4588);
    if (((ulong)pcVar1 & 1) == 0) goto LAB_008f91e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_downloadVoiceMessage__026a4588,local_20);
    local_11 = 1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_008f9224:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

