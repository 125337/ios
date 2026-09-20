// setAnimatedImagePlaybackEnabled: @ 00f52150

/* Function Stack Size: 0x14 bytes */

void WCRefineEmoticonUtil::setAnimatedImagePlaybackEnabled_(ID param_1,SEL param_2,bool param_3)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *local_40;
  cfstringStruct *local_38;
  char *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  pcVar1 = "MMAnimatedImagePlayMgr";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_sharedInstance;
    local_30 = pcVar1;
    _NSSelectorFromString();
    pcVar1 = local_30;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = &cf_startUpdateTasks;
      if ((local_21 & 1) == 0) {
        pcVar2 = &cf_stopUpdateTasks;
      }
      local_40 = pcVar1;
      _NSSelectorFromString();
      if ((local_40 != (char *)0x0) &&
         (pcVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar2),
         ((ulong)pcVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar2);
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  return;
}

