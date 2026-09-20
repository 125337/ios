// FUN_003e0008 @ 003e0008

void FUN_003e0008(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "MainSessionMgr";
  _objc_getClass();
  puVar1 = PTR_s_minTopCountToFold_026a32c8;
  if ((pcVar2 != (char *)0x0) &&
     (pcVar3 = pcVar2,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar2,PTR_s_instancesRespondToSelector__0269da90,PTR_s_minTopCountToFold_026a32c8),
     ((ulong)pcVar3 & 1) != 0)) {
    _MSHookMessageEx(pcVar2,puVar1,FUN_003e0090,&DAT_028ca328);
  }
  return;
}

