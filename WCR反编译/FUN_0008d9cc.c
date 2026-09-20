// FUN_0008d9cc @ 0008d9cc

void FUN_0008d9cc(void)

{
  char *pcVar1;
  
  pcVar1 = "MMHeadImageView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _class_getInstanceVariable(pcVar1,"_borderImageView");
    DAT_028c7f80 = pcVar1;
  }
  return;
}

