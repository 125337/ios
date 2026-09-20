// FUN_004f94b8 @ 004f94b8

void FUN_004f94b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_028caee8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028caee8,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x20));
  _objc_sync_exit(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

