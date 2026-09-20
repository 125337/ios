// FUN_01fcbee4 @ 01fcbee4

void FUN_01fcbee4(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  _os_unfair_lock_lock();
  uVar1 = DAT_028e4910;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar1;
  _os_unfair_lock_unlock(&DAT_028e4980);
  uVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

