// FUN_0071b150 @ 0071b150

void FUN_0071b150(void)

{
  char *pcVar1;
  
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_onImportFrame__026a7770,FUN_0071b25c);
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_checkAndImportFrame__026a7778,FUN_0071c124,"v@:@");
    _class_replaceMethod
              (pcVar1,PTR_s_WCRefine_checkAndImportFrame_wit_026a7780,FUN_0071c37c,"v@:@@");
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_importFrameZipFile__026a7788,FUN_0071c770,"B@:@");
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_showFrameToast__026a7790,FUN_0071cee0,"v@:@");
  }
  return;
}

