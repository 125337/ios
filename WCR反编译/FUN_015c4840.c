// FUN_015c4840 @ 015c4840

undefined4 FUN_015c4840(undefined8 param_1)

{
  char *pcVar1;
  char *local_28;
  long local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "MsgPlayingFacade";
  _objc_getClass();
  FUN_015c5634();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_14 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_lastPlayPosition__026b0de0);
    if ((((ulong)pcVar1 & 1) == 0) || (local_20 == 0)) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_currentPlayTime_026b0de8);
      if (((ulong)pcVar1 & 1) == 0) {
        local_14 = 0;
      }
      else {
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentPlayTime_026b0de8);
        local_14 = SUB84(pcVar1,0);
      }
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPlayPosition__026b0de0,local_20);
      local_14 = SUB84(pcVar1,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

