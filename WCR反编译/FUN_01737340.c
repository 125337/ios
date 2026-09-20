// FUN_01737340 @ 01737340

void FUN_01737340(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_028e3f90;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3f90,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x20));
  _objc_sync_exit(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

