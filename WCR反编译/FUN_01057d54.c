// FUN_01057d54 @ 01057d54

void FUN_01057d54(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_80;
  undefined8 local_70;
  undefined *local_50;
  undefined *local_40;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  lVar3 = *(long *)(param_1 + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasMedia_026ada58);
  if ((uVar2 & 1) == 0) {
    local_70 = 0;
  }
  else {
    local_70 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasMedia_026ada58);
  local_80 = PTR__OBJC_CLASS___NSError_026ce470;
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
    local_20 = &cf_X;
    local_40 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
               0xfffffffffffffff8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_80;
  }
  else {
    local_80 = (undefined *)0x0;
  }
  (**(code **)(lVar3 + 0x10))(lVar3,local_70,local_80);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

