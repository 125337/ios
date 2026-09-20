// kindForSection: @ 00f6b3c4

/* Function Stack Size: 0x18 bytes */

long_long WCRForwardToGroupPickerViewController::kindForSection_
                    (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_18;
  
  bVar1 = true;
  if (-1 < (long)param_3) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sectionKinds_026ac970);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)IVar3 <= (long)param_3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (bVar1) {
    local_18 = 3;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sectionKinds_026ac970);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return local_18;
}

