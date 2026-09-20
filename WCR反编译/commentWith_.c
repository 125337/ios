// commentWith: @ 00fa9d7c

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::commentWith_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  long local_38;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_commentUsers);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObjectsFromArray__0269d540,lVar2);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

