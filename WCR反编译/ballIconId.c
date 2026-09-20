// ballIconId @ 0160c310

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatProfileStore::ballIconId(ID param_1,SEL param_2)

{
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentValueForKey__026b1898,&cf_ballIconId);
  _objc_retainAutoreleasedReturnValue();
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_30 = &cf_sf_default;
  }
  else {
    local_30 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_30;
}

