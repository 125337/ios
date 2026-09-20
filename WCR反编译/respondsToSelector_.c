// respondsToSelector: @ 01fcd894

/* Function Stack Size: 0x18 bytes */

bool WCRefineConfig::respondsToSelector_(ID param_1,SEL param_2,SEL param_3)

{
  byte bVar1;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  bVar1 = 0;
  if (((((undefined *)param_3 == PTR_s_autoRestartEnabled_026af438) ||
       ((undefined *)param_3 == PTR_s_setAutoRestartEnabled__026bc4b0)) ||
      ((undefined *)param_3 == PTR_s_friendVerifyWarning2Enabled_026b4ab0)) ||
     ((undefined *)param_3 == PTR_s_setFriendVerifyWarning2Enabled__026bc330)) {
    local_11 = 1;
  }
  else {
    local_38 = PTR_WCRefineConfig_026d02e0;
    local_40 = param_1;
    local_30 = param_3;
    local_28 = param_2;
    local_20 = param_1;
    _objc_msgSendSuper2(&local_40,PTR_s_respondsToSelector__026ca818,param_3);
    local_11 = bVar1 & 1;
  }
  return (uint)local_11;
}

