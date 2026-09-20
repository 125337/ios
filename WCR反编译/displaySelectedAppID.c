// displaySelectedAppID @ 01bf9524

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsTailPickerViewController::displaySelectedAppID(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_68;
  cfstringStruct *local_38;
  cfstringStruct *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postSessionMode_026c0b80);
  if (((param_1 & 1) == 0) || ((DAT_028e4618 & 1) == 0)) {
    pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_68 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else {
    if (DAT_028e4610 == (cfstringStruct *)0x0) {
      local_38 = &::cf___;
    }
    else {
      local_38 = DAT_028e4610;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_38;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

