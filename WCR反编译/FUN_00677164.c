// FUN_00677164 @ 00677164

void FUN_00677164(void)

{
  char *pcVar1;
  
  pcVar1 = "SendPatMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_sendPat__026a63a8,FUN_006771cc,&DAT_028cbcc0);
  _MSHookMessageEx(pcVar1,PTR_s_addPatWrap_toChat_newXMLMessageW_026a63b0,FUN_0067748c,&DAT_028cbcc8
                  );
  return;
}

