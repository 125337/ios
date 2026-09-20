// FUN_01570774 @ 01570774

byte FUN_01570774(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0157add4();
  if ((uVar1 & 1) == 0) {
    FUN_0156c6b8();
    local_11 = (byte)uVar1;
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      FUN_0157ae40();
      local_11 = local_11 & 1;
    }
  }
  else {
    puVar2 = PTR_s_onVoipInvite_026b0768;
    FUN_015698b0(PTR_s_onVoipInvite_026b0768,PTR_s_onVoiceVoipButtonClicked__026b0770,&cf_voice_call
                );
    local_11 = (byte)puVar2 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

