// FUN_01ace0f0 @ 01ace0f0

void FUN_01ace0f0(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  
  pcVar1 = "MultiSelectContactsViewController";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_updatePanelBtn;
    _NSSelectorFromString(&cf_updatePanelBtn);
    _class_getInstanceMethod(pcVar1,pcVar2);
    if (pcVar1 != (char *)0x0) {
      _method_setImplementation(pcVar1,FUN_01ace180);
      DAT_028e4538 = pcVar1;
    }
  }
  return;
}

