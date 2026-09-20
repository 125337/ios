// FUN_015dd24c @ 015dd24c

void FUN_015dd24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *local_70;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  puVar3 = PTR__OBJC_CLASS___NSError_026ce470;
  local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toString_026b1000);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_70 = &cf_J;
  }
  local_20 = local_70;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_20,&local_28,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRiFont,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

