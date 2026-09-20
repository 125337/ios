// countSummaryForUsers:emptyText: @ 01dde08c

/* Function Stack Size: 0x20 bytes */

ID WCRefineSmallSignalSettingsViewController::countSummaryForUsers_emptyText_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  ulong local_68;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_68 = 0;
  }
  else {
    local_68 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  }
  bVar1 = false;
  if (local_68 == 0) {
    if (local_38 == (cfstringStruct *)0x0) {
      local_80 = &cf__gb;
    }
    else {
      local_80 = local_38;
    }
    local_70 = local_80;
  }
  else {
    local_70 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_48 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_70;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

