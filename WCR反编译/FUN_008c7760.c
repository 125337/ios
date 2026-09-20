// FUN_008c7760 @ 008c7760

void FUN_008c7760(undefined8 param_1,undefined8 param_2)

{
  (*DAT_028ce110)(param_1,param_2);
  DAT_028ce04a = 1;
  _WCRInputBoxNoteVoiceSessionBegan();
  if ((DAT_028ce049 & 1) != 0) {
    FUN_008c58c4(2,1,param_1);
    FUN_008c58c4(4,0,param_1);
  }
  return;
}

