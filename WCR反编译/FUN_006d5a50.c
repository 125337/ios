// FUN_006d5a50 @ 006d5a50

void FUN_006d5a50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_028cc260;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028cc260,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x20));
  _objc_sync_exit(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

