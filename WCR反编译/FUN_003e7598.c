// FUN_003e7598 @ 003e7598

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_003e7598(void)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  
  pcVar1 = &cf_UIInputSetHostView;
  _NSClassFromString();
  DAT_028ca480 = pcVar1;
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar1 = &cf_UIRemoteKeyboardWindow;
    _NSClassFromString();
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar2 = "UIInputSetHostView";
      _objc_getClass();
      _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_003e7658,&DAT_028ca488);
      pcVar2 = "UIRemoteKeyboardWindow";
      _objc_getClass();
      _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_003e7694,&DAT_028ca490);
    }
  }
  return;
}

