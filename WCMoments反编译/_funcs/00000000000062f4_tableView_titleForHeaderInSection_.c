// tableView:titleForHeaderInSection: @0x62f4

/* Function Stack Size: 0x20 bytes */

ID WCMMomentsSettingsController::tableView_titleForHeaderInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = &cf_Ssu;
  if (param_4 != 0) {
    pcVar1 = &cf_sQNcN;
  }
  uVar2 = (*(code *)PTR__objc_retain_00110460)(pcVar1);
  _objc_storeStrong(&local_28,0);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

