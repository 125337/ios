// FUN_00537f58 @ 00537f58

void FUN_00537f58(void)

{
  char *pcVar1;
  
  pcVar1 = "WCTimeLineCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_updateWithDataItem_actionAreaVM__026a4c18,FUN_00537fa0,&DAT_028cb238
                  );
  return;
}

