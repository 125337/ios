// displayTitleForAction: @ 01df2bd8

/* Function Stack Size: 0x18 bytes */

ID WCRefineSuperFloatActionPickerViewController::displayTitleForAction_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ID IVar5;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_01df2eec();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (((ulong)pcVar3 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_eR_O;
    local_34 = 1;
    goto LAB_01df2ed0;
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatCustomTitleKey);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)pcVar1 & 1) == 0) {
LAB_01df2da0:
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatTitleKey);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar1 & 1) == 0) {
LAB_01df2e84:
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__g_TTR;
    }
    else {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) goto LAB_01df2e84;
      IVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_isTechnicalTitle__026c5ab0,local_48);
      pcVar1 = local_48;
      if ((IVar5 & 1) != 0) goto LAB_01df2e84;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) goto LAB_01df2da0;
    IVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_isTechnicalTitle__026c5ab0,local_40);
    pcVar1 = local_40;
    if ((IVar5 & 1) != 0) goto LAB_01df2da0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_34 = 1;
  }
  _objc_storeStrong(&local_40,0);
LAB_01df2ed0:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

