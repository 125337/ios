// FUN_007224e8 @ 007224e8

void FUN_007224e8(byte param_1)

{
  char *pcVar1;
  char *local_28;
  char *local_20;
  byte local_11;
  
  pcVar1 = "SettingUtil";
  local_11 = param_1;
  _objc_getClass();
  local_20 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getMainSettingExt_026a7860);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getMainSettingExt_026a7860);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setM_bUploadHDImage__026a7868);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setM_bUploadHDImage__026a7868,local_11 & 1);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

