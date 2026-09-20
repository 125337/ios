// reloadMemberList: @ 01527e78

/* Function Stack Size: 0x18 bytes */

void WCRCommonGroupMemberDataLogic::reloadMemberList_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_40 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_40 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAllContacts__026b0340);
  (*(code *)PTR__objc_release_02578630)(local_40);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilteredContacts__026b0348);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

