// FUN_006dee28 @ 006dee28

void FUN_006dee28(void)

{
  char *pcVar1;
  
  pcVar1 = "SayHelloViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_006def30,&DAT_028cc2c8);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_006def84,&DAT_028cc2d0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_006defdc,&DAT_028cc2d8);
  _MSHookMessageEx(pcVar1,PTR_s_OnSayHelloDataChange_026a6c70,FUN_006df058,&DAT_028cc2e0);
  _MSHookMessageEx(pcVar1,PTR_s_OnClear__026a6c78,FUN_006df09c,&DAT_028cc2e8);
  _MSHookMessageEx(pcVar1,PTR_s_GetClearTip_026a6c80,FUN_006df26c,&DAT_028cc2f0);
  _MSHookMessageEx(pcVar1,PTR_s_actionSheet_clickedButtonAtIndex_026a1170,FUN_006df400,&DAT_028cc2f8
                  );
  return;
}

