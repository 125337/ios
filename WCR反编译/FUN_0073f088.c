// FUN_0073f088 @ 0073f088

void FUN_0073f088(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined8 local_40;
  byte local_31;
  undefined *local_30;
  undefined *local_18;
  
  _os_unfair_lock_lock(&DAT_028cc5a8);
  if ((DAT_028cc5ac & 1) == 0) {
    puVar2 = PTR_WCRefineAuth_026ce2c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAuth_026ce2c8,PTR_s_silentHiddenOfficialAccountUsern_026a7bf0);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 0;
    local_50 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_50 = PTR__OBJC_CLASS___NSSet_026ce150;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_30 = local_50;
    }
    local_31 = puVar2 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
    if ((local_31 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&DAT_028cc5a0,local_18);
    DAT_028cc5ac = 1;
    _objc_storeStrong(&local_18,0);
  }
  uVar1 = DAT_028cc5a0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar1;
  _os_unfair_lock_unlock(&DAT_028cc5a8);
  uVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

