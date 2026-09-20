// presentLocalWatermarkPicker @ 017fe25c

/* WARNING: Removing unreachable block (ram,0x017fe40c) */
/* Function Stack Size: 0x10 bytes */

void WCRefineAssistFunctionViewController::presentLocalWatermarkPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___PHPickerConfiguration_026ceee0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___PHPickerFilter_026ceee8;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPickerFilter_026ceee8,PTR_s_imagesFilter_026b30e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFilter__026b30e8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelectionLimit__026b30f0,0);
  puVar1 = PTR__OBJC_CLASS___PHPickerViewController_026ceef0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDelegate__026ca910,local_28);
  puVar1 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,&cf_wcrefine_localWatermarkPicker,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

