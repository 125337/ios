// dynamicSystemFontForProperty:inRuleSet:fallback: @ 010ee050

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRefineOfficialTheme::dynamicSystemFontForProperty_inRuleSet_fallback_
          (WCRefineOfficialTheme *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 in_d0;
  char *local_60;
  cfstringStruct *local_58;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = (char *)0x0;
  _objc_storeStrong(&local_40,param_5);
  uVar3 = local_30;
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pointSize_026a1d68);
  FUN_010eda1c(uVar3,uVar2);
  pcVar4 = "UIFont";
  local_48 = in_d0;
  _objc_getClass();
  pcVar5 = &cf_dynamicSystemFontOfSize_;
  local_50 = pcVar4;
  _NSSelectorFromString();
  local_58 = pcVar5;
  if ((local_50 != (char *)0x0) &&
     (pcVar4 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar5),
     ((ulong)pcVar4 & 1) != 0)) {
    pcVar6 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    local_60 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
    pcVar4 = local_60;
    bVar1 = ((ulong)pcVar6 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar4;
    }
    _objc_storeStrong(&local_60,0);
    if (bVar1) goto LAB_010ee208;
  }
  pcVar4 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = pcVar4;
LAB_010ee208:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

