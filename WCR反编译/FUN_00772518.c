// FUN_00772518 @ 00772518

void FUN_00772518(long param_1)

{
  undefined *puVar1;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithString__026a7e40,
             &cf___hKm0RbU_8_);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendString__0269ccb0,&cf__RReQTUS);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendString__0269ccb0,&cf_T__O8h_);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_ic_y,
             local_28,&cf_wSN,&PTR___NSConcreteGlobalBlock_0257fbe8);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

