// FUN_0071e2f8 @ 0071e2f8

void FUN_0071e2f8(void)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMInputToolView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initSendCaptrueView_026a77b0,FUN_0071e714,&DAT_028cc340);
  _MSHookMessageEx(pcVar1,PTR_s_showSendCaptrueViewAnimated__026a77b8,FUN_0071e768,&DAT_028cc348);
  _MSHookMessageEx(pcVar1,PTR_s_hideSendCaptrueViewAnimated__026a77c0,FUN_0071e7d4,&DAT_028cc350);
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_onSendCaptrueLongPress__026a77c8,FUN_0071e820);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_onSendCaptrueSwipeUp__026a77d0,FUN_0071e8f8);
  pcVar1 = "MMCapturePreviewBrowserController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0071ea28,&DAT_028cc358);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidDisappear__0269de98,FUN_0071ea70,&DAT_028cc360);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillBePoped__026a77d8,FUN_0071eacc,&DAT_028cc368);
  _MSHookMessageEx(pcVar1,PTR_s_DismissMyselfAnimated__026a77e0,FUN_0071eb14,&DAT_028cc370);
  pcVar3 = "dealloc";
  _sel_registerName();
  _MSHookMessageEx(pcVar1,pcVar3,FUN_0071eb5c,&DAT_028cc378);
  pcVar1 = "MMGifPreviewBrowserController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0071eb98,&DAT_028cc380);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidDisappear__0269de98,FUN_0071ebe0,&DAT_028cc388);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillBePoped__026a77d8,FUN_0071ec3c,&DAT_028cc390);
  _MSHookMessageEx(pcVar1,PTR_s_DismissMyselfAnimated__026a77e0,FUN_0071ec84,&DAT_028cc398);
  pcVar3 = "dealloc";
  _sel_registerName("dealloc");
  _MSHookMessageEx(pcVar1,pcVar3,FUN_0071eccc,&DAT_028cc3a0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

