// FUN_00332a88 @ 00332a88

void FUN_00332a88(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    pcVar3 = "MMMsgCommonTipsView";
    _objc_getClass(0);
    _MSHookMessageEx(pcVar3,PTR_s_didMoveToSuperview_0269f328,FUN_00332bc0,&DAT_028c9e80);
    _MSHookMessageEx(pcVar3,PTR_s_heightToFitWidth__026a2128,FUN_00332eb0,&DAT_028c9e88);
    pcVar3 = "UIView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_setAccessibilityLabel__0269e968,FUN_00332ecc,&DAT_028c9e90);
  }
  return;
}

