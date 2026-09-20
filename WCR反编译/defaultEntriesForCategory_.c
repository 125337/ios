// defaultEntriesForCategory: @ 010f936c

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::defaultEntriesForCategory_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 local_18;
  
  if (param_3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultLongPressEntries_026aecf8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else if (param_3 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultToolbarEntries_026aed00);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else if (param_3 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultDrawerEntries_026aed08);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else if (param_3 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultOtherEntries_026aed10);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    local_18 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

