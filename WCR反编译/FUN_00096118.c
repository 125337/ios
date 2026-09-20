// FUN_00096118 @ 00096118

void FUN_00096118(void)

{
  char *pcVar1;
  
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_onImportAvatarFrame__0269e1e0,FUN_00096224);
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_checkAndImportAvatarFra_0269e1e8,FUN_000970ec,"v@:@")
    ;
    _class_replaceMethod
              (pcVar1,PTR_s_WCRefine_checkAndImportAvatarFra_0269e1f0,FUN_00097344,"v@:@@");
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_importAvatarFrameZipFil_0269e1f8,FUN_00097738,"q@:@")
    ;
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_showAvatarFrameToast__0269e200,FUN_0009792c,"v@:@");
  }
  return;
}

