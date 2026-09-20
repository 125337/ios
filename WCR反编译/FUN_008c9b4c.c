// FUN_008c9b4c @ 008c9b4c

void FUN_008c9b4c(undefined8 param_1)

{
  uint uVar1;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  _WCRInputBoxCustomPanIsRecognizing();
  if (((uVar1 & 1) == 0) && (_WCRInputBoxNoteVoiceSessionBegan(), (DAT_028ce049 & 1) == 0)) {
    DAT_028ce049 = 1;
    DAT_028ce1e8 = 0;
    DAT_028ce1e9 = 0;
    if ((DAT_028ce04a & 1) == 0) {
      FUN_008c58c4(4,1,local_18);
    }
    else {
      FUN_008c58c4(2,1,local_18);
      FUN_008c58c4(4,0,local_18);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

