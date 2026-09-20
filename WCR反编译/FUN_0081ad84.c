// FUN_0081ad84 @ 0081ad84

void FUN_0081ad84(void)

{
  char *pcVar1;
  char *local_28;
  
  if ((DAT_028cd270 & 1) == 0) {
    pcVar1 = "MMThemeManager";
    _objc_getClass();
    if (pcVar1 == (char *)0x0) {
      local_28 = (char *)0x0;
    }
    else {
      local_28 = pcVar1;
      _class_getInstanceMethod(pcVar1,PTR_s_imageNamed__0269fd20);
    }
    if (local_28 != (char *)0x0) {
      DAT_028cd270 = 1;
      _MSHookMessageEx(pcVar1,PTR_s_imageNamed__0269fd20,FUN_0083e0a8,&DAT_028cd278);
      _WCRefineSwitchDiagNote(&cf_theme_lateHookinstalled_one_shot_);
    }
  }
  return;
}

