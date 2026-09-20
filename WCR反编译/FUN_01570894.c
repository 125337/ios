// FUN_01570894 @ 01570894

byte FUN_01570894(undefined8 param_1)

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
    local_11 = 0;
  }
  else {
    puVar2 = PTR_s_onVideoVoipInvite_026b0788;
    FUN_015698b0(PTR_s_onVideoVoipInvite_026b0788,PTR_s_onVideoVoipButtonClicked__026b0790,
                 &cf_video_call);
    local_11 = (byte)puVar2 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

