// FUN_0069e504 @ 0069e504

void FUN_0069e504(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  
  if ((DAT_028cbd90 & 1) == 0) {
    pcVar1 = "MoreViewController";
    _objc_getClass();
    pcVar2 = &cf_addFunctionSection;
    _NSSelectorFromString();
    pcVar3 = pcVar1;
    _class_getInstanceMethod(pcVar1,pcVar2);
    if ((pcVar1 != (char *)0x0) && (pcVar3 != (char *)0x0)) {
      pcVar4 = &cf_WCRefine_openBuiltInPluginHub;
      _NSSelectorFromString(&cf_WCRefine_openBuiltInPluginHub);
      _class_addMethod(pcVar1,pcVar4,FUN_0069ed78,"v@:");
      _MSHookMessageEx(pcVar1,pcVar2,FUN_0069f064,&DAT_028cbd98);
      DAT_028cbd90 = 1;
    }
  }
  return;
}

