// FUN_01111cd8 @ 01111cd8

void FUN_01111cd8(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  
  _os_unfair_lock_lock(&DAT_028e3540);
  bVar1 = DAT_028e3520 == (undefined *)0x0;
  if (bVar1) {
    local_38 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_20 = local_38;
  }
  else {
    local_38 = DAT_028e3520;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_38;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  _os_unfair_lock_unlock(&DAT_028e3540);
  puVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

