// displayNameForStyle: @ 00f8dc30

/* Function Stack Size: 0x18 bytes */

ID WCRefineGradientPalette::displayNameForStyle_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong local_68;
  cfstringStruct *local_50;
  bool local_41;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_41 = false;
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_68 = 0;
  }
  else {
    local_68 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientPresetId);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_68;
  }
  local_41 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_68;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_itemWithIdentifier__026acc80,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  if (pcVar5 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__IN;
  }
  else {
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar4;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

