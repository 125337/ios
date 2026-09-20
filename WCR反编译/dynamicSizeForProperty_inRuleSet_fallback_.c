// dynamicSizeForProperty:inRuleSet:fallback: @ 010edb48

/* Function Stack Size: 0x30 bytes */

CGSize __thiscall
WCRefineOfficialTheme::dynamicSizeForProperty_inRuleSet_fallback_
          (WCRefineOfficialTheme *this,ID param_1,SEL param_2,ID param_3,ID param_4,CGSize param_5)

{
  CGSize CVar1;
  long lVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  double in_d0;
  double in_d1;
  long local_58;
  undefined8 local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double dStack_28;
  double local_20;
  double dStack_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  dStack_28 = in_d1;
  _objc_storeStrong(&local_48,param_3,param_3,param_4,param_5.field0_0x0,param_5.field1_0x8);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_4);
  lVar2 = local_48;
  FUN_010edd08(local_48,local_50);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "MMThemeUtil";
  local_58 = lVar2;
  _objc_getClass();
  pcVar4 = &cf_parseSizeFromValues_;
  _NSSelectorFromString();
  if (((local_58 == 0) || (pcVar3 == (char *)0x0)) ||
     (pcVar5 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar4),
     ((ulong)pcVar5 & 1) == 0)) {
    dStack_18 = dStack_28;
    local_20 = local_30;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4,local_58);
    pcVar3 = "UIFont";
    local_20 = in_d0;
    dStack_18 = in_d1;
    _objc_getClass();
    pcVar4 = &cf_dynamicLength_;
    _NSSelectorFromString();
    if ((pcVar3 != (char *)0x0) &&
       (pcVar5 = pcVar3,
       (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar4),
       ((ulong)pcVar5 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4);
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  CVar1.field1_0x8 = dStack_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}

