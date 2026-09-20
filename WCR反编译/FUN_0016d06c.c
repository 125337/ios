// FUN_0016d06c @ 0016d06c

void FUN_0016d06c(long param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  pcVar2 = "NewMainFrameViewController";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addClearUnreadTapMethodToClass__0269f890,pcVar2
              );
  }
  _objc_autoreleasePoolPop(lVar1);
  return;
}

