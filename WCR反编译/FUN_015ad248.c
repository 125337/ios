// FUN_015ad248 @ 015ad248

void FUN_015ad248(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_028e3ab8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3ab8,PTR_s_removeObject__0269d678,*(undefined8 *)(param_1 + 0x20));
  _objc_sync_exit(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

