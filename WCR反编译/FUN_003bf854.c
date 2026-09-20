// FUN_003bf854 @ 003bf854

void FUN_003bf854(double param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "MainSessionMgr";
  _objc_getClass();
  puVar1 = PTR_s_setNormalSessions__026a2f60;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_instancesRespondToSelector__0269da90,PTR_s_setNormalSessions__026a2f60);
    if (((ulong)pcVar3 & 1) != 0) {
      _MSHookMessageEx(pcVar2,puVar1,FUN_003bf9bc,&DAT_028ca178);
    }
    puVar1 = PTR_s_rebuildMainSessions_026a2f68;
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_instancesRespondToSelector__0269da90,PTR_s_rebuildMainSessions_026a2f68)
    ;
    if (((ulong)pcVar3 & 1) != 0) {
      _MSHookMessageEx(pcVar2,puVar1,FUN_003bfa74,&DAT_028ca180);
    }
  }
  pcVar2 = "MMNewSessionMgr";
  _objc_getClass();
  puVar1 = PTR_s_SyncFulFillSession__026a2f70;
  if ((pcVar2 != (char *)0x0) &&
     (pcVar3 = pcVar2,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar2,PTR_s_instancesRespondToSelector__0269da90,PTR_s_SyncFulFillSession__026a2f70
               ), ((ulong)pcVar3 & 1) != 0)) {
    _MSHookMessageEx(pcVar2,puVar1,FUN_003bfaf0,&DAT_028ca188);
  }
  _CACurrentMediaTime();
  FUN_003bfcb8(param_1 + 6.0,&cf_pinHookInstall);
  return;
}

