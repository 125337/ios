// postChangeReason: @ 0151a378

/* Function Stack Size: 0x18 bytes */

void WCRefineTelegramGroupingStore::postChangeReason_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_selection);
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_invalidateFilteredSessionCache_026a2fc0);
  }
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_30;
  local_28 = &cf_reason;
  if (local_40 == (cfstringStruct *)0x0) {
    local_60 = &cf_settings;
  }
  else {
    local_60 = local_40;
  }
  local_20 = local_60;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_20,&local_28,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_postNotificationName_object_user_026a1e90,
             &cf_WCRefineTelegramGroupingDidChangeNotification,IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

