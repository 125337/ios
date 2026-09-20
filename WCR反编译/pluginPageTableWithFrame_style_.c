// pluginPageTableWithFrame:style: @ 00fa1c78

/* Function Stack Size: 0x38 bytes */

ID WCRefineHelper::pluginPageTableWithFrame_style_
             (ID param_1,SEL param_2,CGRect param_3,long_long param_4)

{
  char *pcVar1;
  undefined8 in_d0;
  double in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  char *local_68;
  char *local_58;
  char *local_50;
  double local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  double local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = param_3.field0_0x0.field0_0x0;
  local_68 = "WCTableView";
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  local_28 = in_d1;
  local_20 = in_d2;
  local_18 = in_d3;
  _objc_getClass();
  if (local_68 == (char *)0x0) {
    local_68 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
  }
  local_50 = local_68;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,local_28,local_20,local_18);
  local_58 = local_68;
  if (local_28 < 1.0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_setContentInsetAdjustmentBehavio_026ca8d8,0);
  }
  pcVar1 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar1;
}

