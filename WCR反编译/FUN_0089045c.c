// FUN_0089045c @ 0089045c

byte FUN_0089045c(void)

{
  char *pcVar1;
  char *pcVar2;
  byte local_11;
  
  pcVar1 = "VoIPPushKitNotifyService";
  _objc_getClass();
  if ((pcVar1 == (char *)0x0) ||
     (pcVar2 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getCallkitSwitchFromService_026a9668
               ), ((ulong)pcVar2 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getCallkitSwitchFromService_026a9668);
    local_11 = (byte)pcVar1 & 1;
  }
  return local_11;
}

