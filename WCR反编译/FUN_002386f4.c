// FUN_002386f4 @ 002386f4

void FUN_002386f4(long param_1)

{
  undefined *puVar1;
  undefined *local_40 [3];
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImagePickerController_026ce390,
             PTR_s_isSourceTypeAvailable__0269fb60,0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
    FUN_0022a7fc(*(undefined8 *)(param_1 + 0x20),0);
    FUN_0022a3a0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
    _objc_alloc_init();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSourceType__0269fb68,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAllowsEditing__026a0ba0,1);
    puVar1 = PTR_WCRCACustomAvatarPickerDelegateProxy_026ce410;
    _objc_alloc_init();
    local_40[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setController__0269d2d8,*(undefined8 *)(param_1 + 0x28));
    _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x28),DAT_026dfb38,local_40[0],1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelegate__026ca910,local_40[0]);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_presentViewController_animated_c_0269d2b0,
               local_28,1,0);
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

