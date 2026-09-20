// FUN_0102c30c @ 0102c30c

void FUN_0102c30c(long param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined *local_f0;
  undefined *local_d0;
  undefined *local_a8;
  undefined *local_98;
  undefined *local_88;
  undefined *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  byte local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_59 = true;
  if ((*(long *)(param_1 + 0x30) != 4) && (local_59 = true, *(long *)(param_1 + 0x30) != 5)) {
    local_59 = *(long *)(param_1 + 0x30) == 6;
  }
  pcVar2 = &cf_g1Y_nxNtQ__S;
  if ((bool)local_59 == false) {
    pcVar2 = &cf_wg1Y_;
  }
  local_58 = param_1;
  local_50 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = PTR__OBJC_CLASS___NSError_026ce470;
  bVar4 = false;
  bVar3 = false;
  bVar1 = false;
  local_68 = pcVar2;
  if ((local_59 & 1) == 0) {
    local_f0 = *(undefined **)(param_1 + 0x20);
    bVar1 = local_f0 == (undefined *)0x0;
    if (bVar1) {
      local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_98 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_40 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
                 0xfffffffffffffffc);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_d0;
      local_a8 = local_d0;
    }
    local_d0 = local_f0;
  }
  else {
    local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
    local_78 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    bVar4 = true;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
               0xfffffffffffffff8);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    local_88 = local_d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_d0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if (bVar4) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,local_70);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

