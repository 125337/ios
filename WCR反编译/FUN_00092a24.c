// FUN_00092a24 @ 00092a24

void FUN_00092a24(void)

{
  char *pcVar1;
  
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_onImportAvatarFrame__0269e1e0,FUN_00092b30);
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_checkAndImportAvatarFra_0269e1e8,FUN_00093bb0,"v@:@")
    ;
    _class_replaceMethod
              (pcVar1,PTR_s_WCRefine_checkAndImportAvatarFra_0269e1f0,FUN_00093e84,"v@:@@");
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_importAvatarFrameZipFil_0269e1f8,FUN_00094328,"q@:@")
    ;
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_showAvatarFrameToast__0269e200,FUN_00094618,"v@:@");
  }
  return;
}

