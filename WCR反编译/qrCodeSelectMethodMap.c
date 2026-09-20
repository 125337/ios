// qrCodeSelectMethodMap @ 01f34244

/* Function Stack Size: 0x10 bytes */

ID WCRefineUIBeautifyViewController::qrCodeSelectMethodMap(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028e4890);
  _objc_retainAutoreleasedReturnValue();
  local_28 = (undefined *)param_1;
  if ((undefined *)param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_28 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_setAssociatedObject(local_18,&DAT_028e4890,local_28,1);
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

