// validationErrorForBaseURL: @ 009c8f80

/* Function Stack Size: 0x18 bytes */

ID WCRefineAIClient::validationErrorForBaseURL_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  uVar1 = local_30;
  FUN_009c1714();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_URLWithString__026a16d8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_38;
  FUN_009c907c();
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_cS0W_W;
  }
  else {
    local_18 = (cfstringStruct *)0x0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

