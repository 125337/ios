// menuHighlightColorHexDark @ 0161124c

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatProfileStore::menuHighlightColorHexDark(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_currentValueForKey__026b1898,&cf_menuHighlightColorHexDark);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) != 0) {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    IVar3 = local_30;
    if (IVar2 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar3;
      goto LAB_0161134c;
    }
  }
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_menuHighlightColorHex_026b1948);
  _objc_retainAutoreleasedReturnValue();
  local_18 = IVar3;
LAB_0161134c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

