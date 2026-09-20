// FUN_01c22758 @ 01c22758

void FUN_01c22758(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  
  pcVar1 = &cf_NewContactTagViewPageSheetController;
  _NSClassFromString();
  if ((pcVar1 != (cfstringStruct *)0x0) &&
     (_class_getInstanceMethod(pcVar1,PTR_s_onDoneInPageSheetMode__026c14f0),
     pcVar1 != (cfstringStruct *)0x0)) {
    pcVar2 = pcVar1;
    _method_getImplementation();
    DAT_028e4638 = pcVar2;
    _method_setImplementation(pcVar1,FUN_01c227ec);
  }
  return;
}

