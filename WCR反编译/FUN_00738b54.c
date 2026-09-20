// FUN_00738b54 @ 00738b54

void FUN_00738b54(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  
  pcVar1 = "CKEntitlements";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = "initWithEntitlementsDict:";
    _sel_registerName("initWithEntitlementsDict:");
    FUN_00738df8(pcVar1,pcVar2,FUN_0073aa88,&DAT_028cc558);
  }
  pcVar1 = "CKContainer";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = "_initWithContainerIdentifier:";
    _sel_registerName("_initWithContainerIdentifier:");
    FUN_00738df8(pcVar1,pcVar2,FUN_0073acf0,&DAT_028cc560);
    pcVar2 = "_setupWithContainerID:options:";
    _sel_registerName("_setupWithContainerID:options:");
    FUN_00738df8(pcVar1,pcVar2,FUN_0073afb4,&DAT_028cc568);
  }
  FUN_00738aec();
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_class_0269cd60);
  pcVar1 = "_initWithSuiteName:container:";
  _sel_registerName("_initWithSuiteName:container:");
  FUN_00738df8(puVar3,pcVar1,FUN_0073b2b0,&DAT_028cc570);
  pcVar1 = "WCAppExtensionDataUtil";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _object_getClass();
    pcVar2 = "appGroupID";
    _sel_registerName("appGroupID");
    FUN_00738df8(pcVar1,pcVar2,FUN_0073b86c,&DAT_028cc578);
  }
  pcVar1 = "WCExtDataUtil";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _object_getClass();
    pcVar2 = "appGroupID";
    _sel_registerName("appGroupID");
    FUN_00738df8(pcVar1,pcVar2,FUN_0073b908,&DAT_028cc580);
  }
  pcVar1 = "MSEShareMainViewController";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = "doAuthenticateCheck";
    _sel_registerName("doAuthenticateCheck");
    FUN_00738df8(pcVar1,pcVar2,FUN_0073b9a4,&DAT_028cc588);
    pcVar2 = "onCheckAuthenticateDidFinish:";
    _sel_registerName("onCheckAuthenticateDidFinish:");
    pcVar4 = pcVar1;
    _class_getInstanceMethod(pcVar1,pcVar2);
    if ((pcVar4 != (char *)0x0) && (_method_getNumberOfArguments(), (int)pcVar4 == 3)) {
      pcVar2 = "onCheckAuthenticateDidFinish:";
      _sel_registerName("onCheckAuthenticateDidFinish:");
      FUN_00738df8(pcVar1,pcVar2,FUN_0073bac4,&DAT_028cc590);
    }
  }
  return;
}

