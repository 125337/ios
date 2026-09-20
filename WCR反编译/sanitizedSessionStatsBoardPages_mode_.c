// sanitizedSessionStatsBoardPages:mode: @ 0212f86c

/* Function Stack Size: 0x20 bytes */

ID WCRefineConfig::sanitizedSessionStatsBoardPages_mode_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_sanitizedSessionStatsBoardPages__026ca3d8,local_28,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

