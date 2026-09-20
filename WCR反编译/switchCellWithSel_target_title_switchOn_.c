// switchCellWithSel:target:title:switchOn: @ 00fa23f8

/* Function Stack Size: 0x2c bytes */

ID WCRefineHelper::switchCellWithSel_target_title_switchOn_
             (ID param_1,SEL param_2,SEL param_3,ID param_4,ID param_5,bool param_6)

{
  char *pcVar1;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  pcVar1 = "WCTableViewCellManager";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_switchCellForSel_target_title_on_026a0aa8,local_30,local_38,local_40,
               param_6 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

