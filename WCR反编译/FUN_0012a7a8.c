// FUN_0012a7a8 @ 0012a7a8

void FUN_0012a7a8(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "CContactMgr";
  _objc_getClass();
  puVar1 = PTR_s_addContact_listType_opLog_callEx_0269efc8;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    _class_getInstanceMethod(pcVar2,PTR_s_addContact_listType_opLog_callEx_0269efc8);
    if (pcVar3 != (char *)0x0) {
      _MSHookMessageEx(pcVar2,puVar1,FUN_0012a8cc,&DAT_028c8618);
    }
  }
  puVar1 = PTR_s_onPushModifyContact__0269efd0;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    _class_getInstanceMethod(pcVar2,PTR_s_onPushModifyContact__0269efd0);
    if (pcVar3 != (char *)0x0) {
      _MSHookMessageEx(pcVar2,puVar1,FUN_0012abb4,&DAT_028c8620);
    }
  }
  puVar1 = PTR_s_handleLocalField_oldContact__0269efd8;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    _class_getInstanceMethod(pcVar2,PTR_s_handleLocalField_oldContact__0269efd8);
    if (pcVar3 != (char *)0x0) {
      _MSHookMessageEx(pcVar2,puVar1,FUN_0012ae98,&DAT_028c8628);
    }
  }
  return;
}

