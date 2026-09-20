// FUN_00790fdc @ 00790fdc

void FUN_00790fdc(void)

{
  char *pcVar1;
  
  pcVar1 = "UISwitch";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00791044,&DAT_028cca78);
  _MSHookMessageEx(pcVar1,PTR_s_setOn_animated__026a8098,FUN_007912cc,&DAT_028cca80);
  return;
}

