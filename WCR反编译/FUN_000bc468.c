// FUN_000bc468 @ 000bc468

void FUN_000bc468(long param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = &cf_WCRefine_doClearUnreadMsgWithToast_;
  _NSSelectorFromString(&cf_WCRefine_doClearUnreadMsgWithToast_);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,pcVar1,*(undefined8 *)(param_1 + 0x20));
  return;
}

