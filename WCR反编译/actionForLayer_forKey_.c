// actionForLayer:forKey: @ 01707140

/* Function Stack Size: 0x20 bytes */

ID SwitchThemesLayerDelegate::actionForLayer_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *local_58;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  bVar1 = (*(byte *)(local_20 + 8) & 1) == 0;
  if (bVar1) {
    local_58 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_58;
  }
  else {
    local_58 = (undefined *)0x0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_58;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

