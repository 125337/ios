// FUN_002de04c @ 002de04c

void FUN_002de04c(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  uint local_2c;
  uint local_28;
  
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_killSelf_026a1c70);
  if ((uVar1 & 1) == 0) {
    local_28 = 0;
  }
  else {
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_killSelf_026a1c70);
    local_28 = (uint)uVar1;
  }
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_exitWhenKillSelf_026a1c78);
  if ((uVar1 & 1) == 0) {
    local_2c = 0;
  }
  else {
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitWhenKillSelf_026a1c78);
    local_2c = (uint)uVar1;
  }
  if (((local_28 & 1) != 0) && ((local_2c & 1) != 0)) {
    _WCRefineCrashReporterBreadcrumb(&cf_flutter_killselfabort_intercepted);
    _NSLog(&cf__wcr__flutter_killself_guard_interceptabortcompleted__d);
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_setKillSelf__026a1c68);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setKillSelf__026a1c68,0);
    }
  }
  (*DAT_028c9848)(param_1,param_2,param_3 & 1);
  return;
}

