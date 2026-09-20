// importBackgroundMedia @ 01ecb684

/* WARNING: Removing unreachable block (ram,0x01ecbc58) */
/* WARNING: Removing unreachable block (ram,0x01ecbd94) */
/* WARNING: Removing unreachable block (ram,0x01ecbd84) */
/* WARNING: Removing unreachable block (ram,0x01ecbda4) */
/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListSettingsViewController::importBackgroundMedia(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *local_188;
  undefined *local_170;
  undefined *local_160;
  undefined *local_150;
  undefined *local_140;
  undefined *local_130;
  undefined *local_120;
  undefined *local_110;
  undefined *local_100;
  undefined *local_f0;
  undefined *local_d8;
  undefined *local_d0;
  SEL local_c8;
  cfstringStruct *local_c0;
  undefined8 local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = param_2;
  local_c0 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  local_88 = *(undefined8 *)PTR__UTTypeImage_025785e0;
  puVar1 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithFilenameExtension__026c7828,&cf_gif);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_f0 = *(undefined **)PTR__UTTypeImage_025785e0;
  }
  local_80 = local_f0;
  puVar2 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithFilenameExtension__026c7828,&cf_webp);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_100 = *(undefined **)PTR__UTTypeImage_025785e0;
  }
  local_78 = local_100;
  puVar3 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithFilenameExtension__026c7828,&cf_png);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_110 = *(undefined **)PTR__UTTypeImage_025785e0;
  }
  local_70 = local_110;
  puVar4 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithFilenameExtension__026c7828,&cf_jpg);
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_120 = *(undefined **)PTR__UTTypeImage_025785e0;
  }
  local_68 = local_120;
  puVar5 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithFilenameExtension__026c7828,&cf_jpeg);
  _objc_retainAutoreleasedReturnValue();
  local_130 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_130 = *(undefined **)PTR__UTTypeImage_025785e0;
  }
  local_60 = local_130;
  puVar6 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithFilenameExtension__026c7828,&cf_heic);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    local_140 = *(undefined **)PTR__UTTypeImage_025785e0;
  }
  local_58 = local_140;
  puVar7 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithFilenameExtension__026c7828,&cf_mp4);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    local_150 = *(undefined **)PTR__UTTypeMovie_025785f8;
  }
  local_50 = local_150;
  puVar8 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithFilenameExtension__026c7828,&cf_mov);
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar8;
  if (puVar8 == (undefined *)0x0) {
    local_160 = *(undefined **)PTR__UTTypeMovie_025785f8;
  }
  local_48 = local_160;
  puVar9 = PTR__OBJC_CLASS___UTType_026cf608;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithFilenameExtension__026c7828,&cf_m4v);
  _objc_retainAutoreleasedReturnValue();
  local_170 = puVar9;
  if (puVar9 == (undefined *)0x0) {
    local_170 = *(undefined **)PTR__UTTypeMovie_025785f8;
  }
  local_40 = local_170;
  local_38 = *(undefined8 *)PTR__UTTypeMovie_025785f8;
  local_30 = *(undefined8 *)PTR__UTTypeData_025785c8;
  puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88,0xc
            );
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar10;
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDelegate__026ca910,local_c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setAllowsMultipleSelection__026ae558,0);
  puVar1 = local_d8;
  pcVar11 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_pendingMediaVariant_026be588);
  _objc_retainAutoreleasedReturnValue();
  local_188 = pcVar11;
  if (pcVar11 == (cfstringStruct *)0x0) {
    local_188 = &cf_light;
  }
  _objc_setAssociatedObject(puVar1,"todoBgVariant",local_188,1);
  (*(code *)PTR__objc_release_02578630)(pcVar11);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_presentViewController_animated_c_0269d2b0,local_d8,1);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

