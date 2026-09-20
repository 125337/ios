// selectFloatingBackgroundFromFiles @ 019c5278

/* WARNING: Removing unreachable block (ram,0x019c53c8) */
/* Function Stack Size: 0x10 bytes */

void WCRefineFloatingTabBarSettingsViewController::selectFloatingBackgroundFromFiles
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_68;
  undefined *local_58;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028e4442);
  _objc_retainAutoreleasedReturnValue();
  local_68 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_68 = &cf_day;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_68;
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_58 = (undefined *)0x0;
  puVar2 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  _objc_alloc();
  local_28 = *(undefined8 *)PTR__UTTypeImage_025785e0;
  local_20 = *(undefined8 *)PTR__UTTypeMovie_025785f8;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_initForOpeningContentTypes_asCop_026ba6d0,puVar3,1);
  puVar1 = local_58;
  local_58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelegate__026ca910,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAllowsMultipleSelection__026ae558,0);
  _objc_setAssociatedObject(local_58,&DAT_028e4442,local_50,3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

