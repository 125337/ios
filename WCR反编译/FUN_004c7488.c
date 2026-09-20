// FUN_004c7488 @ 004c7488

void FUN_004c7488(long param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  pcVar2 = "NewMainFrameViewController";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_hookNavigationBarForClass__026a4020,pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_hookNativeSearchHideForClass__026a4028,pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_hookOfficialTopSearchForClass__026a4030,pcVar2)
    ;
  }
  _objc_autoreleasePoolPop(lVar1);
  return;
}

