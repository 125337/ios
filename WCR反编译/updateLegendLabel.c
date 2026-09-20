// updateLegendLabel @ 01c6fbc8

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::updateLegendLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  uint local_3c;
  undefined *local_38;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectionMode_026c2628);
  local_29 = 0;
  local_3c = 0;
  if ((param_1 & 1) != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scene_026a6c60);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_3c = 0;
    if (IVar1 != 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_multiSelect_026c25f0);
      local_3c = (uint)IVar1 ^ 1;
    }
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  puVar2 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
  if ((local_3c & 1) == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_legendLabel_026c2648);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_legendLabel_026c2648);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scene_026a6c60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_displayNameForScene__026b0fe8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_legendLabel_026c2648);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_legendLabel_026c2648);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

