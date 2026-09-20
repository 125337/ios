// FUN_00267798 @ 00267798

void FUN_00267798(void)

{
  char *pcVar1;
  
  pcVar1 = "ExptService";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getExpt_withDef__026a1360,FUN_0026783c,&DAT_028c94e8);
  pcVar1 = "ChatRoomContactSelectUtil";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_recentAtDisplayCount_026a1368,FUN_00267a30,&DAT_028c94f0);
  _MSHookMessageEx(pcVar1,PTR_s_recentAtRecordCount_026a1370,FUN_00267af8,&DAT_028c94f8);
  return;
}

