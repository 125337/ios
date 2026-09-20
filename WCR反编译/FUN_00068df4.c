// FUN_00068df4 @ 00068df4

void FUN_00068df4(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((DAT_028c7cb1 & 1) == 0) {
    pcVar1 = "WKScrollView";
    _objc_getClass();
    FUN_00069eb0(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_00069f4c,&DAT_028c7cb8);
    FUN_00069eb0(pcVar1,PTR_s__scrollViewWillBeginDragging_0269ddc0,FUN_00069fb4,&DAT_028c7cc0);
    FUN_00069eb0(pcVar1,PTR_s__scrollViewWillEndDraggingWithDe_0269ddc8,FUN_0006a01c,&DAT_028c7cc8);
    pcVar2 = "WKChildScrollView";
    _objc_getClass();
    FUN_00069eb0(pcVar2,PTR_s_didMoveToWindow_0269ddb8,FUN_0006a0a4,&DAT_028c7cd0);
    FUN_00069eb0(pcVar2,PTR_s__scrollViewWillBeginDragging_0269ddc0,FUN_0006a10c,&DAT_028c7cd8);
    FUN_00069eb0(pcVar2,PTR_s__scrollViewWillEndDraggingWithDe_0269ddc8,FUN_0006a174,&DAT_028c7ce0);
    pcVar2 = "WKOverflowScrollView";
    _objc_getClass();
    FUN_00069eb0(pcVar2,PTR_s_didMoveToWindow_0269ddb8,FUN_0006a1fc,&DAT_028c7ce8);
    FUN_00069eb0(pcVar2,PTR_s__scrollViewWillBeginDragging_0269ddc0,FUN_0006a264,&DAT_028c7cf0);
    FUN_00069eb0(pcVar2,PTR_s__scrollViewWillEndDraggingWithDe_0269ddc8,FUN_0006a2cc,&DAT_028c7cf8);
    pcVar2 = "WKWebView";
    _objc_getClass();
    if (((pcVar2 != (char *)0x0) && (DAT_028c7d00 == 0)) &&
       (pcVar3 = pcVar2, _class_getInstanceMethod(pcVar2,PTR_s_didMoveToWindow_0269ddb8),
       pcVar3 != (char *)0x0)) {
      _MSHookMessageEx(pcVar2,PTR_s_didMoveToWindow_0269ddb8,FUN_0006a354,&DAT_028c7d00);
    }
    if ((pcVar1 != (char *)0x0) || (pcVar2 != (char *)0x0)) {
      DAT_028c7cb1 = 1;
    }
  }
  return;
}

