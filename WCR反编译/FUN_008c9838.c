// FUN_008c9838 @ 008c9838

void FUN_008c9838(undefined8 param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_008c9908();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  if (lVar1 == 0) {
    _WCRInputBoxNoteVoiceSessionBegan();
  }
  else {
    _WCRInputBoxNoteVoiceSessionBeganWithTouch(lVar1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

