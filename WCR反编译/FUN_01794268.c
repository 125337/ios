// FUN_01794268 @ 01794268

void FUN_01794268(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *local_48;
  
  local_48 = "WCTableViewNormalCellManager";
  _objc_getClass();
  if (local_48 != (char *)0x0) {
    pcVar1 = "WCRefinePluginHubNormalCellManager";
    DAT_028e4030 = local_48;
    _objc_getClass();
    DAT_028e4020 = pcVar1;
    if ((pcVar1 == (char *)0x0) &&
       (pcVar1 = local_48, _objc_allocateClassPair(local_48,"WCRefinePluginHubNormalCellManager",0),
       DAT_028e4020 = pcVar1, pcVar1 != (char *)0x0)) {
      pcVar2 = &cf_getLeftLabelMaxWidth_;
      _NSSelectorFromString();
      _class_getInstanceMethod(local_48,pcVar2);
      if (local_48 == (char *)0x0) {
        local_48 = "d@:d";
      }
      else {
        _method_getTypeEncoding();
      }
      pcVar1 = DAT_028e4020;
      _class_addMethod(DAT_028e4020,pcVar2,FUN_017943ac,local_48);
      if (((ulong)pcVar1 & 1) == 0) {
        _objc_disposeClassPair(DAT_028e4020);
        DAT_028e4020 = (char *)0x0;
      }
      else {
        _objc_registerClassPair(DAT_028e4020);
      }
    }
  }
  return;
}

