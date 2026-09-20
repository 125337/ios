// presentPhotoPickerForTab:mode: @ 019b87f8

/* Function Stack Size: 0x20 bytes */

void WCRefineFloatingTabBarButtonActionViewController::presentPhotoPickerForTab_mode_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  cfstringStruct *local_68;
  undefined *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  puVar2 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImagePickerController_026ce390,
             PTR_s_isSourceTypeAvailable__0269fb60,0);
  IVar1 = local_18;
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_vQNS_u);
    local_34 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar1,&DAT_028e442b,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_30 == (cfstringStruct *)0x0) {
      local_68 = &cf_light;
    }
    else {
      local_68 = local_30;
    }
    _objc_setAssociatedObject(local_18,&DAT_028e442c,local_68,3);
    puVar2 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
    _objc_alloc_init();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setSourceType__0269fb68,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAllowsEditing__026a0ba0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelegate__026ca910,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

