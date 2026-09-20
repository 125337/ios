// forceModeCellWithTitle:sel:mode: @ 01f4c3cc

/* Function Stack Size: 0x28 bytes */

ID WCRefineVersionController::forceModeCellWithTitle_sel_mode_
             (ID param_1,SEL param_2,ID param_3,SEL param_4,long_long param_5)

{
  ID IVar1;
  char *pcVar2;
  ID local_40;
  long_long local_38;
  SEL local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  local_38 = param_5;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_forceModeControlWithSel_mode__026c9110,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "WCTableViewCellManager";
  local_40 = IVar1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar2;
}

