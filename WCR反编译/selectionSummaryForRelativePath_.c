// selectionSummaryForRelativePath: @ 01fa6de8

/* Function Stack Size: 0x18 bytes */

ID WCRefineWatermarkLibraryViewController::selectionSummaryForRelativePath_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_50;
  ID local_40;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_selectionMarkersForRelativePath__026c9d90,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
  if (IVar1 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_componentsJoinedByString__0269d140,&::cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_50;
  if (IVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

