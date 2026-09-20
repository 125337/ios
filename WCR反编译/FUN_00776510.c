// FUN_00776510 @ 00776510

void FUN_00776510(void)

{
  char *pcVar1;
  
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_onImportSuperFloat__026a7f60,FUN_007765d4);
    _class_replaceMethod(pcVar1,PTR_s_WCRefine_checkAndImportSuperFloa_026a7f68,FUN_00777054,"v@:@")
    ;
    _class_replaceMethod
              (pcVar1,PTR_s_WCRefine_checkAndImportSuperFloa_026a7f70,FUN_0077717c,"v@:@@");
  }
  return;
}

