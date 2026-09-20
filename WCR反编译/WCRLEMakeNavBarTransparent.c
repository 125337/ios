// WCRLEMakeNavBarTransparent @ 01b5f0b8

/* WARNING: Removing unreachable block (ram,0x01b5f224) */
/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::WCRLEMakeNavBarTransparent(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTranslucent__026a19b8,1);
    puVar2 = PTR__OBJC_CLASS___UINavigationBarAppearance_026cf3e8;
    _objc_alloc_init();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_configureWithTransparentBackgrou_026bf838);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setStandardAppearance__026bf840,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setScrollEdgeAppearance__026bf848,local_38)
    ;
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_compactAppearance_026bf850);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCompactAppearance__026bf858,local_38);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

