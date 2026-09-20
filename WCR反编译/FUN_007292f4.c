// FUN_007292f4 @ 007292f4

void FUN_007292f4(void)

{
  char *pcVar1;
  
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_onImportWatermark__026a7a38,FUN_00729400);
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_checkAndImportWatermark_026a7a40,FUN_0072a468,"v@:@")
    ;
    _class_replaceMethod
              (pcVar1,PTR_s_WCRefine_checkAndImportWatermark_026a7a48,FUN_0072a73c,"v@:@@");
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_importWatermarkZipFile__026a7a50,FUN_0072abe0,"B@:@")
    ;
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_showWatermarkToast__026a7a58,FUN_0072b104,"v@:@");
  }
  return;
}

