// FUN_008c76a0 @ 008c76a0

void FUN_008c76a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  DAT_028ce04a = 1;
  _WCRInputBoxNoteVoiceSessionBegan();
  if ((DAT_028ce049 & 1) != 0) {
    DAT_028ce1e8 = 0;
    DAT_028ce1e9 = 0;
    FUN_008c58c4(2,1,param_5);
    FUN_008c58c4(4,0,param_5);
  }
  (*DAT_028ce108)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

