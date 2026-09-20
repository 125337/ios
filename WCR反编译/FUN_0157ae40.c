// FUN_0157ae40 @ 0157ae40

byte FUN_0157ae40(ulong param_1)

{
  undefined *puVar1;
  byte local_11;
  
  FUN_0156c6b8();
  if ((param_1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar1 = PTR_s_onMultiTalkButtonClick_026b0778;
    FUN_015698b0(PTR_s_onMultiTalkButtonClick_026b0778,PTR_s_onMultiTalkButtonClicked__026b0780,
                 &cf_group_voice_call);
    local_11 = (byte)puVar1 & 1;
  }
  return local_11;
}

