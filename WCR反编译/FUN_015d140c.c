// FUN_015d140c @ 015d140c

void FUN_015d140c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  uVar1 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSError_026ce470;
  local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
  if (local_38 == (cfstringStruct *)0x0) {
    local_58 = &cf__Nd_O1Y_;
  }
  else {
    local_58 = local_38;
  }
  local_20 = local_58;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_20,&local_28,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_errorWithDomain_code_userInfo__026a1648,
             &cf_com_qimiao_wcrefine_wechat_theme,uVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar3);
  return;
}

