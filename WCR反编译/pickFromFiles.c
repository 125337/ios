// pickFromFiles @ 01e08b88

/* WARNING: Removing unreachable block (ram,0x01e08e14) */
/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatBallWarehouseViewController::pickFromFiles(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  SEL local_40;
  ID local_38;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_40 = param_2;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObjects__026af658,
             *(undefined8 *)PTR__UTTypePNG_02578600);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UTType_026cf608;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithIdentifier__026c5cb0,
             &cf_public_zip_archive);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,puVar2);
  }
  puVar1 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithIdentifier__026c5cb0,
             &cf_com_pkware_zip_archive);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithIdentifier__026c5cb0,&cf_public_image);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDelegate__026ca910,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setAllowsMultipleSelection__026ae558,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_68,1);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

