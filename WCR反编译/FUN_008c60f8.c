// FUN_008c60f8 @ 008c60f8

void FUN_008c60f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028ce058)(local_18,local_20,local_28);
  uVar1 = 0;
  FUN_008c9688(0,local_18);
  _objc_retainAutoreleasedReturnValue();
  FUN_008c58c4(1,1);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _WCRInputBoxNoteVoiceSessionBegan();
  _objc_storeStrong(&local_28,0);
  return;
}

