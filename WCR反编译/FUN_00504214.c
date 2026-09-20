// FUN_00504214 @ 00504214

void FUN_00504214(undefined8 param_1)

{
  char *pcVar1;
  char *local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    pcVar1 = "AudioReceiver";
    _objc_getClass();
    FUN_00504994();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_downloadVoiceMessage__026a4588);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_downloadVoiceMessage__026a4588,local_18);
      }
    }
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

