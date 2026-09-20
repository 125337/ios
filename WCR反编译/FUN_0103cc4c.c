// FUN_0103cc4c @ 0103cc4c

void FUN_0103cc4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  cfstringStruct *local_78;
  undefined *local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = param_1;
  local_30 = param_1;
  if (*(long *)(param_1 + 0x38) == DAT_028e31d8) {
    puVar2 = PTR_WCRXHSWebExtractSession_026cecb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRXHSWebExtractSession_026cecb8,PTR_s_new_0269d288);
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlatform__026adde8,1);
    local_78 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_78 == (cfstringStruct *)0x0) {
      local_78 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSourceURL__026addf0,local_78);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setPageURL__026adfc8,*(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setFinishOnCardPlayback__026adfd0,*(byte *)(param_1 + 0x40) & 1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setCompletion__0269fdc8,*(undefined8 *)(param_1 + 0x30));
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_start_0269f448);
    _objc_storeStrong(&local_40,0);
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
    local_20 = &cf_bg_Sm;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
               0xfffffffffffffffb);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

