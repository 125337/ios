// tableView:titleForFooterInSection: @ 01e41b24

/* Function Stack Size: 0x20 bytes */

ID WCRTGLinkedGroupPicker::tableView_titleForFooterInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  cfstringStruct *pcVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = &cf_sQes_egn_NvJ_Y;
  if (param_4 != 0) {
    pcVar1 = &cf_bXTegnTek_nS9eTb_tbXT9eRTeq_TSR_0y_uegnf_P>f_ySmRSdTR0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar1;
}

