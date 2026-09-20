// FUN_0182441c @ 0182441c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0182441c(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "WCTableViewSectionManager";
  _objc_getClass();
  pcVar2 = DAT_028e4268;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = "WCRAvatarPreviewSectionManager";
    _objc_getClass();
    if ((pcVar2 == (char *)0x0) &&
       (_objc_allocateClassPair(pcVar1,"WCRAvatarPreviewSectionManager",0), pcVar2 = pcVar1,
       pcVar1 != (char *)0x0)) {
      DAT_028e4268 = pcVar1;
      _class_addMethod(pcVar1,PTR_s_getHeaderView_026b6398,FUN_01824514);
      _class_addMethod(DAT_028e4268,PTR_s_getFooterView_026b63a0,FUN_0182458c,"@@:");
      _objc_registerClassPair(DAT_028e4268);
      pcVar2 = DAT_028e4268;
    }
  }
  DAT_028e4268 = pcVar2;
  return;
}

