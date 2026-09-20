// FUN_003fa92c @ 003fa92c

void FUN_003fa92c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_026e0300);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = uVar1;
  FUN_003f1098();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar2;
  _objc_getAssociatedObject(uVar2,DAT_026e0308);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_20;
  local_40 = uVar2;
  FUN_003f12c8();
  if ((((uVar1 & 1) == 0) && (uVar1 = local_40, FUN_003f12c8(), (uVar1 & 1) == 0)) &&
     (_WCRInputBoxNoteVoiceSessionBegan(), local_18 != 0)) {
    FUN_003fab90(local_20);
    FUN_003fab90(local_40);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

