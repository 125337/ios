// getSectionItemCount: @ 01528178

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRCommonGroupMemberDataLogic::getSectionItemCount_
          (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined8 local_48;
  
  if (param_3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_filteredContacts_026b0358);
    _objc_retainAutoreleasedReturnValue();
    local_48 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    local_48 = 0;
  }
  return local_48;
}

