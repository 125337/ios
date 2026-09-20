// deleteAtIndex: @ 01e327b4

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatURLSchemeViewController::deleteAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined *local_38;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_38 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar1 = local_28;
  if ((-1 < (long)local_28) &&
     (puVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     (long)lVar1 < (long)puVar2)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObjectAtIndex__0269d530,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setURLSchemes__026c5b48,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Rd);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

