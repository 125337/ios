// FUN_0158ba88 @ 0158ba88

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0158ba88(long param_1)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  
  pcVar1 = "WCRConfiguredContactRelatedChatRoomListViewController";
  _objc_getClass();
  DAT_028e3aa8 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x20);
    _objc_allocateClassPair(pcVar1,"WCRConfiguredContactRelatedChatRoomListViewController",0);
    DAT_028e3aa8 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      pcVar2 = &cf_tableView_didSelectRowAtIndexPath_;
      _NSSelectorFromString(&cf_tableView_didSelectRowAtIndexPath_);
      _class_addMethod(pcVar1,pcVar2,FUN_0158bb80,"v@:@@");
      pcVar1 = DAT_028e3aa8;
      pcVar2 = &cf_didSelectRowAtIndexPath_;
      _NSSelectorFromString(&cf_didSelectRowAtIndexPath_);
      _class_addMethod(pcVar1,pcVar2,FUN_0158bc2c,"v@:@");
      _objc_registerClassPair(DAT_028e3aa8);
    }
  }
  return;
}

