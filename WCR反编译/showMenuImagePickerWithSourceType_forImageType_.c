// showMenuImagePickerWithSourceType:forImageType: @ 01b868e0

/* Function Stack Size: 0x20 bytes */

void WCRefineMenuBeautifyViewController::showMenuImagePickerWithSourceType_forImageType_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  undefined *puVar1;
  undefined *local_50;
  undefined8 local_48;
  long_long local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_48,param_4);
  puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
  _objc_alloc_init();
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSourceType__0269fb68,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDelegate__026ca910,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAllowsEditing__026a0ba0,0);
  local_28 = &cf_public_image;
  local_20 = &cf_public_movie;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setMediaTypes__0269fb70);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_setAssociatedObject(local_50,"imageType",local_48,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

