// FUN_002ce8d8 @ 002ce8d8

void FUN_002ce8d8(long param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uStack_38 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 8);
  local_40 = *(undefined8 *)PTR__kCMTimeZero_02578bf8;
  local_30 = *(undefined8 *)(PTR__kCMTimeZero_02578bf8 + 0x10);
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_seekToTime__026a1b78,&local_40);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_play_0269f2b0);
  _objc_storeStrong(&local_20,0);
  return;
}

