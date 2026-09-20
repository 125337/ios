// wcr_shouldAskUsedCodeRemove @ 017354a0

/* Function Stack Size: 0x10 bytes */

bool ThemeBoxAirDropThemePickViewController::wcr_shouldAskUsedCodeRemove(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028e3f87);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_2c = 0;
  if ((param_1 & 1) != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_boolValue_026ca540);
    local_2c = (uint)IVar2;
  }
  _objc_storeStrong(&local_28,0);
  return local_2c & 1;
}

