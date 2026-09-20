// onGetRightBarButton @ 0195a2f4

/* Function Stack Size: 0x10 bytes */

ID WCRefineFakeLocationSettingsViewController::onGetRightBarButton(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *local_18;
  
  local_18 = "MMUICommonUtil";
  _objc_getClass();
  puVar1 = PTR_s_getBarButtonWithTitle_target_act_026ab8e0;
  if (local_18 != (char *)0x0) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_getBarButtonWithTitle_target_act_026ab8e0);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,puVar1,&cf_nx_,param_1,PTR_s_onSevLocation__026b9c60,5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_0195a3d0;
    }
  }
  local_18 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
LAB_0195a3d0:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

