// presentWebFilePickerForCallbackId:type: @ 01efb914

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoListWebSettingsViewController::presentWebFilePickerForCallbackId_type_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_a8;
  undefined *local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined *local_78;
  ulong local_70;
  undefined8 local_68;
  SEL local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  local_60 = param_2;
  local_58 = (undefined *)param_1;
  _objc_storeStrong(&local_68,param_3);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_setPendingWebFileCallbackId__026c73e8,local_68);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_a8 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_a8;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if (((uVar2 & 1) == 0) ||
     (puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR__OBJC_CLASS___UIImagePickerController_026ce390,
                PTR_s_isSourceTypeAvailable__0269fb60,0), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
    _objc_alloc();
    local_50 = &cf_public_image;
    local_48 = &cf_public_movie;
    local_40 = &cf_public_audio;
    local_38 = &cf_public_data;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,4
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_initWithDocumentTypes_inMode__026a2270,puVar3,0);
    local_90 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setDelegate__026ca910,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setAllowsMultipleSelection__026ae558,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_presentViewController_animated_c_0269d2b0,local_90,1);
    _objc_storeStrong(&local_90,0);
    local_84 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
    _objc_alloc_init();
    local_80 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSourceType__0269fb68);
    local_30 = &cf_public_image;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setMediaTypes__0269fb70);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setDelegate__026ca910,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setModalPresentationStyle__0269d2a8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_presentViewController_animated_c_0269d2b0,local_80,1);
    local_84 = 1;
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

