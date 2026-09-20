// dynamicLengthForProperty:inRuleSet:fallback: @ 010ed910

/* Function Stack Size: 0x28 bytes */

double WCRefineOfficialTheme::dynamicLengthForProperty_inRuleSet_fallback_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  double local_68;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  FUN_010eda1c(local_28,local_30);
  pcVar1 = "UIFont";
  _objc_getClass();
  pcVar2 = &cf_dynamicLength_;
  _NSSelectorFromString();
  local_68 = param_5;
  if ((pcVar1 != (char *)0x0) &&
     (pcVar3 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar3 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2);
    local_68 = param_5;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_68;
}

