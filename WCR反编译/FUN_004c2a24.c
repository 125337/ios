// FUN_004c2a24 @ 004c2a24

void FUN_004c2a24(long param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  pcVar2 = "MainFrameActionFloatView";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_hookAddItem__026a3f40,pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_hookAnimateShowInView__026a3f48,pcVar2);
  }
  pcVar2 = "NewMainFrameViewController";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addSearchPluginMethod__026a3f50,pcVar2);
  }
  _objc_autoreleasePoolPop(lVar1);
  return;
}

