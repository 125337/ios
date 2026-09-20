// proxyWithText: @ 01cd29dc

/* Function Stack Size: 0x18 bytes */

ID WCRefineProfileInputValueProxy::proxyWithText_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *local_40;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineProfileInputValueProxy_026cf4f0;
  _objc_alloc_init();
  if (local_28 == (cfstringStruct *)0x0) {
    local_40 = &::cf___;
  }
  else {
    local_40 = local_28;
  }
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,local_40);
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

