// resolvedDisplayImageForItemID:size: @ 0110c8bc

/* Function Stack Size: 0x20 bytes */

ID WCRefinePluginIconCatalog::resolvedDisplayImageForItemID_size_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_48;
  ID local_40;
  double local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_resolvedIconForItemID__026aecd8,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,local_20,PTR_s_displayImageForIconValue_size__026ab508,IVar1);
  _objc_retainAutoreleasedReturnValue();
  local_18 = local_20;
  local_48 = IVar2;
  if (IVar2 == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_defaultIconForItemID__026aece0,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,local_18,PTR_s_previewImageNamed_size__026ab510);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

