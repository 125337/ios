// selectedContactsSummary @ 017bb584

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIFeatureViewController::selectedContactsSummary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = &cf__gbyJNRV;
    if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_18 = &cf__gbNcd_YS;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

