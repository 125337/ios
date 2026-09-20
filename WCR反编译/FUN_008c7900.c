// FUN_008c7900 @ 008c7900

void FUN_008c7900(undefined8 param_1,undefined8 param_2,long param_3)

{
  _WCRInputBoxNoteVoiceSessionBegan();
  (*DAT_028ce128)(param_1,param_2,param_3);
  if (param_3 == 3) {
    DAT_028ce1e8 = 1;
  }
  else if ((param_3 == 2) || (param_3 == 1)) {
    DAT_028ce1e8 = 0;
  }
  return;
}

