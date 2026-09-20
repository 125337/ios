// setupHexView @ 01970214

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::setupHexView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_d0;
  undefined8 uVar6;
  undefined8 in_d1;
  undefined8 uVar7;
  undefined8 in_d2;
  undefined8 uVar8;
  undefined8 in_d3;
  undefined8 uVar9;
  undefined *local_180;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_61;
  undefined *local_60;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UITextView_026ce1b8;
  _objc_alloc();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,in_d1,in_d2,in_d3,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_38 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAutoresizingMask__026ca878,0x12);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEditable__026a9fc8,0);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4026000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_fontWithName_size__026a1cd0,
             &cf_Menlo);
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  local_180 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_180 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4026000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedSystemFontOfSize_weigh_026aa590);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_180;
  }
  local_61 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFont__026ca958,local_180);
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar9 = 0x4020000000000000;
  uVar6 = 0x4020000000000000;
  uVar7 = 0x4020000000000000;
  uVar8 = 0x4020000000000000;
  FUN_01961300();
  local_b0 = uVar6;
  uStack_a8 = uVar7;
  local_a0 = uVar8;
  uStack_98 = uVar9;
  local_88 = uVar6;
  uStack_80 = uVar7;
  local_78 = uVar8;
  uStack_70 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar7,uVar8,uVar9,local_38,PTR_s_setContentInset__0269e770);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___NSFileHandle_026cea88;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileHandleForReadingAtPath__026ad8c8);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_c0 = (undefined *)0x0;
  puVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_readDataOfLength__026ad8d0,0x10000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_c0;
  local_c0 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_closeFile_026aa440);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_attributesOfItemAtPath_error__0269db08,IVar2,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  local_e0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf_N6ReN);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_appendString__0269ccb0,&cf_N>f_yMR);
  puVar1 = local_c0;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_bytes_026a9630);
  local_f0 = puVar1;
  for (local_f8 = (undefined *)0x0; puVar1 = local_f8, puVar4 = local_c0,
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0), puVar1 < puVar4;
      local_f8 = local_f8 + 0x10) {
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_appendFormat__0269d148,&cf__08lX);
    puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar1;
    for (local_108 = 0; local_108 < 0x10; local_108 = local_108 + 1) {
      puVar1 = local_f8 + local_108;
      puVar4 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
      if (puVar1 < puVar4) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_appendFormat__0269d148,&cf__02X);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_appendFormat__0269d148,&cf__c);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_appendString__0269ccb0,&::cf_space_s_);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_appendString__0269ccb0,&::cf_space_s_)
        ;
      }
      if (local_108 == 7) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_appendString__0269ccb0,&::cf_space_s_);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_appendFormat__0269d148,&cf_____);
    _objc_storeStrong(&local_100,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setText__026caa88,local_e8);
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_38,0);
  return;
}

