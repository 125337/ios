// _WCRefineCanQuickPostChatMessageToMoments @ 0059c9a8

byte _WCRefineCanQuickPostChatMessageToMoments(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_40;
  char *local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0059cce0();
  if ((uVar1 & 1) == 0) {
    pcVar2 = "FavoritesUtil";
    _objc_getClass();
    local_38 = pcVar2;
    if (((local_20 == 0) || (pcVar2 == (char *)0x0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_ConvertMsgToFavItem__026a56a0),
       ((ulong)pcVar2 & 1) == 0)) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_ConvertMsgToFavItem__026a56a0,local_20);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_20;
      local_40 = pcVar2;
      FUN_0059d260(local_20,&cf_m_uiMessageType);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      pcVar2 = local_40;
      FUN_0059d260(local_40,&cf_type);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (((pcVar3 == (char *)0x1) || (pcVar3 == (char *)0x2)) ||
         ((pcVar3 == "\f" || ((pcVar3 == "E" || (pcVar3 == "")))))) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  else {
    local_11 = 0;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

