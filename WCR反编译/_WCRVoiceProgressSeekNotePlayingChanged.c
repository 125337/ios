// _WCRVoiceProgressSeekNotePlayingChanged @ 015c3bfc

void _WCRVoiceProgressSeekNotePlayingChanged(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_19 = param_2;
  if ((param_2 & 1) == 0) {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e3b28);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
    if ((uVar1 & 1) == 0) {
      _WCRVoiceProgressSeekHideOverlay(local_18);
    }
    local_2c = 1;
    _objc_storeStrong(&local_28,0);
  }
  else {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e3b29);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
    if ((uVar1 & 1) != 0) {
      FUN_015c3d0c(local_18);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

