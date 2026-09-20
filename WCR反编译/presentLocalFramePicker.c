// presentLocalFramePicker @ 017f6bfc

/* WARNING: Removing unreachable block (ram,0x017f71b8) */
/* Function Stack Size: 0x10 bytes */

void WCRefineAssistFunctionViewController::presentLocalFramePicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  byte local_51;
  undefined1 *local_50;
  undefined1 *local_48;
  SEL local_40;
  ID local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_40 = param_2;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenshotFrameTemplate_026a7498);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_50 = puVar1;
  if ((puVar1 != (undefined1 *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0),
     puVar1 != (undefined1 *)0x0)) {
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1);
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_stringByAppendingPathComponent__026cab30,local_50);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_60,0);
    }
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,&cf__);
    puVar2 = local_50;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_substringToIndex__0269d6c0,puVar3 + -1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_50;
      local_50 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_70);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      local_80 = 0;
      local_90 = 0;
      puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,puVar1,0,&local_90);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_80,local_90);
      local_88 = puVar4;
      if ((puVar4 != (undefined *)0x0) && (local_80 == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode);
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isEqualToString__0269ccc8,&cf_double);
        local_51 = (byte)puVar4;
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  puVar1 = PTR__OBJC_CLASS___PHPickerConfiguration_026ceee0;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___PHPickerFilter_026ceee8;
  local_a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPickerFilter_026ceee8,PTR_s_imagesFilter_026b30e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setFilter__026b30e8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar5 = 2;
  if ((local_51 & 1) == 0) {
    uVar5 = 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setSelectionLimit__026b30f0,uVar5);
  puVar1 = PTR__OBJC_CLASS___PHPickerViewController_026ceef0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDelegate__026ca910,local_38);
  puVar1 = local_a8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,&cf_wcrefine_localFramePicker,puVar4,1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_a8,1);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

