// wcrHomeAvatarStrip_reloadSessions @ 0034ee20

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_reloadSessions(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrHomeAvatarStrip_reloadSession_026a2340);
  FUN_0034e7a8();
  if ((IVar1 & 1) != 0) {
    FUN_0034ee7c(param_1,&cf_reloadSessions);
  }
  return;
}

