// findPageSheetProviderViewInView: @ 01e6a580

/* Function Stack Size: 0x18 bytes */

ID WCRefineTextReplaceViewController::findPageSheetProviderViewInView_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  do {
    if (local_38 == 0) {
      local_18 = 0;
LAB_01e6a6b0:
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
      _objc_autoreleaseReturnValue();
      return local_18;
    }
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_38;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      goto LAB_01e6a6b0;
    }
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  } while( true );
}

