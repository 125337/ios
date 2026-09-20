// presentLocalVideoPickerWithAssociationKey: @ 017f53b0

/* WARNING: Removing unreachable block (ram,0x017f5624) */
/* WARNING: Removing unreachable block (ram,0x017f5784) */
/* WARNING: Removing unreachable block (ram,0x017f57a8) */
/* WARNING: Removing unreachable block (ram,0x017f5810) */
/* WARNING: Removing unreachable block (ram,0x017f571c) */
/* WARNING: Removing unreachable block (ram,0x017f5814) */
/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::presentLocalVideoPickerWithAssociationKey_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_48;
  undefined *local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR__OBJC_CLASS___PHPickerConfiguration_026ceee0;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___PHPickerFilter_026ceee8;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPickerFilter_026ceee8,PTR_s_videosFilter_026b5978);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFilter__026b30e8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSelectionLimit__026b30f0,1);
  puVar1 = PTR__OBJC_CLASS___PHPickerViewController_026ceef0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDelegate__026ca910,local_28);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_isEqualToString__0269ccc8,&cf_wcrefine_localScreenRecordingFramePicker);
  puVar1 = local_48;
  if ((uVar3 & 1) == 0) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_isEqualToString__0269ccc8,&cf_wcrefine_localVideoWatermarkPicker);
    puVar1 = local_48;
    if ((uVar3 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar1,&cf_wcrefine_localVideoWatermarkPicker,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar1,&cf_wcrefine_localScreenRecordingFramePicker,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

