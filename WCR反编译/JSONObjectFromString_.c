// JSONObjectFromString: @ 0101c328

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::JSONObjectFromString_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  long local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_dataUsingEncoding__026a12e8,4);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    if (lVar1 == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,lVar1,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar2;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

