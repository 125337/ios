// FUN_0081ac80 @ 0081ac80

void FUN_0081ac80(void)

{
  char *pcVar1;
  char *local_28;
  
  if ((DAT_028cd261 & 1) == 0) {
    pcVar1 = "ThemeBoxInfo";
    _objc_getClass();
    if (pcVar1 == (char *)0x0) {
      local_28 = (char *)0x0;
    }
    else {
      local_28 = pcVar1;
      _class_getInstanceMethod(pcVar1,PTR_s_edgeInsets_026a8bf0);
    }
    if (local_28 != (char *)0x0) {
      DAT_028cd261 = 1;
      _MSHookMessageEx(pcVar1,PTR_s_edgeInsets_026a8bf0,FUN_0083df14,&DAT_028cd268);
    }
  }
  return;
}

