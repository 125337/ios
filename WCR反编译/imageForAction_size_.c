// imageForAction:size: @ 0161d24c

/* Function Stack Size: 0x20 bytes */

ID WCRSuperFloatDisplayHelper::imageForAction_size_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  double dVar1;
  undefined *puVar2;
  double dVar3;
  double local_a0;
  undefined *local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  dVar1 = DAT_02323d38;
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_48 = 0x3ff0000000000000;
  local_a0 = param_4;
  if (param_4 <= 1.0) {
    local_a0 = 1.0;
  }
  local_58 = local_a0;
  local_40 = local_a0;
  puVar2 = local_30;
  local_50 = param_4;
  local_38 = param_4;
  _WCRSuperFloatImageForAction();
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  if ((puVar2 == (undefined *)0x0) ||
     (((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_size_026cab00),
      ABS(local_a0 - local_40) < dVar1 &&
      (dVar3 = dVar1, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_size_026cab00),
      ABS(dVar3 - local_40) < dVar1)))) {
    puVar2 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
  }
  else {
    puVar2 = PTR_WCRefinePluginIconCatalog_026ce4e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_resizedImage_side__026a3d20,
               local_60);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

