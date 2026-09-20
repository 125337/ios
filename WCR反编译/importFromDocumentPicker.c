// importFromDocumentPicker @ 019a089c

/* WARNING: Removing unreachable block (ram,0x019a0970) */
/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::importFromDocumentPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (undefined *)0x0;
  puVar2 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  local_38 = param_2;
  local_30 = param_1;
  _objc_alloc();
  local_20 = *(undefined8 *)PTR__UTTypeItem_025785e8;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_initForOpeningContentTypes_asCop_026ba6d0,puVar3,1);
  puVar1 = local_40;
  local_40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelegate__026ca910,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAllowsMultipleSelection__026ae558,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

