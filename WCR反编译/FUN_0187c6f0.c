// FUN_0187c6f0 @ 0187c6f0

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0187c6f0(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "WCTableViewSectionManager";
  _objc_getClass();
  pcVar2 = DAT_028e42e0;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = "WCRBubbleCutPreviewSectionManager";
    _objc_getClass();
    if ((pcVar2 == (char *)0x0) &&
       (_objc_allocateClassPair(pcVar1,"WCRBubbleCutPreviewSectionManager",0), pcVar2 = pcVar1,
       pcVar1 != (char *)0x0)) {
      DAT_028e42e0 = pcVar1;
      _class_addMethod(pcVar1,PTR_s_getHeaderView_026b6398,FUN_0187c7e8);
      _class_addMethod(DAT_028e42e0,PTR_s_getFooterView_026b63a0,FUN_0187c860,"@@:");
      _objc_registerClassPair(DAT_028e42e0);
      pcVar2 = DAT_028e42e0;
    }
  }
  DAT_028e42e0 = pcVar2;
  return;
}

