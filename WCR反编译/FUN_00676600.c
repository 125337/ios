// FUN_00676600 @ 00676600

void FUN_00676600(void)

{
  char *pcVar1;
  
  pcVar1 = "WCTableViewSectionManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_addCell__0269e3f8,FUN_00676660,&DAT_028cbc98);
  DAT_026f4510 = 1;
  return;
}

