// FUN_00fb8278 @ 00fb8278

void FUN_00fb8278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,local_18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_28;
  FUN_00fc9c64(local_28,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_referQuotedDisplayTextFromMessag_026abd40,local_18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_28);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_30);
  }
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_componentsJoinedByString__0269d140,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

