// FUN_008a7c20 @ 008a7c20

void FUN_008a7c20(void)

{
  char *pcVar1;
  
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_m_uiVideoTime_026a98d0,FUN_008a7cfc,&DAT_028cdde0);
  pcVar1 = "CExtendInfoOfVideo";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_m_uiVideoTime_026a98d0,FUN_008a7d6c,&DAT_028cdde8);
  _MSHookMessageEx(pcVar1,PTR_s_setM_uiVideoTime__026a98d8,FUN_008a7ddc,&DAT_028cddf0);
  pcVar1 = "CUploadVideoWrap";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setM_uiVideoTime__026a98d8,FUN_008a7e40,&DAT_028cddf8);
  return;
}

