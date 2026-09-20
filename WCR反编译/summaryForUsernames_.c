// summaryForUsernames: @ 00f69bf0

/* Function Stack Size: 0x18 bytes */

ID WCRForwardToGroupPickerViewController::summaryForUsernames_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  ulong local_80;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  undefined8 local_58;
  ulong local_50;
  ulong local_48;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_febXT;
    local_34 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    local_58 = 3;
    local_80 = uVar1;
    if (2 < uVar1) {
      local_80 = 3;
    }
    local_60 = local_80;
    local_48 = local_80;
    local_50 = uVar1;
    for (local_68 = 0; IVar3 = local_20, puVar2 = local_40, local_68 < local_48;
        local_68 = local_68 + 1) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_displayNameForUsername__026ac938);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_componentsJoinedByString__0269d140,&::cf_0)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (local_48 < uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar4;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar4;
    }
    local_34 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

