// pickBackgroundFromFiles @ 01aedbfc

/* WARNING: Removing unreachable block (ram,0x01aedda0) */
/* WARNING: Removing unreachable block (ram,0x01aede98) */
/* WARNING: Removing unreachable block (ram,0x01aede88) */
/* WARNING: Removing unreachable block (ram,0x01aedea8) */
/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripSettingsViewController::pickBackgroundFromFiles(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_88;
  undefined *local_68;
  undefined *local_60;
  SEL local_58;
  cfstringStruct *local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = *(undefined8 *)PTR__UTTypeImage_025785e0;
  local_28 = *(undefined8 *)PTR__UTTypeMovie_025785f8;
  local_20 = *(undefined8 *)PTR__UTTypeData_025785c8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_58 = param_2;
  local_50 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  local_60 = puVar1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDelegate__026ca910,local_50);
  puVar1 = local_68;
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pendingMediaVariant_026be588);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_88 = &cf_light;
  }
  _objc_setAssociatedObject(puVar1,"hasBgVariant",local_88,1);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_presentViewController_animated_c_0269d2b0,local_68,1);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

