// FUN_0106cbf8 @ 0106cbf8

void FUN_0106cbf8(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_b0;
  undefined8 local_a0;
  undefined *local_78;
  undefined *local_58;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = *(undefined **)(param_1 + 0x20);
  bVar1 = local_78 == (undefined *)0x0;
  local_38 = param_1;
  local_30 = param_1;
  if (bVar1) {
    local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
    local_20 = &cf__Kbg1Y_;
    local_48 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
               0xfffffffffffffff5);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    local_58 = puVar2;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_78;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  lVar4 = *(long *)(param_1 + 0x30);
  uVar3 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasMedia_026ada58);
  if ((uVar3 & 1) == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasMedia_026ada58);
  if ((uVar3 & 1) == 0) {
    local_b0 = local_40;
  }
  else {
    local_b0 = (undefined *)0x0;
  }
  (**(code **)(lVar4 + 0x10))(lVar4,local_a0,local_b0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

