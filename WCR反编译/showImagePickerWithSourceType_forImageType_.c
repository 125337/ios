// showImagePickerWithSourceType:forImageType: @ 01cdeec8

/* Function Stack Size: 0x20 bytes */

void WCRefineProfileCardBeautifyViewController::showImagePickerWithSourceType_forImageType_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *local_80;
  undefined *local_68;
  undefined *local_58;
  undefined1 *local_50;
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
  puVar2 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
  _objc_alloc_init();
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setSourceType__0269fb68,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDelegate__026ca910,local_30);
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAllowsEditing__026a0ba0,0);
  _WCRefineProfileBgWarehouseTabFromConfig();
  bVar1 = puVar3 != (undefined1 *)((long)&MACH_HEADER.magic + 1);
  local_80 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  if (bVar1) {
    local_28 = &cf_public_image;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_80;
  }
  else {
    local_20 = &cf_public_movie;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_80;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setMediaTypes__0269fb70,local_80);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  _objc_setAssociatedObject(local_50,"imageType",local_48,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

