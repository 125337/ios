// importMarkdownFile @ 01eb9678

/* WARNING: Removing unreachable block (ram,0x01eb98a0) */
/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListMarkdownViewController::importMarkdownFile(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_88;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  SEL local_48;
  ID local_40;
  undefined *local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = *(undefined **)PTR____NSArray0___02578280;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR__OBJC_CLASS___UTType_026cf608;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithFilenameExtension__026c7828,&cf_md);
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_88 = *(undefined **)PTR__UTTypePlainText_02578608;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_88;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar3 = *(undefined8 *)PTR__UTTypePlainText_02578608;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_60 = uVar3;
  local_20 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_50;
  local_50 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDelegate__026ca910,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setAllowsMultipleSelection__026ae558,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_68,1);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

