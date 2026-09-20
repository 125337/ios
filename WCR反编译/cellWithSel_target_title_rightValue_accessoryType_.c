// cellWithSel:target:title:rightValue:accessoryType: @ 00fa230c

/* Function Stack Size: 0x38 bytes */

ID WCRefineHelper::cellWithSel_target_title_rightValue_accessoryType_
             (ID param_1,SEL param_2,SEL param_3,ID param_4,ID param_5,ID param_6,long_long param_7)

{
  char *pcVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  pcVar1 = "WCTableViewNormalCellManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar1;
}

