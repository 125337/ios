// FUN_0071748c @ 0071748c

void FUN_0071748c(void)

{
  char *pcVar1;
  
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_onImportFrame__026a7770,FUN_00717598);
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_checkAndImportFrame__026a7778,FUN_00718618,"v@:@");
    _class_replaceMethod
              (pcVar1,PTR_s_WCRefine_checkAndImportFrame_wit_026a7780,FUN_007188ec,"v@:@@");
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_importFrameZipFile__026a7788,FUN_00718d90,"B@:@");
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_showFrameToast__026a7790,FUN_00719874,"v@:@");
  }
  return;
}

