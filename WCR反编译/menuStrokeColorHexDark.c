// menuStrokeColorHexDark @ 01610ad8

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatProfileStore::menuStrokeColorHexDark(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  uint local_54;
  ID local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_currentValueForKey__026b1898,&cf_menuStrokeColorHexDark);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((param_1 & 1) == 0) ||
     (pcVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__3A3A3C;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_menuStrokeColorHex_026b1940);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_uppercaseString_0269d6c8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = 0;
    if (((ulong)pcVar4 & 1) != 0) {
      IVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_uppercaseString_0269d6c8);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_54 = (uint)IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_18 = local_30;
    if ((local_54 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__3A3A3C;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

