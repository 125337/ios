// downloadVideoTryingURLs:completion: @ 01000eb8

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkMediaSender::downloadVideoTryingURLs_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3,param_3,param_4,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  lVar1 = local_48;
  puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
  if (lVar2 == 0) {
    if (local_48 != 0) {
      local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_20 = &cf_eS_u0W_W;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkMediaSender,
                 0xfffffffffffffffe);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_downloadVideoTryingURLs_index_co_026ad908,local_40,0,local_48);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

