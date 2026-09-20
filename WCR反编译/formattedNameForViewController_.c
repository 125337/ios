// formattedNameForViewController: @ 0091fa6c

/* Function Stack Size: 0x18 bytes */

ID WCNavigationMonitor::formattedNameForViewController_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_50;
  ID local_48;
  cfstringStruct *local_40;
  int local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_nil;
    local_34 = 1;
    goto LAB_0091fd24;
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_chineseLabelForViewController__026aa508,local_30);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_40;
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_BaseMsgContentViewController);
  if (((ulong)pcVar1 & 1) == 0) {
LAB_0091fc5c:
    if ((local_48 == 0) ||
       (IVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       IVar2 == 0)) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_34 = 1;
    }
    else {
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_34 = 1;
      local_18 = pcVar1;
    }
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_chatIdentifierForViewController__026aa510,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar2;
    if ((IVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0), IVar2 == 0)) {
      uVar3 = 0;
      local_34 = 0;
    }
    else {
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 1;
      local_34 = 1;
      local_18 = pcVar1;
    }
    _objc_storeStrong(uVar3,&local_50,0);
    if (local_34 == 0) goto LAB_0091fc5c;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
LAB_0091fd24:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

