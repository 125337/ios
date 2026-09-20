// FUN_00333280 @ 00333280

void FUN_00333280(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    pcVar3 = "MMMsgCommonTipsView";
    _objc_getClass(0);
    _class_addMethod(pcVar3,PTR_s_wcrefineApplyTransparentTips_026a2130,FUN_003334f4);
    _MSHookMessageEx(pcVar3,PTR_s_didMoveToSuperview_0269f328,FUN_00333838,&DAT_028c9e98);
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_00333a8c,&DAT_028c9ea0);
    pcVar3 = "MMMsgTipsMixedListExpandView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_00333b08,&DAT_028c9ea8);
    pcVar3 = "MMMsgTipsExpandView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_00333dc8,&DAT_028c9eb0);
    pcVar3 = "UIView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_setAccessibilityLabel__0269e968,FUN_00334028,&DAT_028c9eb8);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar4);
  }
  return;
}

