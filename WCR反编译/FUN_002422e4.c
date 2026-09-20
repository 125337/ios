// FUN_002422e4 @ 002422e4

void FUN_002422e4(void)

{
  char *pcVar1;
  
  pcVar1 = "WCActionSheet";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showInView__0269d310,FUN_0024238c,&DAT_028c9358);
  pcVar1 = "EditImageForwardAndEditLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_editImageActionSheetClickedButto_026a0d60,FUN_00242e00,&DAT_028c9360
                  );
  pcVar1 = "ForwardMessageLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_forwardMessage__026a0d68,FUN_00243010,&DAT_028c9368);
  return;
}

