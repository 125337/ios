// FUN_0023c9d8 @ 0023c9d8

void FUN_0023c9d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  pcVar3 = "NewMainFrameViewController";
  _objc_getClass();
  puVar1 = PTR_s_WCRefine_onDoNotDisturbTapped_026a0c38;
  if (pcVar3 != (char *)0x0) {
    lVar4 = *(long *)(param_1 + 0x20);
    _class_getInstanceMethod(lVar4,PTR_s_WCRefine_onDoNotDisturbTapped_026a0c38);
    if (lVar4 != 0) {
      lVar5 = lVar4;
      _method_getImplementation();
      _method_getTypeEncoding(lVar4);
      _class_addMethod(pcVar3,puVar1,lVar5,lVar4);
    }
  }
  _objc_autoreleasePoolPop(lVar2);
  return;
}

